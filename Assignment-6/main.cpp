// Welcome to my Coffee/Tea Vending Machine!

// Enter coins - 5, 10, or 25 only: 5
// Enter coins - 5, 10, or 25 only: 25
// Enter coins - 5, 10, or 25 only: 0

// Your balance is $0.30

// Please pick an option ($0.25 each):
//     C/c: Coffee
//     T/t: Tea
//     Q/q: Quit
// >> c

// How many would you like?
// >> 2

// Your total is $0.50
// Your balance is $0.30
// Not enough change!! Please add more coins.

// Enter coins - 5, 10, or 25 only: 5
// Enter coins - 5, 10, or 25 only: 25
// Enter coins - 5, 10, or 25 only: 0

// Your balance: $0.60

// Please pick an option ($0.25 each):
//     C/c: Coffee
//     T/t: Tea
//     Q/q: Quit
// >> T

// How many would you like?
// >> 1

// Your total is $0.25
// Your balance is $0.35

// Thank you for using my Vending Machine Program!

#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Welcome to my Coffee/Tea Vending Machine!" << endl;
    cout << endl;
    
    bool vending = true;
    float balanceUSD = 0.0;
    do {
        bool nextCoin = true;
        do {
            int cents = 0;
            // read coin
            do {
                if(!cin) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cin >> cents;
            } while(!cin);

            switch(cents) {
                case 0:
                    nextCoin = false;
                    break;
                case 5:
                case 10:
                case 25:
                    balanceUSD += cents/100.00;
                    break;
                default:
                    cout << "ERROR, RETURNING: "  << cents << endl;
            }
        } while(nextCoin);
    
        // balance
    
        // option
    
        // count
    
        // total
        // balance
        // greater equal -> DONE
        
        // less -> Enter coins repeat above

    } while(vending);

    cout << endl;
    cout << "Thank you for using my Vending Machine Program!" << endl;
}