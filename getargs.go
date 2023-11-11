package main

import (
	"fmt"
	"os"
	"os/exec"
)

func getargs(argc int, argv []string) {
	// var e = make([]int, argc)
	fmt.Printf("in getargs")
	fmt.Printf("argc %d\n", argc)
	switch argc {
	case 1:
		{
			wd, err := os.Getwd()
			if err != nil {
				fmt.Printf("%+v\n", err)
			}
			/*out*/ exec.Command("py", fmt.Sprintf("%s%s", wd, "error.py")).Output()
			if err != nil {
				fmt.Printf("error %d error number %o %x  : ", err, err, err)
			}
			fmt.Printf("case 1: no detectable errors\n")
		}
	}
}
