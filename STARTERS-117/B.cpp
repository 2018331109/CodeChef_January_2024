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
    string s;
    cin>>s;
    string p=s;
    sort(p.begin(), p.end());
    int i=0;
    for(i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            break;
        }
    }
    if(i==n-1)
    {
        cout<<s.substr(0, n-1)<<endl;
    }
    else
    {
        for (int j=0;j<n;j++)
        {
            if(i==j)
            {
                ;
            }
            else
            {
                cout<<s[j];
            }
        }
        cout<<endl;
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

