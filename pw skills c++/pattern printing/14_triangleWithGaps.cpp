// print the following code
//       1
//     2   2
//   3       3
// 4 4 4 4 4 4 4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j == n - i + 1 || j == n + i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        cout << n;
    }
    cout << endl;

    return 0;
}