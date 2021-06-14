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
        def(a,n);
        if(n==1||n==2){
            cout<<"YES"<<endl;
        }
        else{
        int c=0;
        priority_queue<int> s1;
        priority_queue<int> s2;
        for(int i=1;i<n;i++){
            s2.push(-a[i]);
           
           
        }
        priority_queue<int> s3;

        s1.push(-a[0]);
        for(int i=1;i<n-1;i++){
            
            
            
          
            if(*min_element(a+i+1,a+n)-s1.top()<a[i]){
                c=1;

            }
            
            s1.push(-a[i]);


        }
         if(c==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

    }
    }


    return 0;
}
