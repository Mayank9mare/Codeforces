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
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]>=0){
                c++;
                
            }
        }
        if(c==0){
            cout<<0<<endl;
            cout<<0<<endl;
        }
        else if(c==n){
            ll sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];

            }
            cout<<sum<<endl;
            cout<<n<<" ";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;


        }
        else{
            vector<pair<ll,pair<int,int>>> v;
            ll sum=0;
            int no=0;
            int in=0;
            for(int i=0;i<n;i++){
                if(a[i]<0 ){
                    if(no!=0){
                    v.pb(mk(sum,mk(in,no)));
                    }
                    sum=0;
                    no=0;
                    in=0;

                    
                }
                else{
                no++;
                sum+=a[i];
                in=i;
                }
            }
            if(no!=0){
                v.pb(mk(sum,mk(in,no)));
            }
            
            sort(v.rbegin(),v.rend());
            int s1=v[0].second.first-v[0].second.second +1;
            int s2=v[1].second.first-v[1].second.second +1;
            if(v.size()==1){
                cout<<v[0].first<<endl;
                cout<<v[0].second.second<<" ";
                for(int i=s1;i<=v[0].second.first;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;

            }
            else{
            ll u=v[0].first+v[1].first;
            
            cout<<u<<endl;
            int s=v[0].second.second+v[1].second.second;
            cout<<s<<" ";

            if(s1<s2){
                for(int i=s1;i<=v[0].second.first;i++){
                    cout<<a[i]<<" ";

                }
                for(int i=v[1].second.first;i>=s2;i--){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else{
                for(int i=s2;i<=v[1].second.first;i++){
                    cout<<a[i]<<" ";

                }
                for(int i=v[0].second.first;i>=s1;i--){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }

            




            

                
            
                    
                
            

            



        }
        }


    }


    return 0;
}
