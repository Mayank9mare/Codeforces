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
const int Max=1e6;



int main()
{
    int w,h,n,m; 
    cin>>w>>h>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    set<int> d;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            d.insert(a[j]-a[i]);
        }
    }
    int ans[Max]={0};
    for(auto x:d ){
        for(int i=0;i<m;i++){
            ans[abs(x-b[i])]++;
        }
    }
    int c=ans[0];
    ans[0]=-1;
    int j=*max_element(ans,ans+Max);
    cout<<c+j<<endl;



    


    

    




    return 0;
}
