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
int check(int a[],int n){
    sort(a,a+n);
    int c=1;
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            c=0;
            
        }
    }
    return c;
}



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        def(a,n);
        int b[n+1]={0};
        for(int i=0;i<n;i++){
            b[a[i]]++;
        }
        int ans[n+1];
        for(int i=1;i<=n;i++){
            ans[i]=0;
        }
        int s=0;

        int f=0;
        for(int i=1;i<=n;i++){
            if(b[i]!=1){
                f=1;
            }
        }
        if(f==1){
            ans[1]=0;


        }
        else{
            ans[1]=1;
        }
        if(b[1]!=0){
            ans[n]=1;
        }
        
        int l=0;
        int r=n-1;
        int c=1;
        for(int i=2;i<=n;i++){
            if(b[i]!=0){
                if(b[i-1]==1){
                    ans[n+1-i]=1;
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
            if(a[l]==i-1){
                l++;

            }
            else if(a[r]==i-1){
                r--;
            }
            else{
                ans[n+1-i]=0;
                break;


            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i];
        }
        cout<<endl;




       
        


    }


    return 0;
}
