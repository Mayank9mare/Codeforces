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
        vector<pair<ll,ll>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;

        }
        ll c=0;
        ll t=v[0].first;
        ll x=v[0].second;
        ll cur=0;
        ll prev=0;
        ll p=0;
        int flag=0;
        ll next=v[1].first;
            if(next>=v[0].first+abs(v[0].second)){
            c++;
            flag=1;
            //cout<<v[0].first<<" "<<v[0].second<<endl;
            
        }
        for(int i=1;i<n;i++){
            if(i==n-1){
                next=1e10;

            }
            else{
                next=v[i+1].first;

            }
            if(t+abs(prev-x)>v[i].first){
                if(v[p].second<prev){
                    cur=(prev-(v[i].first-v[p].first));

                }
                else{
                    cur=prev+(v[i].first-v[p].first);
                }
                if(cur<x){
                    if(v[i].second>=cur&&v[i].second<=x){
                        if(v[i].first+(v[i].second-cur) <=next){
                        c++;
                        //cout<<v[i].first<<" "<<v[i].second<<endl;
                        }
                        
                    }

                }
                else{
                     if(v[i].second>=x&&v[i].second<=cur){
                         if(v[i].first-((v[i].second-cur) )<=next){
                        c++;
                        //cout<<v[i].first<<" "<<v[i].second<<endl;
                         }
                    }

                }

            }
            else{
                 flag=0;
                prev=v[p].second;
                ll k2=abs((ll)(v[i].second-prev));
                x=v[i].second;
                t=v[i].first;
                if(next>=k2+v[i].first){
                   
                c++;
                flag=1;
                //cout<<v[i].first<<" "<<v[i].second<<endl;
                }
               
        
                
                p=i;




            }
            
        }
        cout<<c<<endl;

     
    }


    return 0;
}
