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
        ll n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll s1=0;
        int d=-1;
        for(int i=0;i<n;i++){
            if(a[i]%x!=0){
                d=i;
                break;
            }
        }
        if(d==-1){
            ll k=a[0];
            while(k%x==0){
                s1+=a[0];
                k=k/x;
            }
            s1+=a[0];
            for(int i=1;i<n;i++){
                s1+=2*a[i];
            }
        }
        else{
         

            for(int i=0;i<d;i++){
                s1+=2*a[i];



            }
            for(int i=d;i<n;i++){
                s1+=a[i];
            }
        }
        cout<<s1<<endl;

    }


    return 0;
}
