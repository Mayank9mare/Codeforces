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
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll s1=0;
        
        int c=0;
        int f=0;
        int d=0;
        for(int i=0;i<n;i++){
            if(a[i]%q!=0){
                d=1;
                break;
            }
        }
        if(d==0){
        for(int i=0;i<n;i++){
            if(a[i]%q==0){
                s1+=a[i];
                if(c==0){
                 if(f==0){

                ll k=a[i];
                    while(k%q==0){
                        s1+=a[i];
                        k=k/q;
                    }
                    f=1;
                }
                 else{
                     s1+=a[i];
                 }
                }
                //s1+=a[i];
            }
            else{
                s1+=a[i];
                c=1;

            }
        }
        }
        else{
            c=0;
            for(int i=0;i<n;i++){
                s1+=a[i];
                if(a[i]%q==0){
                    if(c==0){
                        s1+=a[i];
                    }
                    
                }
                else{
                    c=1;
                }
            }
        }
        cout<<s1<<endl;

    }


    return 0;
}
