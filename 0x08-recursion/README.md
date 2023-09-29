0-puts_recursion.c: This function uses recursion to print a string followed by a new line.
It achieves this by printing the first character of the string and then calling itself recursively
with the rest of the string until reaching the null terminator.

1-print_rev_recursion.c: This function recursively prints a string in reverse.
It achieves this by calling itself recursively with the substring starting from the next character
until reaching the null terminator, and then printing the current character.

2-strlen_recursion.c: This function recursively calculates and returns the length of a string.
It achieves this by incrementing a counter and calling itself with the next character
until reaching the null terminator, at which point it returns the final count.

3-factorial.c: This function recursively calculates and returns the factorial of a given number.
It uses the fact that the factorial of a number is equal to the number multiplied by the factorial of the number minus one.
It includes base cases for 0 and 1.

4-pow_recursion.c: This function recursively calculates and returns the value of x raised to the power of y.
It uses the fact that x^y is equal to x times x raised to the power of y minus one.
It includes base cases for y being 0 and 1.

5-sqrt_recursion.c: This function recursively calculates and returns the natural square root of a number.
It uses a binary search approach, checking if the square of a middle value is equal, greater,
or smaller than the input number. It includes base cases for 0 and 1.

6-is_prime_number.c: This function recursively determines whether a given number is prime or not.
It checks if the number is divisible by any number from 2 to the square root of the number.
It includes base cases for 0, 1, and even numbers.

100-is_palindrome.c: This function recursively determines whether a string is a palindrome, which means it reads the same forwards and backwards.
It compares the first and last characters of the string, and if they match,
it calls itself recursively with the substring between them. It includes base cases for strings of length 0 and 1.

101-wildcmp.c: This function recursively compares two strings and returns 1 if they can be considered identical, otherwise returns 0.
It handles wildcard characters '*' and '?'. It compares the characters of both strings
and calls itself recursively with modified substrings based on the wildcard or matched characters.
It includes base cases for empty strings and wildcard matches.
