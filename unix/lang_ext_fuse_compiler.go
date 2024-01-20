package main

import (
	"fmt"
	"os"
)

func main() {
	fmt.Printf("in main")
	fmt.Printf(getargs(len(os.Args), os.Args))
	return
}
