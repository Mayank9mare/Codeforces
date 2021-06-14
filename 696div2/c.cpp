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
int b[1000001]={0};
int findp(int a[],int n,int m,vector<pair<int,int>> &v,int &c1){
    if(2*c1==n-1)return 1;
    int km;
    km=m;
    for(int i=0;i<n;i++){
        if(i==m)continue;
         if(b[a[m]+a[i]]>0){
             b[a[m]+a[i]]--;
             if(a[i]>a[m]){
                m=i;
             }
            
                if(findp(a,n,m,v,c1)){
                    v.pb(mk(i,m));
                    c1++;
                    return 1;
                }
                else{
                   
                    b[a[m]+a[i]]++;
                    
                }
             
         }
    }
    return 0;
}

//KnightMareVoid


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(b,0,sizeof(b));
        
        int a[2*n];
        re(i,2*n){
            cin>>a[i];
            b[a[i]]++;
        }
        n*=2;
        vector<pair<int,int>> v;
        int c=0;
        set<int> st;
        
        if(findp(a,n,0,v,c)){
            puts("YES");
        }
        else{
            puts("NO");
        }

      
       


    }


    return 0;
}
