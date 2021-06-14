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
#define endl "\n"

using namespace std;
//KnightMareVoid
const int N = 10000001;
int lp[N+1];
vector<int> pr;
void linerSieve(){

for(int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
}
}
ll cnt[N+1];

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
linerSieve();
    int t;
    cin>>t;
    while(t--){
            ll n,k;
            cin>>n>>k;
            ll a[n];
            for(int i=0;i<n;i++){
                ll ans=1;
                ll cnt=0;
                ll ls=0;
                cin>>a[i];
                while(a[i]>1){
                   
                    int p=lp[a[i]];
                    if(p==ls){
                        cnt++;
                    }
                    else{
                        if(cnt%2==1)ans*=ls;
                        ls=p;
                        cnt=1;
                    }
                    a[i]/=p;
                    // if(p==0)break;
                    // while(a[i]%p==0){
                    //     a[i]/=p;
                    //     cnt++;
                    // }
                    // if(cnt%2==1){
                    //     ans*=p;
                    // }
                    
                }
                if(cnt%2==1)ans*=ls;
                a[i]=ans;
                //cout<<a[i]<<endl;
              
            }
            ll left[n][k+1];
            memset(cnt,0,sizeof(cnt));
          
          
            for(int i=0;i<=k;i++){
                ll cur=0;
                int l=n;
                for(int j=n-1;j>=0;j--){
                    while(l-1>=0 && cur+(cnt[a[l-1]]>0)<=i){
                        l--;
                        
                        cur+=(cnt[a[l]]>0);
                        cnt[a[l]]++;


                    }
                    left[j][i]=l;
                    if(cnt[a[j]]>1)cur--;
                    cnt[a[j]]--;
                }


            }
           vector<vector<ll>> dp(n+1,vector<ll>(k+1,1e10));
            
            for(int i=0;i<=k;i++){
                dp[0][i]=0;
            }
            for(int i=1;i<=n;i++){
                for(int j=0;j<=k;j++){
                    if(j>0) dp[i][j]=dp[i][j-1];
                    for(int x=0;x<=j;x++){
                        dp[i][j]=min(dp[i][j],dp[left[i-1][x]][j-x]+1);
                    }
                }
            }
            ll ans=1e10;
            for(int j=0;j<=k;j++){
                ans=min(ans,dp[n][j]);
            }
            cout<<ans<<endl;
         


    }


    return 0;
}
