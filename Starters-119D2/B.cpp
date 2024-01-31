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
    string s;
    cin>>s;
    int cnt=1;
    int ans=1;
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
            ans=max(ans, cnt);
        }
        else
        {
            cnt=1;
            ans=max(ans, cnt);
        }
    }

    cout<<ans<<" ";

    for(int i=n; i<n+k; i++)
    {
        char ch;
        cin>>ch;
        s+=ch;
        if(s[i]==s[i-1])
        {
            cnt++;
            ans=max(ans, cnt);
        }
        else
        {
            cnt=1;
            ans=max(ans, cnt);
        }

        cout<<ans<<" ";

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

