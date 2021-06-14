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
        int a[n][n];
        if(n%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    a[i][j]=9;
                }
                else if(i==n-1-j){
                    a[i][j]=10;
                }
                else{
                    a[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        }
        else{
            int k=(n-1)/2;
            int a[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        a[i][j]=10;
                    }
                    else if(i==n-1-j){
                        a[i][j]=9;
                    }
                    else{
                        a[i][j]=0;
                    }
                }
            }
            a[k-1][k-1]=9;
            a[k-1][k]=10;
            a[k-1][k+1]=10;
            a[k][k-1]=10;
            a[k][k]=10;
            a[k][k+1]=9;
            a[k+1][k-1]=10;
            a[k+1][k]=9;
            a[k+1][k+1]=10;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        }
    }


    return 0;
}
