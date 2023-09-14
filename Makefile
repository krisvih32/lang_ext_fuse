main:
	gcc lang_ext_fuse_compiler.c -fsanitize=address -g -L. libcjson.a -Werror -Wall -Wextra
