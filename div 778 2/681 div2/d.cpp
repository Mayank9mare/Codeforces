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
        def(a,n);
        if(n==1||n==2){
            cout<<"YES"<<endl;
        }
        else{
        if(n%2==0){
            int r=n/2;
            int c=0;
            int l =r-1;
            while(r<n-1){
                r++;
                if(a[r]<a[r-1]){
                    c=1;
                    break;

                }
                
            }
            while(l>0){
                l--;
                if(a[l]<a[l+1]){
                    c=1;
                    break;
                }
            }
            if(c==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{

            int p=(n-1)/2;
            int l=p-1;
            int r=p+1;
            int c=0;
            if(a[l]+a[r]<a[p]){
                c=1;
                

            }
            
            while(l>0){
                l--;
                if(a[l]<a[l+1]){
                    c=1;
                    break;

                }
            }
            while(r<n-1){
                r++;
                if(a[r]<a[r-1]){
                    c=1;
                    break;
                }
            }
            if(c==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    

    }
    }


    return 0;
}
