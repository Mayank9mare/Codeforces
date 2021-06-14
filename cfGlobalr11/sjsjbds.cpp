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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0;
        vector<int> b;
        int ans=0;

        for(int i=0;i<n;i++){
            
            if(s[i]=='W'){
                b.pb(c);
                c=0;


            }
            else{
                c++;
            }

        }
        if(b.size()==0){
            ans=max(0,(1+2*(k-1)));

        }
        else{
        
        if(s[0]=='W'){
            ans=1;
        }
        for(int i=1;i<n;i++){
            if(s[i]=='W'){
                if(s[i-1]=='W'){
                    ans+=2;
                }
                else{
                    ans+=1;
                }
                
            }
        }
        int fir=b[0];
        int last =c;
    
        b[0]=0;
        
        
    
        sort(b.begin(),b.end());
        for(int i=1;i<b.size();i++){
            if(k==0){
                break;
            }
            if(b[i]<=k &&b[i]!=0){
                ans+=2*b[i]+1;
                k=k-b[i];
                b[i]=0;

            }
        }
        if(k>0){
            for(int i=0;i<b.size();i++){
                if(b[i]>k){
                    ans+=k*2;
                    k=0;
                    break;
                }
            }
            if(k>0){
                if(last>=k){
                    ans+=(2*k);
                    k=0;

                }
                else{
                    ans+=(last*2);
                    k=k-last;
                }
            }
            if(k>0){
                ans+=min((k)*2,(fir)*2);
            }

        }
        ans=min((1+(n-1)*2),ans);
        




 


    }
    cout<<ans<<endl;
    }


    return 0;
}
