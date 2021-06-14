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
        ll n;
        ll w;

        cin>>n>>w;
        vector<ll> a(n);
        vector<pair<ll,int>> m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            m.pb(mk(a[i],i));
        }
        ll s=0;
        sort(m.begin(),m.end());

        vector<int> v;
        ll y=(w%2==0)?w/2:(w/2)+1;
    
        int k=n-1;
        while(k>=0){
            if(s+m[k].first<=w){
                s+=m[k].first;
                v.pb(m[k].second);

            }
            if(s>=(y)){
                break;
            }
            k--;
        }

        
    
        sort(v.begin(),v.end());
   
        
        
        if(s<(y)){
            cout<<-1<<endl;
        }
        else{
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]+1<<" ";
            }
            cout<<endl;
        }

    }
    


    return 0;
}
