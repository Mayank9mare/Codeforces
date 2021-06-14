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
        ll T;
        cin>>n>>T;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];


        }
        
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]=m[a[i]]+1;

        }
        int b[n]={0};
        for(int i=0;i<n;i++){
            if(b[i]==0){
                if(m[T-a[i]]>0){
                    if(a[i]>T-a[i]){
                        b[i]=1;
                    }


                }

            }
        }
        if(T%2==0){
            int k=T/2;
            int c=0;
            for(int i=0;i<n;i++){
                if(a[i]==k){
                    if(c%2==0){
                        b[i]=0;
                    }
                    else{
                        b[i]=1;
                    }
                    c++;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        

        
        

    }


    return 0;
}
