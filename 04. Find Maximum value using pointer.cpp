#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int find_max(int *x, int *y, int *z)
{
    int mx = *x;
    if(*y > mx) mx = *y;
    if(*z > mx) mx = *z;
    return mx;
}
int main()
{
    int x, y, z; cin >> x >> y >> z; /// 5 9 15
    int mx = find_max(&x, &y, &z);
    cout << mx << endl;
}



