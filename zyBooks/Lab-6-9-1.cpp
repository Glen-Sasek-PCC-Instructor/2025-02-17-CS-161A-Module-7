// Forms often allow a user to enter an integer.
// Write a program that takes in a string representing an integer as input, and outputs
// Yes if every character is a digit 0-9.

// Ex: If the input is:
// 1995
// the output is:
// Yes

// Ex: If the input is:
// 42,000
// or
// 1995!
// the output is:
// No

// Hint: Use a loop and the isdigit() function (don't forget to include the cctype library).

// COMPILE AND RUN TESTS
// g++ Lab-6-9-1.cpp && for t in '1995' '42,000' '1995!'; do echo TESTING $t; ./a.out < <(echo $t); done; rm ./a.out

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool valid = true;

    /* Type your code here. */
    for (int i = 0; valid && i < s.size(); i++) {
        valid = isdigit(s[i]);
    }

    cout << (valid ? "Yes" : "No") << endl;

    return 0;
}