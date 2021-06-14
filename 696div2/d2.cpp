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
//KnightMareVoid
int check(ll a[],int n){
    int c=0;
    ll s1=0,s2=0;
    ll k=a[0];
    for(int i=1;i<n;i++){
        k=a[i]-k;
        if(k<0)return 0;
    }
    if(k==0){
        return 1;
    }
    return 0;
   

}

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        def(a,n);
        if(check(a,n)){
            puts("YES");
        }
        else{
            ll pre[n]={0};
            ll b[n]={0};
            b[0]=a[0];
            for(int i=1;i<n;i++){
                b[i]=a[i]-b[i-1];

            }
            pre[0]=b[0];
            for(int i=1;i<n;i++){
                if(pre[i-1]==-1){
                    pre[i]=-1;
                }
                else{
                    if(b[i]<0){
                        pre[i]=-1;
                    }
                    else{
                        pre[i]=b[i];
                    }
                }

            }
            int c[n]={0};
            c[n-1]=a[n-1];
            for(int i=n-2;i>=0;i--){
                c[i]=a[i]-c[i+1];
            }
            int suf[n]={0};
            suf[n-1]=c[n-1];
            for(int i=n-2;i>=0;i--){
                if(suf[i+1]==-1){
                    suf[i]=-1;
                }
                else{
                    if(c[i]<0){
                        suf[i]=-1;
                    }
                    else{
                        suf[i]=c[i];
                    }
                }
            }
            int f=0;
            for(int i=1;i<n-1;i++){

                    if(i+1>=n || suf[i+1]!=-1){
                        
                        
                        ll x=(i-2>=0)?pre[i-2]:0;
                        if(x==-1)continue;
                        ll y=(i+1<n)?suf[i+1]:0;
                        if((a[i]-x>=0)&&(a[i-1]-a[i]+x)>=0&&(a[i-1]-a[i]+x-y)==0 ){
                            f=1;
                            break;

                        }
                    
                    }
                    if(i+2>=n || suf[i+2]!=-1){
                    
                        ll x=(i-1>=0)?pre[i-1]:0;
                        if(x==-1)continue;
                        ll y=(i+2<n)?suf[i+2]:0;
                        if((a[i+1]-x)>=0 && (a[i]-a[i+1]+x)>=0 &&(a[i]-a[i+1]+x-y)==0 ){
                            f=1;
                            break;
                        }
                    }
                    

                
            }
            if(f){
                puts("YES");
            }
            else{
                puts("NO");
            }
           
        }


    }


    return 0;
}
