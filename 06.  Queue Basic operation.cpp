#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    queue<int> q;
    int num_of_elements; cin >> num_of_elements;
    for(int i = 0; i < num_of_elements; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    for(int i = 0; i < num_of_elements; i++)
    {
        int val = q.front();
        q.pop();
        cout << val << ' ';
    }
}



