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
        int n;
        cin>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int a[3][2];//0->X  1->O
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                a[i][j]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='X'){
                    a[(i+j)%3][0]++;
                }
                if(v[i][j]=='O'){
                    a[(i+j)%3][1]++;
                }
            }
        }
        int f1=0;
        int f2=1;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i!=j){
                    if(a[i][0]+a[j][1]<a[f1][0]+a[f2][1]){
                        f1=i;
                        f2=j;
                    }


                }

            }
            
        
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='X'){
                    if((i+j)%3==f1){
                        v[i][j]='O';
                    }
                }
                else if(v[i][j]=='O'){
                    if((i+j)%3==f2){
                       v[i][j]='X';
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<endl;
        }

    }


    return 0;
}
