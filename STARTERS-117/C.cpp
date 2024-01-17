#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int n;
    cin>>n;
    vector<pair<int, int>>v;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n<=2)
    {
        cout<<-1<<endl;
        return;
    }
    if(n%2)
    {
        int x=n+1;
        for(int i=0; i<n; i++)
        {
            cout<<x-a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(n-a[i]==0)
        {
            cout<<n<<" ";
        }
        else
        {
            cout<<n-a[i]<<" ";
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

