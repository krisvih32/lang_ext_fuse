package unix

import (
	"fmt"
	"os"
)

func main() {
	args := getargs(len(os.Args), os.Args)
	fmt.Printf("fileinput: %s\nfileoutput:%s\n", args.info.fileInput, args.info.fileOutput)
	return
}
