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
const int maxn=200001;
vector<ll> adj[200001];
int p[maxn];
int vis[maxn];
ll sub[maxn];
int dfs(int s){
    sub[s]=1;
    for(int i:adj[s]){
        if(p[s]!=i){
            p[i]=s;
            sub[s]+=dfs(i);

        }

    }
    return sub[s];
}

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> ans(0);
        for(int i=0;i<=n+1;i++){
            adj[i].clear();
            vis[i]=0;

        }
        // cout<<adj[0].size()<<endl;

        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);


        }
        p[0]=-1;
        ll rem=1ll*n*(n-1)/2;
        ll a=0;
        ll k=1;
        dfs(0);
        for(int i:adj[0]){
            a+=(k*sub[i]);
            k+=sub[i];

        }
        ans.pb(rem-a);
        rem=a;
        int l=0,r=0;
        int pos=0;
        vis[0]=1;
        int f=0;
        for(int i=1;i<=n;i++){
            if(f==1){
                ans.pb(0);
                continue;
            }
        
            if(i==n){
                ans.pb(rem);
                continue;
            }
               if(vis[i]==1){
                ans.pb(0);
                continue;
            }

            int i1=i;
            while(vis[i1]!=1){
                vis[i1]=1;
                pos=i1;
                i1=p[i1];
              
            }
            //cout<<"a"<<i1<<endl;
            if(i1==l){
                sub[l]-=sub[pos];

                l=i;
                ans.pb(rem-sub[l]*sub[r]);  
                rem=sub[l]*sub[r];
                // ll a1=0;
                // ll b1=0;
                
                // for(int j:adj[l]){
                //     if(vis[j]!=1){
                //         a1+=sub[j];
                //     }

                // }
                // for(int j :adj[r]){
                //     if(vis[j]!=1){
                //         b1+=sub[j];
                //     }
                // } 
                // ll aa=a1*b1+a1+b1+1;
                // ans.pb(rem-aa);
                // rem=aa;    
            }
            else if(i1==r){
                 sub[r]-=sub[pos];

                r=i;
                ans.pb(rem-sub[l]*sub[r]);  
                // sub[r]-=sub[pos];
                // r=i;
                // ll a1=0;
                // ll b1=0;
                //     for(int j:adj[l]){
                //     if(vis[j]!=1){
                //         a1+=sub[j];
                //     }

                // }
                // for(int j :adj[r]){
                //     if(vis[j]!=1){
                //         b1+=sub[j];
                //     }
                // } 
                // ll aa=a1*b1+a1+b1+1;
                // ans.pb(rem-aa);
                // rem=aa; 
                rem=sub[l]*sub[r]; 
         
              
            }
            else{
                f=1;
                ans.pb(rem);
                rem=0;

            }
            
            

        }
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<sp;
        }
        
        nl;
        
        
        

        

    }


    return 0;
}
