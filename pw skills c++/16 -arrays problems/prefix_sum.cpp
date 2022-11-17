#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Arr[5] = {5,4,1,2,3};
    
    for (int i = 1; i < 5; i++)
    {
        Arr[i] = Arr[i-1] + Arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " " ;
    }
    
    
}