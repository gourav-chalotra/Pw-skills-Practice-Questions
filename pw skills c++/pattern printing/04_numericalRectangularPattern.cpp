// print the following code

// 1 2 3 4 5 6 7
// 2 3 4 5 6 7 1
// 3 4 5 6 7 1 2
// 4 5 6 7 1 2 3
// 5 6 7 1 2 3 4
// 6 7 1 2 3 4 5
// 7 1 2 3 4 5 6

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        for (int j = i; j <= num; j++)
        {
            cout << j ;
            cout << " ";
        }

        for (int k = 1; k <= i - 1 && k <= num; k++)
        {
            cout << k ;
            cout << " ";
        }
        cout << endl;
    }
}