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
        int a[n];
        int f[2*n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            f[a[i]]++;
        }
        int s=0;
        int flg=0;
        int c=0;
        for(int i=0;i<n;i++){

            int pr=a[i]-1-(i);
            int nx=2*n-a[i]-(n-1-i);
            if(s==0){
                if(nx>0&&pr>0){
                    if(c==0){
                        c+=2;
                    }
                    else{
                    c++;
                    s++;
                    }
                }
               
            }
            else{
                if(i!=0){
                    if(a[i]-a[i-1]-1>=s){
                        pr=pr-s;
                        s=0;
                        if(nx>0 &&pr>0){
                            if(c==0){
                                c+=2;
                            }
                            else{
                            c++;
                            s++;
                            }
                        }
                       
                    }
                    else{
                        pr=pr-(s-(a[i]-a[i-1]-1));
                        s=s-(a[i]-a[i-1]-1);
                        
                        if(nx-s>0&&pr>0){
                            if(c==0){
                                c+=2;
                            }
                            else{
                            c++;
                            s++;
                            }
                        }
                        


                        

                        
                    }
                    
                }
                

            }
            



        }
        // if(c==0){
        //     c++;
        // }
        // else{
        //     if(a[0]==1){
        //         c++;
        //     }
        // }
    
        s=0;
        int d=0;
        // for(int i=0;i<n;i++){
        //     int pr=a[i]-1-(i);
        //     if(pr-s>0){
        //         d++;
        //     }
        //     else{
        //         break;
        //     }
        //     s++;

         
            

        // }
        if(c==0){
            c++;
        }
      
        cout<<c<<endl;
        


            
        

    }


    return 0;
}
