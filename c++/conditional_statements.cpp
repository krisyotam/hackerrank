/*
 * Name: Kris Yotam
 * Date: 10/3/2024
 * Problem: Conditional Statements
 * Platform: HackerRank
 */

#include <bits/stdc++.h>
using namespace std;

// Function prototypes for trimming whitespace
string ltrim(const string &);
string rtrim(const string &);

int main() {
    string n_temp;
    getline(cin, n_temp); // Read the input line

    // Convert trimmed input string to an integer
    int n = stoi(ltrim(rtrim(n_temp)));

    // Array of number words from zero to nine
    string numbers[] = {"zero", "one", "two", "three", "four", 
                        "five", "six", "seven", "eight", "nine"};

    // Check if the number is within the valid range
    if (n >= 0 && n <= 9) {
        printf("%s\n", numbers[n].c_str()); // Output the corresponding word
    } else {
        printf("Number out of range!\n"); // Handle out-of-range numbers
    }

    return 0; // Indicate successful completion
}

// Function to trim leading whitespace from a string
string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
    return s;
}

// Function to trim trailing whitespace from a string
string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());
    return s;
}
