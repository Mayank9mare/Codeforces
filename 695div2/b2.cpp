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
        def(a,n);
        int h[n]={0};
        int v[n]={0};
        int c=0;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i+1]&&a[i]>a[i-1]){
                c++;
                h[i]=1;

            }
            else if(a[i]<a[i+1]&&a[i]<a[i-1]){
                c++;
                v[i]=1;
            }
        }
        int d=0;
        for(int i=1;i<n-1;i++){
            if(v[i]==1){
                if(h[i-1]==1&&h[i+1]==1){
                    c=max(c-3,0);
                    d=1;
                    break;

                }
            }
            if(h[i]==1){
                if(v[i-1]==1 && v[i+1]==1){
                    c=max(c-3,0);
                    d=1;
                    break;
                }
            }

        }
        if(d==0){
            for(int i=1;i<n-1;i++){
             if(h[i]==1){
                 if(v[i+1]==1){
                     if(i==1){
                         c=max(c-2,0);
                         d=1;
                         break;
                     }
                     else{
                         if(a[i+1]>=a[i-1]){
                              c=max(c-2,0);
                           d=1;
                         break;
                         }
                     }
                 }
                 if(v[i-1]==1){
                     if(i==n-1){
                        c=max(c-2,0);
                         d=1;
                         break;

                     }
                     else{
                         if(a[i-1]>=a[i+1]){
                              c=max(c-2,0);
                         d=1;
                         break;
                         }

                     }
                 }


            }
            else if(v[i]==1){
                if(h[i+1]==1){
                     if(i==1){
                         c=max(c-2,0);
                         d=1;
                         break;
                     }
                     else{
                         if(a[i+1]<=a[i-1]){
                              c=max(c-2,0);
                           d=1;
                         break;
                         }
                     }
                 }
                 if(h[i-1]==1){
                     if(i==n-1){
                        c=max(c-2,0);
                         d=1;
                         break;

                     }
                     else{
                         if(a[i-1]<=a[i+1]){
                         c=max(c-2,0);
                         d=1;
                         break;
                         }

                     }
                 }

            }
            }
        }
 
        if(d==0){
            c=max(c-1,0);
        }
        cout<<c<<"\n";



    }


    return 0;
}
