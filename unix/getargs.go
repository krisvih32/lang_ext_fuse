package unix

// arg[numberofargs][errormessage]
type getargsErrType int

const (
	arg1 getargsErrType = iota
	arg2
	arg3
	arg4Plus
)

// combine getargsErrType and getargsErrErr
type getargsErr struct {
	errType getargsErrType
}
type getargsInfo struct {
	fileInput  string
	fileOutput string
}
type getargsOut struct {
	err  getargsErr
	info getargsInfo
}

func getargs(argc int, argv []string) (out getargsOut) {
	switch argc {
	case 1:
		out.err.errType, out.info.fileInput, out.info.fileOutput =
			arg1, "", ""
	case 2:
		out.err.errType, out.info.fileInput, out.info.fileOutput =
			arg2, "", ""
	case 3:
		out.err.errType, out.info.fileInput, out.info.fileOutput =
			arg3, argv[1], argv[2]
	default:
		out.err.errType, out.info.fileInput, out.info.fileOutput =
			arg4Plus, "", ""
	}
	return
}
