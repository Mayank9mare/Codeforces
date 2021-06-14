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
        ll a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        vector<int> v1;
        vector<int> v0;
        int c=0;
        int d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                
                if(c!=0){
                    v1.pb(c);
                    c=0;
                }
            }
            else{
                c++;
               
            }
            
           
            

    }
    if(c!=0){
                v1.pb(c);
            }
    ll sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            sum++;
        }

    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            break;
        }
        sum--;
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            break;
        }
        sum--;
    }
     
            ll x1=sum*b+a;
            ll x2=a*v1.size();
            cout<<min(x1,x2)<<endl;;
    }


    return 0;
}

