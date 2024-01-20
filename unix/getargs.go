package main

import (
	"fmt"
	"os"
	"os/exec"
)

//arg[numberofargs][errormessage]
type getargsErrType int; const
(
	arg1 getargsErrType =iota
	arg2
	arg3
	arg4Plus
)

//combine getargsErrType and getargsErrErr 
//when errType is oddNumberOfParams or none, err is undeterministic
type getargsErr struct {
	errType getargsErrType 
}
type getargsInfo struct{
	fileInput  string
	fileOutput string
}
type getargsOut struct {
	getargsErr  err
	getargsInfo info
}
func getargs(argc int, argv []string) (out getargsOut) {
	switch argc {
	case 1:
		out.err.errType=getargsErrType.arg1
		return
	case 2:
	case 3:
		out.getargsInfo.fileInput, out.getargsInfo.fileOutput=argv[2], argv[3]
		return
	default:
		out.err.getargsErrErr=getargsErrErr.arg4+
	}	
	return
	}
}