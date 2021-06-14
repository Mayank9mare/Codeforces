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
#define sp " "
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 998244353
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;

using namespace std;
//KnightMareVoid
ll power(ll x,int y){
    ll p=mod;
    ll res =1;
    x=x%p;
    while(y>0){
        if(y&1){
            res=(res*x)%p;
        }
            y=y>>1;
            x=(x*x)%p;
        }
        return res;

    
}

const int MAXN=300005;
ll dp[MAXN];
ll p[MAXN];

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);

    p[0]=1;
    p[1]=2;
    for(int i=2;i<MAXN;i++){
        p[i]=2*p[i-1]%mod;
        dp[i]=dp[i-1]%mod+2*dp[i-2]%mod+p[i-2]%mod;
        dp[i]%=mod;

        


    }
    int n,m;
    cin>>n>>m;
    string s[n];
    ll c=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        for(int j=0;j<m;j++){
            if(s[i][j]=='o'){
                c++;
            }
        }
    }
    ll l[n][m];
    memset(l,0,sizeof(l));
    ll d[n][m];
    ll ans=0;
    memset(d,sizeof(d),0);
    for(int i=0;i<n;i++){
        int p=0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='o'){
                while(j<m && s[i][j]=='o'){
                    p++;
                    j++;
                }
                j--;
                l[i][j]=p;
                ans=ans%mod+power(2,c-p)%mod*dp[p]%mod;
                ans%=mod;
            }
            else{
                p=0;

            }

        }
    }

        for(int j=0;j<m;j++){
        int p=0;
        for(int i=0;i<n;i++){
            if(s[i][j]=='o'){
                while(i<n && s[i][j]=='o'){
                    p++;
                    i++;
                }
                i--;
                ans=ans%mod+power(2,c-p)%mod*dp[p]%mod;
                ans%=mod;

                d[i][j]=p;
            }
            else{
                p=0;
                
            }

        }
    }
    cout<<ans%mod<<endl;




    return 0;
}
