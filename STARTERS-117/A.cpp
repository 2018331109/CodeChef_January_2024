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
    int h, x, a, b, k;
    cin>>h>>x>>a>>b>>k;
    int ans=h/x+(h%x!=0);
    int ans2=h/a+(h%a!=0);
    if(ans2<=k)
    {
        ans=min(ans, ans2);
        cout<<ans<<endl;
    }
    else
    {
        h-=(a*k);
        int cnt=k;
        cnt+=h/b+(h%b!=0);
        ans=min(ans, cnt);
        cout<<ans<<endl;
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

