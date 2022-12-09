# 0x00. C - Hello, World

## About This Directory
It contains my solutions to the problem statements below.

### [Question 1 Solution](./0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

1. The C file name will be saved in the variable `$CFILE`
2. The output should be saved in the file c


### [Question 2 Solution](./1-compiler)

Write a script that compiles a C file but does not link.

1. The C file name will be saved in the variable `$CFILE`
2. The output file should be named the same as the C file, but with the extension .o instead of .c.
    - Example: if the C file is main.c, the output file should be main.o


### [Question 3 Solution](./2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

1. The C file name will be saved in the variable `$CFILE`
2. The output file should be named the same as the C file, but with the extension .s instead of .c.
    - Example: if the C file is main.c, the output file should be main.s


### [Question 4 Solution](./3-name)

Write a script that compiles a C file and creates an executable named `cisfun`.

1. The C file name will be saved in the variable `$CFILE`


### [Question 5 Solution](./4-puts.c)

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

1. Use the function puts
2. You are not allowed to use printf
3. Your program should end with the value 0


### [Question 6 Solution](./5-printf.c)

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

1. Use the function `printf`
2. You are not allowed to use the function `puts`
3. Your program should return 0
4. Your program should compile without warning when using the `-Wall gcc` option


### [Question 7 Solution](./6-size.c)

Write a C program that prints the size of various types on the computer it is compiled and run on.

1. You should produce the exact same output as in the example
2. Warnings are allowed
3. Your program should return 0
4. You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option


### [Question 8 Solution](./100-intel)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

1. The C file name will be saved in the variable `$CFILE`.
2. The output file should be named the same as the C file, but with the extension .s instead of .c.
    - Example: if the C file is main.c, the output file should be main.s


### [Question 9 Solution](./101-quote.c)

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

1. You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
2. Your program should return 1
3. Your program should compile without any warnings when using the `-Wall gcc` option
