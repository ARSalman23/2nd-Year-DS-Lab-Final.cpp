#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i< n - 1; i++)
    {
        for(int j= i + 1; j < n; j++)
        {
            if(a[j]<a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }


    int l = 0, r = n, ans;

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(a[mid] == target)
        {
            ans = mid;
            break;
        }

        if(a[mid] >= target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}
