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
        int n,x,y;
        cin>>n>>x>>y;
        if(n==2){
            cout<<x<<" "<<y<<endl;
        }
        else{
        if((y-x)%(n-1)==0){
            if(int s=(y-x)/(n-1)){
                int m=0;
                for(int i=0;i<n;i++){
                    cout<<x+m<<" ";
                    m+=s;
                }
                cout<<endl;
            }
        }
        else
        {
            int q=n-1;
            while(1){
                if((y-x)%q!=0){
                    q--;
                }
                else{
                    break;
                }
            }
                cout<<x<<" ";
                int m=x;
                
                int dif=(y-x)/q;
                int no=n-1-q;
                for(int i=0;i<q;i++){
                    m=m+dif;
                    cout<<m<<" ";
                }
                int c1=0;
                
                for(int i=1;i<=no;i++){
                    if((x-i*dif)>0){
                        cout<<(x-i*dif)<<" ";
                        c1++;
                    }
                    else{
                        break;
                    }

                }
                if(c1==no){
                    cout<<endl;
                }
                else{
                    no=no-c1;
                    for(int i=1;i<=no;i++){
                        cout<<y+i*dif<<" ";
                    }
                    cout<<endl;
                }

            

        }
        


    }
    }


    return 0;
}
