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
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
//#define endl "\n"
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
const int MAX=205;
ll fac[MAX];
ll infact[MAX];
int modu(ll x){
while(x<0)
  x+=mod;
return (x%mod);
}
ll power(ll x,ll y){
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
ll modInverse(ll n){
    ll p=mod;
    return power(n,p-2);
}
ll nCrModFermat(ll n,ll r){
    if(r>n)return 0;
    if(r==n)return 1;
    ll p=mod;
    if(r==0){
        return 1;
    }
    //cout<<1<<endl;
    
  
    return(fac[n]%mod*(infact[r])%p*(infact[n-r])%p)%mod;

}
void preprocess(){
    fac[0]=1;
    infact[0]=1;
    //cout<<1<<endl;
    for(int i=1;i<MAX;i++){
        fac[i]=(fac[i-1]%mod*i%mod)%mod;
        infact[i]=(ll)infact[i - 1] * power(i, mod - 2) % mod;
        //cout<<fac[i]<<sp;
    }
}
//KnightMareVoid
vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<bool> visited;

int dfs(vector<int> &v,vector<int> &s) {
    ll ans=0;
    for(int i=0;i<v.size();i++){
        vector<int> v1(0);
        vector<int> s1(0);
        visited[v[i]]=1;
        // for(int u:adj[v[i]]){
        //     if(visited[u]==0){
        //         v1.pb(u);
        //     }
        // }
        for(int j=0;j<n;j++){
            if(visited[j]==0){
                s1.pb(j);
            }
            else{
                for(int u:adj[j]){
                    if(visited[u]==0){
                        v1.pb(u);
                    }
                }

            }
        }
        int p1=upper_bound(all(s1),v[i])-s1.begin();
        p1=s1.size()-p1;
        p1++;
    

        //visited[v[i]]=1;
       
        ans+=infact[v.size()]*(p1%mod+dfs(v1,s1)%mod)%mod;
        ans%=mod;
        visited[v[i]]=0;
        


        

    }
    return ans;

   
    
    


    
}

int solve(){
    //int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vector<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        s.pb(i);
        v.pb(i);
    }
    ll ans=dfs(v,s);
    cout<<ans<<endl;

    return 0;

}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
   adj.resize(201);
   visited.resize(201);
   preprocess();
  
  solve();


    return 0;
}
