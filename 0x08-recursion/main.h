#ifndef _MAIN_H
#define _MAIN_H

#define NULL 0

#define ERROR -1

int _putchar(char c);

/**
 * _puts_recursion - print a string using recursion
 * @s: String to print
 *
 * Return: void
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print a string in rev using recursion
 * @s: String to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s);

/**
 * factorial - get the factorial of a number
 * @n: integer number
 *
 * Return: Success ? Factorial : -1
 */

int factorial(int n);


#endif
