#include<bits/stdc++.h>
#define f(i,n)          for(int i=0; i<(n); i++)
#define pr(x)           cout<<(#x)<<endl
#define pb(x)           push_back(x);
#define in(x)           int x; cin>>x;
#define a(t)            ll n; cin>>n; ll a[n]; for(ll i=0;i<n;i++)
#define lln(x)          ll x; cin>>x;
#define w(t)            int t; cin>>t; while(t--)
#define wi(t)            int t; cin>>t;
#define  fasto          ios::sync_with_stdio(0),cin.tie(0)
#define vec(x)          (x).begin(),(x).end()
#define veci            vector<int>
#define vecc            vector<char>
#define sin             string s; cin>>s
using namespace std;
typedef long long ll;

int main()
{
    int c0=0,c5=0;
    a(t)
    {
        cin>>a[i];
        if(a[i]==0) c0++;
        else        c5++;
    }
    if(c5>=9 && c0>0)
    {
        c5/=9; c5*=9;
        for(int i=0;i<c5;i++)   cout<<5;
        for(int i=0;i<c0;i++)   cout<<0;
    }
    else
    {
        if(c0>0)    cout<<0;
        else        cout<<-1;
    }
}


