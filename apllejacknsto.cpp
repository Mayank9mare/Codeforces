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
const int Max=1e5+1;



int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a[Max]={0};
    int q;
    int x1;
    string s;
    int c=0,d=0;
    for(int i=0;i<n;i++){
                
        a[v[i]]++;


         }
    for(int i=0;i<Max;i++){
        c+=a[i]/4 ;
            }
            
    for(int i=0;i<Max;i++){
            
             d+=a[i]/2;
                    
                
                
            }
            

    cin>>q;
    while(q--){
        cin>>s>>x1;
        
        
        
        if(s=="+"){
            v.pb(x1);
            c=c-(a[x1]/4);
            d=d-(a[x1]/2);
            a[x1]++;
            c=c+(a[x1]/4);
            d=d+(a[x1]/2);
        }
        else{
            vector<int>::iterator k=find(v.begin(),v.end(),x1);
            c=c-(a[x1]/4);
            d=d-(a[x1]/2);
            
            
            
            a[x1]--;
            c=c+(a[x1]/4);
            d=d+(a[x1]/2);
            v.erase(k);
        }
        
        
        
        if(v.size()<8){
            cout<<"NO"<<endl;
        }
        else{
    
        
            
            
            /*for(int i=0;i<n;i++){
                cout<<v[i]<<endl;
            }*/
            
            if(c>=2){
                cout<<"YES"<<endl;
            }
            else if(c==1&&d>=4){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }



    return 0;
}
