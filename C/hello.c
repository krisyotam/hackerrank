#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* ------------------------------------------------
   Author: Kris
   Description: This program reads a line of input 
   from the user, stores it in a character array `s`, 
   and then prints "Hello, World!" followed by the 
   user input. This is a solution for a HackerRank 
   problem.
   
   Input: A line of text from the user.
   Output: "Hello, World!" followed by the user input
   on the next line.
   ------------------------------------------------ */

int main() 
{
    char s[100];                 // Declare a character array to hold the input
    scanf("%[^\n]%*c", s);      // Read a full line of input, including spaces
    printf("Hello, World!\n%s\n", s); // Print greeting and user input

    return 0;                   // Return 0 to indicate successful execution
}
