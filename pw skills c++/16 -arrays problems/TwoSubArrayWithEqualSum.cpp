#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Arr[5] = {6,2,4,3,1};
    int TotalSumOfElement = 0;
    for (int i = 0; i < 5; i++)
    {
        TotalSumOfElement = TotalSumOfElement + Arr[i];
    }
    int PrifixSum = 0;
    int i = 0;
    for (i; i < 5; i++)
    {
        PrifixSum = PrifixSum + Arr[i];
        int SuffixSum = TotalSumOfElement - PrifixSum;
        if (SuffixSum == PrifixSum)
        {
            cout << "YES" << endl;
            break;
        }
    }
    if(i == 6)
    {
        cout << "NO" << endl;
    }
    return 0;
}