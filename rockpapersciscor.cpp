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
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3;
        cin>>b1>>b2>>b3;
        int m=min(a1,b2)+min(a2,b3)+min(a3,b1);
        int mina =0;
        int a=max({a1,a2,a3});
        if(a==a1){
            if(b1+b3>=a1){
                if(a2>=a3){
                    b3=max(0,b3-a1);
                    b1=min(0,b3-a1);
                    


                }
                else{
                    b1=max(0,b1-a1);
                    b3+=min(0,b1-a1);
                }
            }
            else{
                mina+=(a1-(b1+b3));
                b1=0;
                b3=0;
            }
            if(a2>=a3){
                mina +=max(0,a2-(b2+b1));
                b2+=min(0,b1-a2);
                mina+=max(0,a3-(b2+b3));

            }
            else{
                mina+=max(0,a3-(b2+b3));
                b2+=min(0,b3-a3);
                mina+=max(0,a2-(b2+b1));

            }
        }
        else if(a==a2){
            if(b1+b2>=a2){
                if(a1>=a3){
                    b2=max(0,b2-a2);
                    b1+=min(0,b2-a2);
                    


                }
                else{
                    b1=max(0,b1-a2);
                    b2+=min(0,b1-a2);
                }
            }
            else{
                mina+=(a2-(b1+b2));
                b1=0;
                b2=0;
            }

        }
        else if(a==a3){
            if(b2+b3>=a3){
                if(a2>=a1){
                    b3=max(0,b3-a3);
                    b2+=min(0,b3-a3);
                    


                }
                else{
                    b2=max(0,b2-a3);
                    b3+=min(0,b2-a3);
                }
            }
            else{
                mina+=(a3-(b2+b3));
                b2=0;
                b3=0;
            }
        }
        cout<<m<<mina<<endl;

        

        



    }


    return 0;
}
