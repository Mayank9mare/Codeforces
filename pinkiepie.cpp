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
        int a[n+1];
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int b[n+1]={0};
        int c[n+1]={0};
        
        for(int i=1;i<=n;i++){
            
            b[a[i]]++;

        }
        b[0]=0;

        sort(b+1,b+n+1);
        
        
        for(int i=1;i<=n;i++){
            if(b[i]!=0){
                c[b[i]]++;
            }
            
        }
        int ans=0;
        int an=0;
        int l=b[n];
        
        
        c[l]--;
        an=an+c[l];
        
        for(int i=1;i<l;i++){
            
                ans+=i*c[i];            
            

            
        }
        ans=ans/(l-1);
        ans=ans+an;
        cout<<ans<<endl;



    }


    return 0;
}
