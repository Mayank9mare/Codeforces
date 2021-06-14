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
const int M=200005;



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        int l[n+1]={0};
        int r[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        int i=0;
        int j=1;
        l[0]=1;
        while(j<n){
            if(a[j]-a[i]<=k){
                l[j]=max(l[j-1],j-i+1);
                j++;
            }
            else{
                i++;
            }

        }
        i=n-1;
        j=n-1;
        r[n]=0;
        

        while(j>=0){
            if(a[i]-a[j]<=k){
                r[j]=max(r[j+1],i-j+1);
                j--;
                
            }
            else{
                i--;
            }

        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,(l[i]+r[i+1]));
        }
        cout<<ans<<endl;







    }


    return 0;
}
