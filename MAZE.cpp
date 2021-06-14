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
    vector<int> a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    
    vector<pair<int,int>> v;
    vector<int> ones;
    vector<int> oney;
    vector<int> othery;
    vector<int> onex;
    vector<int> otherx;
    int n3=0;

    vector<int> others;
    
    int c=t-1;
    
    
    for(int i=t-1;i>=0;i--){
        if(a[i]==1){
            
            

            ones.pb(a[i]);
            oney.pb(c);
            onex.pb(i);
            v.pb(mk(c,i));
            c--;
        }
        else{
            if(a[i]==3){
                
                if(!others.empty()){



                    
                    
                    
                    others.pop_back();
                    int x=othery[othery.size()-1];
                    othery.pop_back();
                    
                    v.pb(mk(c,i));
                    
                    
                    v.pb(mk(c,otherx[otherx.size()-1]));
                    otherx.pop_back();
                    othery.pb(c);
                    otherx.pb(i);
                    c--;
                    
                    

                }
                else if(!ones.empty()){
                    
                    ones.pop_back();
                    int x=oney[oney.size()-1];
                    oney.pop_back();
                    
                    v.pb(mk(c,i));
                    
                    v.pb(mk(c,onex[onex.size()-1]));
                    onex.pop_back();
                    otherx.pb(i);
                    
                    othery.pb(c);
                    c--;
                    

                }
                else{
                    cout<<-1<<endl;
                    return 0;
                }
                others.pb(a[i]);
            }
            else if(a[i]==2){
                if(!ones.empty()){
                    
                    ones.pop_back();
                    int x= oney[oney.size()-1];
                    v.pb(mk(x,i));
                    oney.pop_back();
                    onex.pop_back();
                    othery.pb(x);
                    otherx.pb(i);
                    others.pb(a[i]);

                    
                    
                }
                else{
                    cout<<-1<<endl;
                    return 0;
                }
                
                
                
            }
        }
    
        

    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;

    }




    return 0;
}
