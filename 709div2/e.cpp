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
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))

using namespace std;
//KnightMareVoid
      vector < vector<int> > g, gr;
       vector<bool> used;
       vector<int> order, component;
   
       void dfs1 (int v) {
           used[v] = true;
           for (int i=0; i<g[v].size(); ++i)
               if (!used[ g[v][i] ])
                   dfs1 (g[v][i]);
           order.push_back (v);
       }
   
       void dfs2 (int v) {
           used[v] = true;
           component.push_back (v);
           for (int i=0; i<gr[v].size(); ++i)
               if (!used[ gr[v][i] ])
                   dfs2 (gr[v][i]);
       }
   
       int example() {
           int n;
           cin>>n;
           ll cost[n];
           for(int i=0;i<n;i++){
               cin>>cost[i];

           }
           g.resize(n);
           gr.resize(n);
           int m;
           cin>>m;
     
           for (int i=0;i<m;i++) {
               int a, b;
               cin>>a>>b;
               a--;b--;
              g[a].push_back (b);
               gr[b].push_back (a);//transposed graph
           }
           ll ans=1;
           ll v2=0;
   
           used.assign (n, false);
           for (int i=0; i<n; ++i)
               if (!used[i])
                   dfs1 (i);
           used.assign (n, false);
           for (int i=0; i<n; ++i) {
               int v = order[n-1-i];
               if (!used[v]) {
                   dfs2 (v);
                   ll mina=LONG_LONG_MAX;
                   for(int mm=0;mm<component.size();mm++){
                       mina=min(mina,1ll*cost[component[mm]]);
                       
                   }
                   //cout<<mina<<sp;
                   //nl;
                   if(component.size()>0)v2+=mina;
                   int cnt=0;
                   for(int mm=0;mm<component.size();mm++){
                       if(cost[component[mm]]==mina)cnt++;
                   }
                   ans*=(cnt%mod);
                   ans%=mod;
                   
                   //... printing next component ...
                   component.clear();
               }
           }
           cout<<v2<<sp<<ans<<endl;
           return 0;
       }


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
example();
    


    return 0;
}
