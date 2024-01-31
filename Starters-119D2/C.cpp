#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N=3e5;

void solve()
{
    int n,k;
    cin>>n>>k;

    for(int i=1; i<=k; i++)
    {
        cout<<i<<" ";
    }
    int o, e;
    if(k%2)
    {
        e=k+1;
        o=k+2;
        while(o<=n)
        {
            cout<<o<<" ";
            o+=2;
        }
        while(e<=n)
        {
            cout<<e<<" ";
            e+=2;
        }
    }
    else
    {
        e=k+2;
        o=k+1;
        while(e<=n)
        {
            cout<<e<<" ";
            e+=2;
        }
        while(o<=n)
        {
            cout<<o<<" ";
            o+=2;
        }

    }

    cout<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

