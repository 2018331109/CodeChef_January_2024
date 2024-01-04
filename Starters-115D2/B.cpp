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
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    sort(a, a+n);
    sort(b, b+n, greater<int>());
//    for(auto it:a)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    for(auto it:b)
//    {
//        cout<<it<<" ";
//    }

    int i=0, j=0;
    int vl=a[i]+b[j];
    while(i<n)
    {
        if(a[i]+b[j] != vl)
        {
            neg;
            return;
        }
        i++, j++;
    }
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:b)
    {
        cout<<it<<" ";
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
