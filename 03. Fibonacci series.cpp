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

/*
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define mem(array, b) memset(array, b, sizeof(array))
const int mx = 128;
ll dp[mx];

ll fib(ll n)
{
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    mem(dp, -1);

    ll n;
    cin >> n;

    ll ans = fib(n);
    cout << ans << endl;

    return 0;
}
*/
