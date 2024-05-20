#include<bits/stdc++.h>
using namespace std;

const int N = 100;
int a[N];

void merge ( int l, int mid, int r )
{
    int p = l;
    int q = mid+1;
    int len = r - l + 1;

    vector<int> v(len);
    int k = 0;

    for ( int i = l; i <= r; i++ )
    {
        if ( p > mid )
        {
            v[k] = a[q];
            k++, q++;
        }
        else if ( q > r )
        {
            v[k] = a[p];
            k++, p++;
        }
        else if ( a[p] <= a[q] )
        {
            v[k] = a[p];
            k++, p++;
        }
        else
        {
            v[k] = a[q];
            k++, q++;
        }
    }

    k = 0;
    for ( int i = l; i <= r; i++ )
    {
        a[i] = v[k];
        k++;
    }
}

void mergeSort ( int l, int r )
{
    if ( l == r ) return;

    int mid = ( l + r ) / 2;

    mergeSort( l, mid );
    mergeSort( mid+1, r );
    merge( l, mid, r );
}

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    mergeSort(1, n);

    for( int i = 1; i <= n; i++ )
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

