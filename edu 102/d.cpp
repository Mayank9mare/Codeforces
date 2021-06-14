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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        pair<int,int> b[n];
        pair<int,int> c[n];
        int a1[n],a2[n];
      
        int x1=0;
        int x2=0;
        int x=0;
        int c11=0;
        int c22=0;
        for(int i=0;i<n;i++){
            if(s[i]=='-'){
                x--;
                x1=min(x1,x);
            }
            else{
                x++;
                x2=max(x2,x);
            }
            a1[i]=x;
            b[i]=mk(x1,x2);
            }
            x=0;
            x1=0;x2=0;
        for(int i =n-1;i>=0;i--){
            if(s[i]=='-'){
                x++;
                x1=max(x1,x);
            }
            else{
                x--;
                x2=min(x2,x);
            }
            c[i]=mk(x1,x2);
            a2[i]=x;
          


        }
        while(m--){
            int m1,m2;
            cin>>m1>>m2;
            int s1=0,s2=0;
            int xx=0;
            if(m1-2>=0){
                s1=b[m1-2].first;
                s2=b[m1-2].second;
                xx=a1[m1-2];
            }
            int w1=0,w2=0,yy=0;;
            if(m2<n){
                w1=c[m2].first;
                w2=c[m2].second;
                yy=a2[m2];

            }
            int mina=min(s1,xx-yy+w2);
            int maxa=max(s2,xx-yy+w1);
            int ans =1+maxa-mina;
            cout<<ans<<"\n";
            


           
            

            
         
           




         


        }
    
    }


    return 0;
}
