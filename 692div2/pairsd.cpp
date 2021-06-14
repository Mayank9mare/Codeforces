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
        int a[n],b[n];
        int c[2*n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[a[i]]=-1;


        }
        int d=0,d1=0;
        stack<int> s,m;
        for(int i=1;i<=2*n;i++){
            if(c[i]==-1){
                s.push(-1);
            }
            else{
                if(!s.empty()){
                    d++;
                    s.pop();
                }
            }




        }
        for(int i=1;i<=2*n;i++){
            if(c[i]==0){
                m.push(0);
            }
            else{
                if(!m.empty()){
                    d1++;
                    m.pop();
                }
            }




        }
        int minn=n-d1;
        int maxx=d;
        int ans=maxx-minn+1;
        cout<<ans<<endl;


        
        


    }


    return 0;
}
