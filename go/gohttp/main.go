package main

import "net/http"

func main() {
	http.HandleFunc("/", HttpFunc)
	http.ListenAndServe(":8888", nil)
}

func HttpFunc(w http.ResponseWriter, r *http.Request) {
	w.Write([]byte("Http live Server (* i *)"))
}

// no navegador localhost:8888
