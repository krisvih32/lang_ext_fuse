# lang_ext_fuse
# The intent of this programming language is to use different snippets from c, go, and python.<br>
## call
#### Calling
call path full function ( optional )<br>
#### Examples
##### 1.
call /Users/Andrew/programs/test.c false example_func<br>
this will execute the function example_func from the path "/Users/Andrew/programs/test.c"<br>
##### 2.
call c:\Users\Andrew\Desktop\test.c true<br>
this will execute the file from the path "c:\Users\Andrew\Desktop\test.c"
## ret
#### Calling
ret var_name
#### Examples
##### 1.
call /Users/Andrew/programs/test.c false example_func<br>
ret test_ret
this will execute the file from the path "c:\Users\Andrew\Desktop\test.c" and store it in test_ret
##### 2.
call c:\Users\Andrew\Desktop\test.c true<br>
ret test_ret
this will execute the file from the path "c:\Users\Andrew\Desktop\test.c" and store it in test_ret
