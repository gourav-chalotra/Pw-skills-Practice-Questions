// print the following
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = 1, temp = i;
        for (int j = 1; j <= (n * 2) - 1; j++)
        {
            if ((j >= n - i + 1) && (j <= n + i - 1))
            {
                if (k <= i)
                {
                    cout << k;
                    k++;
                }
                else
                {
                    temp--;
                    cout << temp;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}