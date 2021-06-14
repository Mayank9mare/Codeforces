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
        int n,m;
        cin>>n>>m;
        int c=0;
        vector<pair<int,int>> v(n);
        for(int i=0;i<m;i++) cin>>v[i].first>>v[i].second;
        int row[n+1];
        for(int i=1;i<=n;i++)row[i]=-1;
        for(int i=0;i<m;i++){

            row[v[i].second]=v[i].first;
        }
        ll k=0;
        int mm[n+1];
        for(int i=0;i<=n;i++) mm[i]=0;
        for(int i=0;i<m;i++){
            
            if(v[i].first==v[i].second){
                mm[v[i].first]=1;

                continue;
            }
            else{
                c++;
                if(mm[v[i].first]==1){
                    continue;
                }
                
                int x=row[v[i].first];
                // mm[x]=1;
                // mm[v[i].first]=1;
                // mm[x]=1;
                //printf("ll%dll",x);
                int y=x;

                while(y!=-1){
                    mm[y]=1;
                    //cout<<y<<" "<<endl;
                    y=row[y];
                    
                    
                    
                    
                    if(x==y){
                        c++;
                        //cout<<v[i].first<<endl;

                        // row[v[i].second]=-1;
                        // row[v[i].first]=v[i].first;

                        break;
                    }

                }
                //cout<<"//"<<endl;
              
            }
        }
        cout<<c<<endl;

    


    

    }


    return 0;
}
