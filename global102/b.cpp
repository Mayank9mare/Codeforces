//              .-""""-.
//                        / j      \
//                       :.d;       ;
//                       $P        :
//            .m._       $$         :
//           dSMMSSSss.__$b.    __ :
//          :MMSMMSSSMMMSS$$b  $P ;
//          SMMMSMMSMMMSSS$$$$     :b
//         dSMMMSMMMMMMSSMM$$b.dP SSb.
//        dSMMMMMMMMMMSSMMPT$$=-. /TSSSS.
//       :SMMMSMMMMMMMSMMP  `b_.'  MMMMSS.
//       SMMMMMSMMMMMMMMM \  .'\    :SMMMSSS.
//      dSMSSMMMSMMMMMMMM  \/\_/; .'SSMMMMSSSm
//     dSMMMMSMMSMMMMMMMM    :.;'" :SSMMMMSSMM;
//   .MMSSSSSMSSMMMMMMMM;    :.;   MMSMMMMSMMM;
//  dMSSMMSSSSSSSMMMMMMM;    ;.;   MMMMMMMSMMM
// :MMMSSSSMMMSSP^TMMMMM     ;.;   MMMMMMMMMMM
// MMMSMMMMSSSSP   `MMMM     ;.;   :MMMMMMMMM;
// "TMMMMMMMMMM      TM;    :`.:    MMMMMMMMM;
//    )MMMMMMM;     _/\    :`.:    :MMMMMMMM
//   dSS$$MMMb.  |._\\   :`.:     MMMMMMMM
//   T$S$$$$$$$$$m;O\\"-;`.:_.-  MMMMMMM;
//  :$$$$$$$$$$$$$$b_l./\ ;`.:    mMMSSMMM;
//  :$$$$$$$$$$$$$$$$$$$./\;`.:  .$MSMMMMMM
//   $$$$$$$$$$$$$$$$$$$$. \`.:.$$$SMSSSMMM;
//   $$$$$$$$$$$$$$$$$$$$$. \.:$$$$SSMMMMMMM
//   :$$$$$$$$$$$$$$$$$$$$$.//.:$$$SSSSSSSMM;
//   :$$$$$$$$$$$$$$$$$$$$$$.`.:$SSSSSSSMMMP
//    $$$$$$$$$;"^J "^$$$$;.`.$P  `SSSMMMM
//    :$$$$$$$$$       :$$$;.`.P'..   TMMM$b
//    :$$$$$$$$$;      $$$$;.`/ c^'   d$$$$S;
//    $$$$S$$$$;      '^^^:_dg:___.$$$$$SSS
//    $$$SS$$$$;            $$$$$$$$$$$$$SSS;
//   :$$SSSS$$$$            : $$$$$$$$$$$$SSS
//   :P"TSSSS$$$            ; $$$$$$$$$$$$SSS;
//   j    `SSSSS$           :  :$$$$$$$$$$$$SS$
//  :       "^S^'           :   $$$$$$$$$$$$S$;
//  ;.____.-;"               "--^$$$$$$$$$$$$P
//  '-....-"  bug                  ""^^T$$$P"





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
#define sp " "
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
        int n,u,r,d,l;
        vector<pll> v(4);
        cin>>n>>u>>r>>d>>l;
        int k=(n-2);
        // if(u>=k){
        //     u-=k;
        // }
        // if(r>=k){
        //     r-=k;
        // }
        // if(d>=k){
        //     d-=k;
        // }
        // if(l>=k){
        //     l-=k;
        // }
        v[0]=mk(u,0);
        v[1]=mk(r,1);
        v[2]=mk(d,2);
        v[3]=mk(l,3);
        
        
        map<ll,ll> m;
        m[0]=u;
        m[1]=r;
        m[2]=d;
        m[3]=l;
        if(m[0]<=k && m[1]<=k&&m[2]<=k&&m[3]<=k){
            cout<<"YES"<<endl;
            continue;
        }
        //cout<<v.size();
        sort(v.rbegin(),v.rend());
        
        int b1=0,b2=0,b3=0,b4=0;
        for(int i=0;i<4;i++){
            int s1=v[i].second;
            //cout<<s1<<endl;
            if(s1==0){
                 if(m[0])
               
                if(m[0]>0 && m[1]>0 && b1==0){
                    m[0]--;
                    m[1]--;
                    b1=1;
                }
                if(m[0]>0 && m[3]>0 && b4==0){
                    m[0]--;
                    m[3]--;
                    b4=1;
                }
                
            }
            else if(s1==1){
                if(m[1]>0 && m[2]>0 && b2==0){
                    m[1]--;
                    m[2]--;
                    b2=1;
                }
                if(m[0]>0 && m[1]>0 && b1==0){
                    m[0]--;
                    m[1]--;
                    b1=1;
                }

            }
            else if(s1==2){
                 if(m[2]>0 && m[3]>0 && b3==0){
                    m[2]--;
                    m[3]--;
                    b3=1;
                }
                if(m[2]>0 && m[1]>0 && b2==0){
                    m[2]--;
                    m[1]--;
                    b2=1;
                }
            }
            else if(s1==3){
                 if(m[3]>0 && m[0]>0 && b4==0){
                    m[0]--;
                    m[3]--;
                    b4=1;
                }
                if(m[3]>0 && m[2]>0 && b3==0){
                    m[3]--;
                    m[2]--;
                    b3=1;
                }
            }
            //cout<<m[0]<<sp<<m[1]<<sp<<m[2]<<sp<<m[3]<<endl;
        }
        // int s=max({u,r,d,l});
        // if(s==r){
        //     int temp=u;
        //     u=r;
        //     r=d;
        //     d=l;
        //     l=temp;

        // }
        // else if()
        // if(u>1&& r>0 && l>0 && b1==0 && b4==0){
        //     b1=1;
        //     b4=1;
        //     u--;
        //     u--;
        //     r--;
        //     l--;
        // }
        // if(r>1&& d>0 && u>0 && b1==0&&b2==0){
        //     b1=1;
        //     b2=1;
        //   r--;
        //   r--;
        //   d--;
        //   u--;
        // }
        // if(d>1&& l>0 && r>0 && b2==0&&b3==0){
        //     b2=1;
        //     b3=1;
        //     d--;
        //     d--;
        //     l--;
        //     r--;
        // }
        // if(l>1&& u>0 && d>0&&b3==0 && b4==0){
        //     b3=1;
        //     b4=1;
        //     l--;
        //     l--;
        //     u--;
        //     d--;
        // }
        // if(b1==0 && u>0 && r>0){
        //     u--;
        //     r--;
        //     b1=1;
        // }
        // if(b2==0 && r>0 && d>0){
        //     r--;
        //     d--;
        //     b2=1;
        // }
        // if(b3==0 && d>0 &&l>0){
        //     b3=1;
        //     d--;
        //     l--;
        
        // }
        // if(b4==0 && l>0 && u>0){
        //     l--;
        //     u--;
        //     b4=1;
        // }
     
        //cout<<u<<sp<<r<<sp<<d<<sp<<l;
       
        if(m[0]>k || m[1]>k || m[2]>k|| m[3]>k){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        

    }


    return 0;
}
