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
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
vector<vector<int>> adj1;
vector<vector<int>> adj2;
vector<int> v1;
vector<int> v2;
int dfs1(int s,int c,int par[]){
    v1[s]=1;
    par[s]=c;
    for(auto x:adj1[s]){
        if(v1[x]==0){
            dfs1(x,c,par);
        }
    }
    return 0;

}
int dfs2(int i,int c,int par[]){
    v2[i]=1;
    par[i]=c;
    for(auto x:adj2[i]){
        if(v2[x]==0){
            dfs2(x,c,par);

        }
    }
    return 0;

}

//vector<pll> v;
vector<pair<ll,pll>> edges;
//vector<pll> v;
int find(int parent[],int i){
    if(parent[i]==i){
        return i;
    }
    return parent[i]=find(parent,parent[i]);
}
void Union(int parent[],int rank[],int x,int y){
    if(rank[x]<rank[y]){
        parent[x]=y;
    }
    else if(rank[x]>rank[y]){
        parent[y]=x;
    }
    else{
        parent[y]=x; //x becomes parent
        rank[x]++;
    }
 
    
}
int solve(){
    int n,m1,m2;
    cin>>n>>m1>>m2;
    adj1.assign(n,vector<int>(0));
    adj2.assign(n,vector<int>(0));
    v1.assign(n,0);
    v2.assign(n,0);
    for(int i=0;i<m1;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        adj1[x].pb(y);
        adj1[y].pb(x);
    }
       for(int i=0;i<m2;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        adj2[x].pb(y);
        adj2[y].pb(x);
    }
    int par1[n];
    int par2[n];
    int r1[n]={0};
    int r2[n]={0};
    int c=1;
    for(int i=0;i<n;i++){
        if(v1[i]==0){
            //cout<<i<<endl;
            dfs1(i,i,par1);
        }
    }
    
    c=1;
    for(int i=0;i<n;i++){
        if(v2[i]==0){
            dfs2(i,i,par2);
            c++;
        }
    }
    // for(int i=0;i<n;i++){
    //     par1[i]=v1[i];
    //     par2[i]=v2[i];

    // }
    ll ans=0;
    //cout<<1<<endl;
    //cout<<par1[4]<<endl;
    vector<pll> v;
    int p1=0;
    int p2=0;
    for(int i=1;i<n;i++){
    

      
    }
    cout<<ans<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first+1<<sp<<v[i].second+1<<endl;
    }


    
    return 0;

}


int main()
{
    minato;
   solve();

    return 0;
}
