#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
vector<int> a;
vector<int> merge(vector<int> &l, vector<int> &r)
{
    vector<int> ans;
    int n = l.size(), m = r.size();
    int i = 0, j = 0;
    while(i < n and j < m)
    {
        if(l[i] < r[j]) ans.push_back(l[i++]);
        else ans.push_back(r[j++]);
    }
    while(i < n)
    {
        ans.push_back(l[i++]);
    }
    while(j < m)
    {
        ans.push_back(r[j++]);
    }
    return ans;
}
vector<int> merge_sort(int l, int r)
{
    if(l == r)
    {
        return {a[l]};
    }
    int mid = l + r >> 1 ; ///(l + r) / 2;
    vector<int> L = merge_sort(l, mid);
    vector<int> R = merge_sort(mid + 1, r);
    return merge(L, R);
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    auto ans = merge_sort(0, n - 1);
    for(auto &u : ans) cout << u << ' ';
    return 0;
}
