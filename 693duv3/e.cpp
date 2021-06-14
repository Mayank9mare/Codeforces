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
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            v.pb(mk(a,b));
        }
        int ans[n]={0};
        memset(ans,-1,sizeof(ans));
        int x=0,y=-1;
        for(int i=1;i<n;i++){
            if(v[i].first<v[x].first &&v[i].second<v[x].second){
                if(v[x].first>v[x].second)
                x=i;
                else{
                    y=i;
                }

            }
            else if(v[i].first<v[x].second&&v[i].second<v[x].first){
                if(v[x].first>v[x].second)
                  x=i;
                else{
                
                y=i;
                }
            }
            

        }
        for(int i=0;i<n;i++){
            if(v[i].first>v[x].first&&v[i].second>v[x].second && x!=i){
                cout<<x+1<<" ";
                
            }
            else if(v[i].first>v[x].second && v[i].second>v[x].first &&x!=i){
                cout<<x+1<<" ";
            }
             else if(v[i].first>v[y].second && v[i].second>v[y].first &&y!=i){
                cout<<y+1<<" ";
            }
            else if(v[i].first>v[y].first&&v[i].second>v[y].second && y!=i){
                cout<<y+1<<" ";
            }
            else{ cout<<"-1 ";
            }
        }
        cout<<endl;

    
        // for(int i=0;i<n;i++){
        //     int x=v[i].first;
        //     int y=v[i].second;
        //     if(ans[i]!=-1)continue;
        //     for(int j=i+1;j<n;j++){
                
        //         if(x<v[j].first &&y<v[j].second ){
        //             ans[j]=i+1;



        //         }
        //         else if(x<v[j].second && y<v[j].first){
        //             ans[j]=i+1;
        //         }
        //         if(x>v[j].first&&y>v[j].second){
        //             ans[i]=j+1;
        //         }
        //         else if(x>v[j].second &&y>v[j].first){
        //             ans[i]=j+1;
                    
        //         }
                
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;


    }


    return 0;
}
