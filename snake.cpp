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
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll ans=0;
        int k1=0;
        int k2=0;

        for(int i=0;i<n;i++){
            if(s[i]=='-'||s[i]=='<'){
                k1++;
            }
            if(s[i]=='-'||s[i]=='>'){
                k2++;
            }
        }
        if(k1==n ||k2==n){
            ans=n;
            cout<<ans<<endl;
        }
        else{
          vector<int> k;
          int c=0;
          for(int i=0;i<n;i++){
              if(s[i]!='-'){
                  k.pb(c);
                  c=0;
              }
              else{
                  c++;
              }
          }
          for(int i=0;i<k.size();i++){
              if(k[i]!=0){
                  ans+=(k[i]+1);
              }
          }
          if(s[0]=='-'){
          ans+=c;
          }
          else{
              if(c!=0){
              ans+=(c+1);
              }
          }
          cout<<ans<<endl;
        }
        

    }


    return 0;
}
