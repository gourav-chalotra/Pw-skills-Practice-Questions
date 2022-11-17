// print the following code

// ******
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << endl;
    
    while (n)
    {
        for (int i = 0; i < n; i++)
        {

            cout << "*";
        }
        n--;
        cout << endl;
    }
}