/*
You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.

For example:

If the given string is: STR = "abcde". You have to print the string "edcba".
*/

#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string using recursion
void reverse(string& str, int i, int j) {
    // Base case
    if (i > j) {
        return;
    }

    // Processing
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);
}

// Function to reverse a string
string reverseString(string str) {
    reverse(str, 0, str.length() - 1);
    return str;
}

int main() {
    string str = "Hello, World!";
    cout << "Original String: " << str << endl;
    
    string reversedStr = reverseString(str);
    cout << "Reversed String: " << reversedStr << endl;
    
    return 0;
}
