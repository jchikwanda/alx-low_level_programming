# 0x02. C - Functions, nested loops

## About This Directory
It contains my solutions to the problem statements below.

### [Question 1 Solution](./0-putchar.c)
Write a program that prints _putchar, followed by a new line.

1. The program should return 0

### [Question 2 Solution](./1-alphabet.c)
Write a function that prints the alphabet, in lowercase, followed by a new line.

1. Prototype: void print_alphabet(void);
2. You can only use _putchar twice in your code

### [Question 3 Solution](./2-print_alphabet_x10.c)
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

1. Prototype: void print_alphabet_x10(void);
2. You can only use _putchar twice in your code

### [Question 4 Solution](./3-islower.c)
Write a function that checks for lowercase character.

1. Prototype: int _islower(int c);
2. Returns 1 if c is lowercase
3. Returns 0 otherwise

FYI: The standard library provides a similar function: islower. Run man islower to learn more.

### [Question 5 Solution](./4-isalpha.c)
Write a function that checks for alphabetic character.

1. Prototype: int _isalpha(int c);
2. Returns 1 if c is a letter, lowercase or uppercase
3. Returns 0 otherwise

FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

### [Question 6 Solution](./5-sign.c)
Write a function that prints the sign of a number.

1. Prototype: int print_sign(int n);
2. Returns 1 and prints + if n is greater than zero
3. Returns 0 and prints 0 if n is zero
4. Returns -1 and prints - if n is less than zero

### [Question 7 Solution](./6-abs.c)
Write a function that computes the absolute value of an integer.

1. Prototype: int _abs(int);

FYI: The standard library provides a similar function: abs. Run man abs to learn more.

### [Question 8 Solution](./7-print_last_digit.c)
Write a function that prints the last digit of a number.

1. Prototype: int print_last_digit(int);
2. Returns the value of the last digit

### [Question 9 Solution](./8-24_hours.c)
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

1. Prototype: void jack_bauer(void);
2. You can listen to this soundtrack while coding :)

### [Question 10 Solution](./9-times_table.c)
Write a function that prints the 9 times table, starting with 0.

1. Prototype: void times_table(void);
2. Format: see example

### [Question 11 Solution](./10-add.c)
Write a function that adds two integers and returns the result.

1. Prototype: int add(int, int);

### [Question 12 Solution](./11-print_to_98.c)
Write a function that prints all natural numbers from n to 98, followed by a new line.

1. Prototype: void print_to_98(int n);
2. Numbers must be separated by a comma, followed by a space
3. Numbers should be printed in order
4. The first printed number should be the number passed to your function
5. The last printed number should be 98
6. You are allowed to use the standard library
