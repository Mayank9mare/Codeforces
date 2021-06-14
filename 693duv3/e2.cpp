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
        int n;
        cin>>n;
        vector<pair<ll,ll>> p;
        vector<pair<pair<int,int>,int>> v;

        map<pair<ll,ll>,int> m;
        fo(i,0,n,1){
            ll x,y;
            cin>>x>>y;
            if(x>y)swap(x,y);
            //p.pb(mk(x,y));
            v.pb(mk(mk(x,y),i));
           
            
            
           
            
        }
        sort(v.begin(),v.end());
        
        ll y=mod;
        ll x=-1;
        ll x2;
        ll y2;
        int in=-1;
        int in2;
        

        ll ans[n];
        memset(ans,-1,sizeof(ans));
        for(int i=0;i<n;i++){
        
            x2=v[i].first.first;
            y2=v[i].first.second;
            in2=v[i].second;
            //cout<<in2<<'a';

            while(x2==v[i].first.first && i<n){
                if(v[i].first.second>y){
                    ans[v[i].second]=in+1;
                }
                i++;
                if(i==n)break;
            }
            i--;
            if(y2<y){
            
            x=x2;
            y=y2;
            in=in2;
            }
            
            
            


        }


  

        //cout<<x<<" "<<y<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
            


        }
        cout<<endl;
  
     
    

    }


    return 0;
}
