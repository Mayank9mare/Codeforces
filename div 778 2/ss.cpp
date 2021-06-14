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
        int n,x;
        cin>>n>>x;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];

        }
        int c[n]={0};
        int k=-1;
        int cnt=0;
        for(int i=0;i<n;i++){
            k=-1;
            for(int j=0;j<n;j++){
            
               if( b[i]+a[j]<=x &&c[j]==0){
                   if(k==-1){
                       k=j;
                   }
                   else{
                       if(b[i]+a[j]>b[i]+a[k]){
                           k=j;
                       }
                   }
               }
                
            }
            if(k==-1){
                cnt=1;
                break;

            }
            c[k]=1;
        }
        if(cnt==1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        


        


    }


    return 0;
}
