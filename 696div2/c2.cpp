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


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      
        
        int a[2*n];
        re(i,2*n){
            cin>>a[i];
            
        }
        sort(a,a+2*n);
        int ma=a[2*n-1];
        //cout<<ma<<endl;
        int c=0;
        int mm=-1;
        

        for(int i=0;i<(2*n-1);i++){
            multiset<int,greater<int>> m;
            c=0;
            ma=a[2*n-1];
         
            for(int j=0;j<(2*n-1);j++){
                if(i==j){continue;
                }
                m.insert(a[j]);
            }
            while(m.size()){
               int x=*m.begin();
               m.erase(m.begin());
               if(m.find(ma-x)==m.end()){
                   //cout<<i<<" "<<x<<" "<<ma<<endl;
                   c=1;
                   break;

               }
               else{
                   c=0;
                   
                   m.erase(m.find(ma-x));
                   
                   
                   ma=x;

                   

               }
            }
             

         if(c==0){
             mm=i;
            

         }
        } 




        if(mm==-1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            cout<<a[2*n-1]+a[mm]<<"\n";
            multiset<int,greater<int>> tmp;
            for(int i=0;i<2*n;i++){
                tmp.insert(a[i]);

            }
            tmp.erase(tmp.find(a[mm]));
            tmp.erase(tmp.find(a[2*n-1]));
            int maa=a[2*n-1];
            cout<<a[2*n-1]<<" "<<a[mm]<<"\n";
            while(tmp.size()){
                int x=*tmp.begin();
                int y=*tmp.find(maa-x);
                cout<<x<<" "<<y<<"\n";
                tmp.erase(tmp.begin());
                tmp.erase(tmp.find(maa-x));
                maa=x;


            }
            

    }
    }


    return 0;
}
