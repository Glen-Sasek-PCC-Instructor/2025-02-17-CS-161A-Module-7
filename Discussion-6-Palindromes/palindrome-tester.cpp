// write a program that prompts a user for a word or phrase and prints whether it is a palindrome. 
// A palindrome is a word or a phrase that is the same when read both forward and backward. 
// Examples are: "bob," "sees," or "never odd or even" (ignoring spaces). Your choice to ignore punctuation or not.
// Write a program whose input is a word or phrase and outputs whether the input is a palindrome. Input should be case insensitive, "bob" and "Bob" are both palindromes.

// Example:
// Input: Bob
// Output: Bob is a palindrome!

// Input: fun
// Output: fun is not a palindrome!

// TEST NEGATIVES:
// g++ palindrome-tester.cpp && while IFS= read -r line; do ./a.out < <(echo $line); done < test-negative.txt; rm ./a.out

// TEST POSITIVES:
// g++ palindrome-tester.cpp && while IFS= read -r line; do ./a.out < <(echo $line); done < test-positive.txt; rm ./a.out

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    int count = 0;

    bool palindrome = true;

    cout << endl;
    cout << "ENTER whatever? ";
    getline(cin, s); // Gets entire line, including spaces.

    string clean = "";
    // Only keep A-Za-z0-9
    for (int i = 0; i < s.size(); i++) {
        if(isalnum(s[i])) {
            clean.push_back(s[i]);
        }
    }

    cout << endl;
    cout << "Only alnum characters:" << endl;
    cout << clean << endl;
    // TODO: TEST PALINDROME or NOT

    cout << "~~~~~~~~~~~~~~~TODO: TEST PALINDROME or NOT~~~~~~~~~~~~~~~~~" << endl;

    cout << s << endl;
    cout << (palindrome ? "PALINDROME :)" : "NOT A PALINDROME :(") << endl;

    return 0;
}