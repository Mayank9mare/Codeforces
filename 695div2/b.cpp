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
        ll c=0;
        ll s[n]={0};
        ll l[n]={0};
        ll c1[n]={0};
        for(int i=1;i<n-1;i++){
            if(a[i]<a[i+1]&&a[i]<a[i-1]){
                c++;
                l[i+1]++;
                l[i-1]++;
                c1[i]=1;

            }
            else if(a[i]>a[i+1]&&a[i]>a[i-1]){
                s[i+1]++;
                s[i-1]++;
                c1[i]=1;
                
                c++;
            }
        }
        //cout<<c<<endl;
        int d=0;
        for(int i=0;i<n;i++){
            if(l[i]==2 ||s[i]==2){
                c=max(c-3,0ll);
                d=1;
                break;

            }
           

        }
        if(d==0){
            for(int i=0;i<n;i++){
                if(c1[i]==1){
                    if(l[i]>0 || s[i]>0){
                        c=max(c-2,0ll);
                        d=1;
                    }
                }
            }
        }
        if(d==0)c=max(c-1,0ll);

        cout<<c<<"\n";


    }


    return 0;
}
