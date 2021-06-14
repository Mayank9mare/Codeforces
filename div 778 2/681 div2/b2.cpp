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
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        //cout<<s.size();
        vector<pair<int,int>> v;
      
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                
                for(int j=i;j<s.size();j++){
                    if(s[j]=='0'){
                        v.pb(mk(i,j-1));
                        
                        i=j-1;
                        break;
                        
                        

                    }
                    if(j==s.size()-1){
                        v.pb(mk(i,j));
                        i=j;
                        break;
                    }

                }
                
            }

        }
        if(v.size()==0){
            cout<<0<<endl;
        }
        else if(v.size()==1){
            cout<<a<<endl;
        }
        else{
        // for(int i=0;i<v.size();i++){
        //    cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        int dp[v.size()][2];
        memset(dp,0,sizeof(dp));
        dp[0][0]=a;
        dp[0][1]=b*(v[1].first-v[0].second-1);
        for(int i=1;i<v.size()-1;i++){
            
            dp[i][0]=min(dp[i-1][0]+a,dp[i-1][1]+a);
            //cout<<dp[i][0];
            dp[i][1]=min(dp[i-1][1]+b*(v[i+1].first-v[i].second-1),dp[i-1][0]+b*(v[i+1].first-v[i].second-1));
            //cout<<" "<<dp[i][1]<<endl;
            
            

        }
        cout<<min(dp[v.size()-2][0],dp[v.size()-2][1])+a<<endl;


    }
    }


    return 0;
}
