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
        int n,m;
        cin>>n>>m;
        string a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
     
        int c=0;
        vector<pair<int,int>> v;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                
                if(a[i][j]=='1'){
                    c++;
                    a[i][j]='0';
                    v.pb(mk(i,j));
                    a[i][j+1]=(a[i][j+1]=='0')?'1':'0';
                    v.pb(mk(i,j+1));
                    a[i+1][j]=(a[i+1][j]=='0')?'1':'0';
                    v.pb(mk(i+1,j));
                }
                else{
                    a[i][j+1]=(a[i][j+1]=='0')?'1':'0';
                    v.pb(mk(i,j+1));
                    a[i+1][j]=(a[i+1][j]=='0')?'1':'0';
                    v.pb(mk(i+1,j));
                    a[i+1][j+1]=(a[i+1][j+1]=='0')?'1':'0';
                    v.pb(mk(i+1,j+1));

                }

            }

        }
        for(int i=0;i<n-1;i++){
            if(a[i][m-1]=='1'&&a[i][m-2]=='0'){
                v.pb(mk(i,m-1));
                a[i][m-1]='0';
                a[i+1][m-2]=(a[i+1][m-2]=='0')?'1':'0';
                v.pb(mk(i+1,m-2));
                a[i+1][m-1]=(a[i+1][m-1]=='0')?'1':'0';
                v.pb(mk(i+1,m-1));

            }
            else if(a[i][m-1]=='0'&&a[i][m-2]=='1'){
                v.pb(mk(i,m-2));
                a[i][m-2]='0';
                a[i+1][m-2]=(a[i+1][m-2]=='0')?'1':'0';
                v.pb(mk(i+1,m-2));
                a[i+1][m-1]=(a[i+1][m-1]=='0')?'1':'0';
                v.pb(mk(i+1,m-1));

            }
            else if(a[i][m-1]=='1'&&a[i][m-2]=='1'){
                v.pb(mk(i,m-2));
                a[i][m-2]='0';
                v.pb(mk(i,m-1));
                a[i][m-1]='0';
                a[i+1][m-1]=(a[i+1][m-1]=='0')?'1':'0';
                v.pb(mk(i+1,m-1));

            }
        }
        for(int i=0;i<m-1;i++){
            if(a[n-1][i]=='1'&&a[n-2][i]=='0'){
                v.pb(mk(n-1,i));
                a[n-1][i]='0';
                a[n-1][i+1]=(a[n-1][i+1]=='0')?'1':'0';
                v.pb(mk(n-1,i+1));
                a[n-2][i+1]=(a[n-2][i+1]=='0')?'1':'0';
                v.pb(mk(n-2,i+1));


            }
            else if(a[n-1][i]=='0'&&a[n-2][i]=='1'){
                v.pb(mk(n-2,i));
                a[n-2][i]='0';
                a[n-1][i]=(a[n-1][i]=='0')?'1':'0';
                v.pb(mk(n-1,i));
                a[n-1][i+1]=(a[n-1][i]=='0')?'1':'0';
                v.pb(mk(n-1,i+1));
               

            }
            else if(a[n-1][i]=='1'&&a[n-2][i]=='1'){
                v.pb(mk(n-2,i));
                a[n-2][i]='0';
                 v.pb(mk(n-1,i));
                a[n-1][i]='0';
                a[n-1][i+1]=(a[n-1][i]=='0')?'1':'0';
                v.pb(mk(n-1,i+1));
                

            }

        }
        if(a[n-1][m-1]=='0'&&a[n-2][m-1]=='1'){
            v.pb(mk(n-2,m-2));
            v.pb(mk(n-2,m-1));
            v.pb(mk(n-1,m-1));
            v.pb(mk(n-2,m-1));
            v.pb(mk(n-1,m-1));
            v.pb(mk(n-1,m-2));
            v.pb(mk(n-2,m-2));
            v.pb(mk(n-2,m-1));
            v.pb(mk(n-1,m-2));



        }
        else if(a[n-1][m-1]=='1'&&a[n-2][m-1]=='0'){
            v.pb(mk(n-2,m-1));
            v.pb(mk(n-1,m-1));
            v.pb(mk(n-1,m-2));
            v.pb(mk(n-2,m-1));
            v.pb(mk(n-1,m-1));
            v.pb(mk(n-2,m-2));
            v.pb(mk(n-1,m-1));
            v.pb(mk(n-1,m-2));
            v.pb(mk(n-2,m-2));


        }
        else if(a[n-1][m-1]=='1'&&a[n-2][m-1]=='1'){
            v.pb(mk(n-2,m-2));
            v.pb(mk(n-1,m-2));
            v.pb(mk(n-1,m-1));
            v.pb(mk(n-2,m-2));
            v.pb(mk(n-1,m-2));
            v.pb(mk(n-2,m-1));

        }
        c=0;
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<endl;
        // }
        cout<<v.size()/3<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i].first+1<<" "<<v[i].second+1<<" ";
            c++;
            if(c==3){
                c=0;
                cout<<endl;
            }
        }

    
        
        



    }


    return 0;
}
