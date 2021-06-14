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
        vector<pair<int,int>> ans;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        int c=0;
        if(v[0][1]=='0'&&v[1][0]=='0'){
            if(v[n-1][n-2]=='1'){

            }
            else{
                
                ans.pb(mk(n,n-1));

            }
            if(v[n-2][n-1]=='1'){

            }
            else{
                ans.pb(mk(n-1,n));
            }
            
        }
        else if(v[0][1]=='1'&&v[1][0]=='1'){
            if(v[n-1][n-2]=='0'){

            }
            else{
                
                ans.pb(mk(n,n-1));

            }
            if(v[n-2][n-1]=='0'){

            }
            else{
                ans.pb(mk(n-1,n));
            }

        }
        else{
            if(v[0][1]==v[n-1][n-2]){
                ans.pb(mk(1,2));
                if(v[n-1][n-2]!=v[n-2][n-1]){
                ans.pb(mk(n-1,n));
                }
            }
            else if(v[0][1]==v[n-2][n-1]){
                ans.pb(mk(1,2));
                if(v[n-2][n-1]!=v[n-1][n-2]){
                ans.pb(mk(n,n-1));
                }
            }
            else if(v[1][0]==v[n-1][n-2]){
                ans.pb(mk(2,1));
                if(v[n-1][n-2]!=v[n-2][n-1]){
                ans.pb(mk(n-1,n));
                }

            }
            else{
                ans.pb(mk(2,1));
                if(v[n-1][n-2]!=v[n-2][n-1]){
                ans.pb(mk(n,n-1));
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }


    }


    return 0;
}
