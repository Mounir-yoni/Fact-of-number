#Factorial Calculation Program
This is a simple C program that calculates the factorial of a given integer using recursion. The program prompts the user to input a number, then calculates and displays the factorial of that number.

How the Program Works
The user is prompted to enter a positive integer.
If the entered number is negative, the program informs the user that the factorial of negative numbers is undefined and exits.
For non-negative integers, the program recursively calculates the factorial using a helper function factoriellenumber.
The factorial of a number n is the product of all positive integers less than or equal to n. It is denoted as n!. For example:
5! = 5 * 4 * 3 * 2 * 1 = 120
Example:
If the user enters 5, the program will compute 5! = 120 and display the result.

Features
Recursive calculation of the factorial.
Input validation: If the user enters a negative number, the program displays an appropriate message and exits.
Factorial of 0 is correctly handled as 0! = 1.
