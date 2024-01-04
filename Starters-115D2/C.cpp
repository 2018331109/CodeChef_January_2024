#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define fs first
#define sc second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;


void solve()
{
    int n, d;
    cin>>n>>d;
    int mx=max(n-2, (int)0);
    if(d>mx)
    {
        neg;
        return;
    }
    int nn=n-(2+d);
    int i=1;
    for(i=1; i<=nn; i++)
    {
        cout<<i<<" ";
    }
    cout<<n<<" ";
    while(i<n)
    {
        cout<<i<<" ";
        i++;
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
