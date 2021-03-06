//                           ,;;;;;;,
//                                 ,;;;'""`;;\
//                               ,;;;/  .'`',;\
//                             ,;;;;/   |    \|_
//                            /;;;;;    \    / .\
//                          ,;;;;;;|     '.  \/_/
//                         /;;;;;;;|       \
//              _,.---._  /;;;;;;;;|        ;   _.---.,_
//            .;;/      `.;;;;;;;;;|         ;'      \;;,
//          .;;;/         `;;;;;;;;;.._    .'         \;;;.
//         /;;;;|          _;-"`       `"-;_          |;;;;\
//        |;;;;;|.---.   .'  __.-"```"-.__  '.   .---.|;;;;;|
//        |;;;;;|     `\/  .'/__\     /__\'.  \/`     |;;;;;|
//        |;;;;;|       |_/ //  \   //  \ \_|       |;;;;;|
//        |;;;;;|       |/ |/    || ||    \| \|       |;;;;;|
//         \;;;;|    __ || _  .-.\| |/.-.  _ || __    |;;;;/
//          \jgs|   / _\|/ = /_o_\   /_o_\ = \|/_ \   |;;;/
//           \;;/   |`.-     `   `   `   `     -.`|   \;;/
//          _|;'    \ |    _     _   _     _    | /    ';|_
//         / .\      \_  ( '--'(     )'--' )  _//      /. \
//         \/_/       \_/|  /_   |   |   _\  |\_/       \_\/
//                       | /|\  \   /  //|\ |
//                       |  | \'._'-'_.'/ |  |
//                       |  ;  '-.```.-'  ;  |
//                       |   \    ```    /   |
//     __                ;    '.-"""""-.'    ;                __
//    /\ \_         __..--\     `-----'     /--..__         _/ /\
//    \_'/\`''---''`..;;;;.'.__,       ,__.',;;;;..`''---''`/\'_/
//         '-.__'';;;;;;;;;;;,,'._   _.',,;;;;;;;;;;;''__.-'
//              ``''--; ;;;;;;;;..`"`..;;;;;;;; ;--''``   _
//         .-.       /,;;;;;;;';;;;;;;;;';;;;;;;,\    _.-' `\
//       .'  /_     /,;;;;;;'/| ;;;;;;; |\';;;;;;,\  `\     '-'|
//      /      )   /,;;;;;',' | ;;;;;;; | ',';;;;;,\   \   .'-./
//      `'-..-'   /,;;;;','   | ;;;;;;; |   ',';;;;,\   `"`
//               | ;;;','     | ;;;;;;; |  ,  ', ;;;'|
//              _\__.-'  .-.  ; ;;;;;;; ;  |'-. '-.__/_
//             / .\     (   )  \';;;;;'/   |   |    /. \
//             \/_/   (`     `) \';;;'/    '-._|    \_\/
//                     '-/ \-'   '._.'         `
//                       """      /.`\
//                                \|_/


#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll,ll>
#define vll vector<ll>
#define mll map<ll,ll>
//#define mod 1000000007
#define sp " "
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 1000000007//998244353
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;
#define minato ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
//#define endl "\n"
#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
int n,flag;
//vector<vector<pll>> adj;
vector<vector<pll>> g; 
vector<int> c;
void dfs(int x,int p){
    for(auto u:g[x]){
        int v=u.first,w=u.second;
        //cout<<v<<sp<<x<<endl;
        if(c[v]==-1){
            c[v]=w^c[x];
            //if(v!=p)
            dfs(v,x);
        }
        else{
           if(c[v]!=w^c[x]){
               //cout<<v<<sp<<x<<endl;
               flag=1;
               return;
           }
           
        }
        if(flag==1 )return;
    }
    return ;


}
int solve(){
    int m;
    cin>>n>>m;
    int a[n];
    int b[n];
    int val[n];
    flag=0;
    //adj.assign(n,vector<pll>(0));
    g.assign(n,vector<pll>(0));
    c.assign(n,-1);
    //dp.assign(n,0);

    for(int i=0;i<n-1;i++){
        int x,y,z;
        cin>>x>>y>>z;
        x--;y--;
        a[i]=x;
        b[i]=y;
        val[i]=z;
       // adj[x].pb({y,z});
        //adj[y].pb({x,z});
        if(z!=-1){
        z=ppcll(z)&1;
            g[x].pb({y,z});
            g[y].pb({x,z});
        
        }
    }
    for(int i=0;i<m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        x--;
        y--;
        g[x].pb({y,z&1});
        g[y].pb({x,z&1});
    }

    
  for(int i=0;i<n;i++){
      if(c[i]==-1){
          c[i]=0;
          dfs(i,-1);
      }
  }
  if(flag==1){
      cout<<"NO"<<endl;
      return 0;
  }
  cout<<"YES"<<endl;
  for(int i=0;i<n-1;i++){
      if(val[i]==-1){
          val[i]=c[a[i]]^c[b[i]];

      }
      cout<<a[i]+1<<sp<<b[i]+1<<sp<<val[i]<<endl;
  }
    


    return 0;

}


signed main()
{
    minato;
    w(t)
    solve();


    return 0;
}
