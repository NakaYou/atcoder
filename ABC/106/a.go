package main

import "fmt"

func main(){
	var A,B int
	fmt.Scan(&A)
	fmt.Scan(&B)
	A--
	B--
	fmt.Println(A*B)
}