# lang_ext_fuse
## Overview
The intent of this programming language is to use different snippets from c, go, and python.<br>
## Functions
### func call
The function `call` allows the user to call a function or full file from a C, go or python file.
```
call <path> <full> [function]
path: Path of the file containing the function.
full: Indicates whether the full file should be executed
      true: execute full file
      false: execute a single function from the file
function: Name of function to execute if `full` is false.
      Optional.
```
#### Examples
Execute the function example_func from the file "/Users/Andrew/programs/test.c".
```
call /Users/Andrew/programs/test.c false example_func
```

Execute the full contents of the file "c:\Users\Andrew\Desktop\test.c".
```
call c:\Users\Andrew\Desktop\test.c true
```

## func ret
The function `ret` allows the user to obtain the return value from executing the function `call`.
```
ret var_name
```
#### Examples
Execute the file from the path "c:\Users\Andrew\Desktop\test.c" and store it in test_ret.
```
call /Users/Andrew/programs/test.c false example_func<br>
ret test_ret
```

Execute the file from the path "c:\Users\Andrew\Desktop\test.c" and store it in test_ret.
```
call c:\Users\Andrew\Desktop\test.c true<br>
ret test_ret
```
## Supported Versions
### OS
Darwin
### Architecture
arm64
