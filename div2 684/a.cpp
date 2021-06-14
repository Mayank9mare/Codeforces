#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll,ll>
#define vll vector<ll>
#define mll map<ll,ll>
#define mod 1000000007
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 1000000007
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c0,c1,h;
        string s;
        int c=0;
        cin>>n>>c0>>c1>>h;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                c++;
            }
        }
        int ans=0;
        if(c1>c0){
            if(c1>h+c0){
                ans=(n-c)*h+n*c0;
            }
            else{
                ans=c*c0+(n-c)*c1;
            }
        }
        else {
            if(c0>h+c1){
                ans=(c)*h+n*c1;
            }
            else{
                ans=c*c0+(n-c)*c1;
            }
        }
        cout<<ans<<endl;

    }


    return 0;
}
