#include <iostream>
using namespace std;

// Switch statements provide a better code
// readability than a chain IF statement
// Work on int type variables: int, short, char, etc.
int main()
{
    int i;
    cout << "Enter a digit between 1 and 4" << endl;
    cin >> i;

    // Use a switch statement
    // good for testing single values
    switch(i)
    {
        case 1:     // if (i == 1)
            cout << "i is 1" << endl;
            break;  // take you out of the switch block
        case 2:     // if (i == 2)
            cout << "i is 2" << endl;
            break;
        case 3:     // else if (i == 3 || i == 4)
        case 4:
            cout << "i is 3 or 4" << endl;
            break;

        default:
            cout << "i is not supported" << endl;
    }


    return 0;
}