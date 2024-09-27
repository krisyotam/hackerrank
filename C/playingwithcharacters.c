#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 * Author: Kris Yotam
 * Description: This program takes a character, a single word, and a sentence as input
 *              from the user, and then prints them. 
 *              This is a HackerRank solution.
 */

int main() 
{
    char ch;
    char s[100];
    char sen[100]; 
  
    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]", sen);
    printf("%c\n%s\n%s\n", ch, s, sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
