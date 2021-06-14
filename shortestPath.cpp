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

const int MAXN=3005;
int p[MAXN][MAXN];


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    memset(p,-1,sizeof(p));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            p[i][j]=-1;
        }
    }
    vector<int> g[n];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a-1].pb(b-1);
        g[b-1].pb(a-1);

    }
    map<tuple<int,int,int>,int> mp;
  
    for(int i=0;i<k;i++){
       int a,b,c;
       cin>>a>>b>>c;
       mp[make_tuple(a-1,b-1,c-1)]=1;
    }
    queue<pair<int,int>> q;
    q.push({0,0});
   
    int ans=-1;
    while(!q.empty()){
        auto x=q.front();
        int l=x.second;
        int r=x.first;
        q.pop();
        
        if(l==(n-1)){
            //printf(" %d,%d",r,l);
            ans=r;
            
            break;
        }
        
        for(int i=0;i<g[l].size();i++){
            if(p[l][g[l][i]]>=0){
                continue;
            }
            if(mp[{r,l,g[l][i]}]==1){
                continue;
            }
           // cout<<l<<sp<<g[l][i]<<sp<<r<<endl;
            p[l][g[l][i]]=r;
            q.push(mk(l,g[l][i]));
          
           
        }
        

    }
    //cout<<ans<<endl;
    if(ans==-1){

        cout<<-1<<endl;
    }
    else{
       //cout<<ans<<endl;
        vector<int> v(0);
        v.pb(n-1);
        v.pb(ans);
        int kk=n-1;
        while(p[ans][kk]!=-1 ){
            v.pb(p[ans][kk]);
            
            kk=ans;
            ans=v.back();
           
            //cout<<kk<<sp<<ans<<endl;
            if(ans==-1)break;

        }
        v.pop_back();
     

        cout<<v.size()-1<<endl;
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]+1<<sp;
        }
        nl;
    }






    return 0;
}
