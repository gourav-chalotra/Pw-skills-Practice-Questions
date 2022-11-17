// print the following code
// **********
// **********
// **********
// **********

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter number rows you want: " << endl;
    cin >> n;
    cout << "Enter number of columns you want: " << endl;
    cin >> m;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
       
}