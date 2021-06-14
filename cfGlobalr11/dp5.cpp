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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dp[k+1][n];
    dp[0][0]=1;
    for(int i=1;i<n;i++){
        dp[0][i]=1;
    }
    for(int i=1;i<=k;i++){
        dp[i][0]=(i-a[0]>=0)?dp[i-a[0]][0]:0;
        
    }
    
    for(int i=1;i<=k;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=((i-a[j]>=0)?dp[i-a[j]][j]:0)+dp[i][j-1];//including and non including a[j]


                
            }}
        
        int ans=dp[k][n-1];
        
        cout<<ans<<endl;


    return 0;
}
