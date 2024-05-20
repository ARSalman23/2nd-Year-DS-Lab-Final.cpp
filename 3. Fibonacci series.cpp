#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int f(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    return f(n - 1) + f(n - 2);
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        int x = f(i);
        cout << x << ' '; /// 0 1 1 2 3 5 8 13 21 34
    }
}


