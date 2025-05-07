package main

import (
	"encoding/json"
	"log"
	"net/http"
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

func (c *ContactService) List(w http.ResponseWriter, r *http.Request) {

	w.Header().Set("Content-Type", "application/json")
	var contact []Contact
	for _, ct := range c.Contacts {
		contact = append(contact, ct)
	}

	json.NewEncoder(w).Encode(contact)
}

func main() {
	service := &ContactService{Contacts: make(map[int]Contact)}

	mux := http.NewServeMux()

	mux.HandleFunc("/contacts", func(w http.ResponseWriter, r *http.Request) {
		switch r.Method {
		case http.MethodGet:
			// fmt.Fprintf(w, "Hello, %q", html.EscapeString(r.URL.Path))
			service.List(w, r)
		case http.MethodPost:
			service.Create(w, r)
		default:
			http.Error(w, "Method not allowed", http.StatusMethodNotAllowed)
		}
	})

	log.Fatal(http.ListenAndServe(":8080", mux))
}
