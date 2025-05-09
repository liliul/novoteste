package main

import (
	"encoding/json"
	"log"
	"net/http"
	"strconv"
)

type Contact struct {
	Id    int    `json:"id"`
	Name  string `json:"name"`
	Email string `json:"email"`
	Phone string `json:"phone"`
}

type ContactService struct {
	Contacts map[int]Contact
}

func (c *ContactService) Create(w http.ResponseWriter, r *http.Request) {
	var contact Contact
	err := json.NewDecoder(r.Body).Decode(&contact)
	if err != nil {
		http.Error(w, err.Error(), http.StatusAccepted)
		return
	}

	id := len(c.Contacts) + 1
	contact.Id = id

	c.Contacts[id] = contact

	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(contact)
	w.WriteHeader(http.StatusAccepted)
}

func handleCreateContact(w http.ResponseWriter, r *http.Request, service *ContactService) {
	service.Create(w, r)
}

func (c *ContactService) List(w http.ResponseWriter, r *http.Request) {

	w.Header().Set("Content-Type", "application/json")
	var contact []Contact
	for _, ct := range c.Contacts {
		contact = append(contact, ct)
	}

	json.NewEncoder(w).Encode(contact)
}

func (c *ContactService) Get(w http.ResponseWriter, r *http.Request, id int) {

	w.Header().Set("Content-Type", "application/json")

	if val, ok := c.Contacts[id]; ok {
		json.NewEncoder(w).Encode(val)
	} else {
		http.Error(w, "Contact not found", http.StatusNotFound)
	}
}

func handleGetContacts(w http.ResponseWriter, r *http.Request, service *ContactService) {
	q := r.URL.Query()
	if q.Get("id") != "" {
		id, _ := strconv.Atoi(q.Get("id"))
		service.Get(w, r, id)
	} else {
		service.List(w, r)
	}
}

func (c *ContactService) Delete(w http.ResponseWriter, r *http.Request, id int) {
	w.Header().Set("Content-Type", "application/json")
	if _, ok := c.Contacts[id]; ok {
		delete(c.Contacts, id)
		w.WriteHeader(http.StatusOK)
	} else {
		http.Error(w, "Contact not found", http.StatusNotFound)
	}
}

func handleDeleteContacts(w http.ResponseWriter, r *http.Request, service *ContactService) {
	q := r.URL.Query()
	if q.Get("id") != "" {
		id, _ := strconv.Atoi(q.Get("id"))
		service.Delete(w, r, id)
	} else {
		http.Error(w, "Contact not found", http.StatusNotFound)
	}
}

func (c *ContactService) Update(w http.ResponseWriter, r *http.Request, id int) {
	w.Header().Set("Content-Type", "application/json")

	var contact Contact
	err := json.NewDecoder(r.Body).Decode(&contact)
	if err != nil {
		http.Error(w, err.Error(), http.StatusBadRequest)
		return
	}

	if _, ok := c.Contacts[id]; ok {
		contact.Id = id
		c.Contacts[id] = contact
	} else {
		http.Error(w, "Contact not found", http.StatusNotFound)
	}
}

func handleUpdateContacts(w http.ResponseWriter, r *http.Request, service *ContactService) {
	q := r.URL.Query()
	if q.Get("id") != "" {
		id, _ := strconv.Atoi(q.Get("id"))
		service.Update(w, r, id)
	} else {
		http.Error(w, "Contact not found", http.StatusNotFound)
	}
}

func main() {
	service := &ContactService{Contacts: make(map[int]Contact)}

	mux := http.NewServeMux()

	mux.HandleFunc("/contacts", func(w http.ResponseWriter, r *http.Request) {
		switch r.Method {
		case http.MethodGet:
			// fmt.Fprintf(w, "Hello, %q", html.EscapeString(r.URL.Path))
			// service.List(w, r)
			handleGetContacts(w, r, service)
		case http.MethodPost:
			// service.Create(w, r)
			handleCreateContact(w, r, service)
		case http.MethodDelete:
			handleDeleteContacts(w, r, service)
		case http.MethodPatch:
			handleUpdateContacts(w, r, service)
		default:
			http.Error(w, "Method not allowed", http.StatusMethodNotAllowed)
		}
	})

	log.Fatal(http.ListenAndServe(":8080", mux))
}
