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
int dp[205][500];

int n;
int a[205];
int solve(int i,int j){
    if(i==n){
        return 0;

    }
    if(j==500){
        return 1e7;
    }
   
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    dp[i][j]=min(solve(i,j+1),(solve(i+1,j+1)+abs(a[i]-j)));
    return dp[i][j];
}




int main()
{
    int t;
    cin>>t;
    while(t--){
        
        memset(dp,-1,sizeof(dp));
        cin>>n;
        int i;
        
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<solve(0,1)<<"\n";


    }
   



    return 0;
}
