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
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n]={0};
        int c=1;

        for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=1;i<n;i++){
            b[i]=GCD(a[0],a[i]);
        }
        
        sort(b+1,b+n);
        reverse(b+1,b+n);
        
        vector<int> v(0);
        v.pb(a[0]);
        for(int j=1;j<n;j++){
        for(int i=c;i<n;i++){
            if(GCD(a[0],a[i])==b[j]){
                v.pb(a[i]);
                swap(a[j],a[i]);
                c++;
                break;
            }
        }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;


    }


    return 0;
}
