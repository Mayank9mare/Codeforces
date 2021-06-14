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
const int N=1000;


int main()
{
    int t;
    cin>>t;
    while(t--){
        def(a,n);
        sort(a,a+n);
        int b[N]={0};
        for(int i=0;i<n;i++){
            b[a[i]]++;
        }
        vector<int> ans;
        vector<int> rem;
        for(int i=0;i<n;i++){
            if(b[a[i]]==1){
               
                ans.pb(a[i]);
            }
            else{
                
                rem.pb(a[i]);
            }
            b[a[i]]--;
        }
        for(int i=0;i<rem.size();i++){
            ans.pb(rem[i]);
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        
        nl;

    }


    return 0;
}
