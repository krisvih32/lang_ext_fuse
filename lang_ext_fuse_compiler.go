package main

import (
	"fmt"
	"os"
)

func main() {
	fmt.Printf("in main")
	getargs(len(os.Args), os.Args)
	return
}
