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
string a[1024];
string b[1024];
int dp[1024][1024];



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    if(a[i-1]==b[j-1]){
                        dp[i][j]=max(dp[i][j],1+dp[i-1][j-1]);

                    }
                }
            }
        }
        

    }


    return 0;
}
