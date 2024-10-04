/*
 * Name: Kris Yotam
 * Date: 10/3/2024
 * Problem: Basic Data Types
 * Platform: HackerRank
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Declar Var for each data type
    int intValue;
    long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    // Read each integer value from input & assign it to a var
    scanf("%d %ld %c %f %lf", &intValue, &longValue, &charValue, &floatValue, &doubleValue);

   // Print each data type out on a new line
    printf("%d\n", intValue);        // Print int
    printf("%ld\n", longValue);      // Print long
    printf("%c\n", charValue);       // Print char
    printf("%f\n", floatValue);      // Print float with default formatting
    printf("%lf\n", doubleValue);    // Print double with default formatting
 
    return 0;
}
