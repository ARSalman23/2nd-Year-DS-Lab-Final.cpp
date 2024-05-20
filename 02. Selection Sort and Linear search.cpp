#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const int mx = 100;

int main()
{
    int sz = 11;
    int x = 45;
    int arr[] = {7, 10, 15, 11, 9, 5, 14, 45, 20, 25, 21};
    for(int i = 0; i < sz - 1; i++)
    {
        for(int j = i + 1; j < sz; j++)
        {
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    int index = 0;

    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == x)
        {
            index = i;
            break;
        }
    }
    cout << index << endl;
}

