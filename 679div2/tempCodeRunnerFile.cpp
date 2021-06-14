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
#define six 6

using namespace std;



int main()
{   
    int a[six];
    for(int i=0;i<six;i++){
        cin>>a[i];

    }
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+6);
    reverse(a,a+6);
    sort(b,b+n);
    
    int c[n][6];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            c[i][j]=b[i]-a[j];
            cout<<c[i][j]<<" ";
             }
             //cout<<endl;
        
        
    }
     vector<int> v;
     int m=0;
     int k=0;
    for(int i=0;i<6;i++){
        m=c[0][i];
        vector<int> u(0);
        u.pb(m);
        //cout<<m<<" ";
        for(int j=1;j<n;j++){
            
            k=*lower_bound(c[j],c[j]+6,m);
            u.pb(k);

        
            
           // cout<<k<<" ";
            


            
        }
       // cout<<m<<endl;
        v.pb(*max_element(u.begin(),u.end())-*min_element(u.begin(),u.end()));
        //cout<<endl;

    }
   

 


   
    cout<<*min_element(v.begin(),v.end())<<endl;





    


    return 0;
}
