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
    
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        ll a[n1];
        ll b[n2];
        ll c[n3];
        ll s[3]={0};
        ll m[3];
        m[0]=mod;
        m[1]=mod;
        m[2]=mod;
        vector<ll> v;
    
        priority_queue<ll> p;
       
        for(int i=0;i<n1;i++){
            cin>>a[i];
            // m[0]=min(m[0],a[i]);
            s[0]+=a[i];
            m[0]=min(m[0],a[i]);
        }
        for(int i=0;i<n2;i++){
            cin>>b[i];
           //m[1]=min(m[1],b[i]);
            s[1]+=b[i];
            m[1]=min(m[1],b[i]);
        }
        for(int i=0;i<n3;i++){
            cin>>c[i];
            s[2]+=c[i];
            //m[3]=min(m[3],c[i]);
           
           
            m[2]=min(m[2],c[i]);
        }
        sort(s,s+3);
        //sort(v.begin(),v.end());
        ll ss=min(m[1]+m[0]+m[2]-max({m[0],m[1],m[2]}),s[0]);
        //cout<<ss<<endl;
    
        ll ans=s[0]+s[1]+s[2]-2*ss;
        cout<<ans<<endl;
      
        // cout<<sk<<endl;
        // cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
    
   
        
     
        
       

        
        // cout<<m<<endl;
        // cout<<ans<<"\n";
        
        
        
        

    


    return 0;
}
