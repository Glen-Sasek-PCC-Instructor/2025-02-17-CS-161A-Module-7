// Given a line of text as input, output the number of characters excluding spaces, periods, exclamation points, or commas.

// Ex: If the input is:

// Listen, Mr. Jones, calm down.
// the output is:

// 21
// Note: Account for all characters that aren't spaces, periods, exclamation points, or commas (Ex: "r", "2", "?").

// COMPILE AND TEST:
// g++ Lab-6-11-1.cpp && ./a.out < <(echo 'Listen, Mr. Jones, calm down.'); rm ./a.out

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int count = 0;

    getline(cin, s); // Gets entire line, including spaces.

    /* Type your code here. */
    for (int i = 0; i < s.size(); i++) {
        switch(s[i]) {
            case ' ':  // Fallthrough
            case '.':  
            case '!':  
            case ',':  
                break;
            default:
                count++;
        }
    }

    cout << count << endl;

    return 0;
}