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
    int n, k;
    cin>>n>>k;
    int f=0;
    int ans=INT_MAX;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        int m=x%k;
        if(x>=k)
        {
            ans=min(ans, m);
            f=1;
        }
    }
    if(f)
    {
        cout<<ans<<endl;
    }
    else
    {
        neg;
    }


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

