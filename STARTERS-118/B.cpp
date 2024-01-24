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
    int n, m;
    cin>>n>>m;
    int arr[n];
    int total=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    if(total<m)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>=m)
        {
            v.pb(arr[i]);
        }
        else
        {
            arr[i+1]+=arr[i];
        }
    }

    v.pb(arr[n-1]);
    n=v.size();
    vector<int>ans;
    for(int i=n-1;i>0;i--)
    {
        if(v[i]>=m)
        {
            ans.pb(v[i]);
        }
        else
        {
            v[i-1]+=v[i];
        }
    }
    ans.pb(v[0]);
    cout<<ans.size()<<endl;



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

