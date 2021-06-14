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
        def(a,n);
        ll s1=0,s2=0;
        ll b[n]={0};
        for(int i=0;i<n;i++){
            if(i%2==0){s1+=a[i];}
            else {s2+=a[i];}
            if(i==0){
                b[i]=0;
            }
            else{
                b[i]=a[i]-a[i-1];
            }

        }
        ll d=s1-s2;
        int c=0;
        if(d==0){
            c=0;
            ll kk=a[0];

            for(int i=1;i<n;i++){
                kk=a[i]-kk;
                if(kk<0){
                    c=1;
                    break;
                }
            }
            if(c){
                cout<<"NO";
                nl;
            }
            else{
                cout<<"YES";
           nl;
            }
            continue;
        }
        
        int d1=0;
        ll pre[n];
        ll suf[n];
        pre[0]=a[0];

        for(int i=1;i<n;i++){
            if(pre[i-1]<0){
                pre[i]=-1;

            }
            else{
            pre[i]=a[i]-pre[i-1];
           
            }
            
        }
        suf[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(suf[i+1]<0){
                suf[i]=-1;
            }
            else{
            suf[i]=a[i]-suf[i+1];
          
            }
        }
        int flag=0;
        
        for(int i=1;i<n;i++){
            if(pre[i]<0){
                
                d1=0;
         
                    ll x=0,y=0;
                    if(i+1<n){
                        if(suf[i+1]>=0){
                            d1++;
                            x=suf[i+1];
                        }
                        else{
                            
                           
                        }
                    }
                    else{
                        d1++;
                    }
                    if(i-2>=0){
                        if(pre[i-2]>=0){
                            y=pre[i-2];
                            d1++;
                        }
                        else{
                            
                        }
                    }
                    else{
                        d1++;
                    }
                    if(d1==2){
                        if(a[i-1]-x>=0){
                            if(a[i]-y>=0){
                                if(a[i-1]-x==a[i]-y){
                                    if(i%2==0){
                                        if(2*b[i]==d){
                                            flag=1;
                                            break;

                                        }
                                    }
                                    else{
                                         if(-2*b[i]==d){
                                            flag=1;
                                            break;

                                        }
                                    }
                                    
                                    
                                }
                            }
                        }
                        
                    

                

            }
            
        }
        }
        for(int i=n-2;i>=0;i--){
            if(suf[i]<0){
                d1=0;
                ll x=0,y=0;
                if(i+2<n){
                    if(suf[i+2]>=0){
                        d1++;
                        x=suf[i+2];
                    }
                }
                else{
                    d1++;
                }
                if(i-1>=0){
                    if(pre[i-1]>=0){
                        d1++;
                        y=pre[i-1];
                    }
                }
                else{
                    d1++;
                }
                if(d1==2){
                    if(a[i+1]-y>=0 && a[i]-x>=0){
                        if(a[i+1]-y==a[i]-x){
                            if((i+1)%2==0){
                                if(2*b[i+1]==d){
                                     flag=1;
                                      break;

                                }
                            }
                            else{
                                if(-2*b[i+1]==d){
                                    flag=1;
                                    break;
                                }
                            }
                            
                        }
                    }
                }

            }
        }
        if(flag){
           cout<<"YES";
           nl;
        }
        else{
            cout<<"NO";
            nl;
        }
        
    
        

     
       
    

    }


    return 0;
}
