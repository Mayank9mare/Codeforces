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
//KnightMareVoid
int n;
//int f=0;
vector<ll> adj[2001];
 int vis[2001];
  vector<pll> v(0);
 vector<int> d;
 ll dis[2001][2001];
void query(int x){
    vis[x]=2;
    vector<int> d1(n+1);
    cout<<"?"<<sp<<x<<endl;
   // cout<<v.size()<<endl;
    for(int i=1;i<=n;i++){
        int y;
        cin>>y;
        dis[x][i]=y;
        dis[i][x]=y;
    }
    return;
}
int solve(){
    //int n;
    cin>>n;
    int f=0;
    queue<pll> q;
    q.push({1,1});
    vis[1]=1;
    while(q.size()){
        if(f)break;
        int c=0;
        int x=q.front().first;
        int p=q.front().second;
        q.pop();
        if(vis[x]==2){
            for(int i=1;i<=n;i++){
                if(vis[i]==0 && dis[p][i]==2){
                    v.pb({x,i});
                    if(v.size()==n-1){
                        f=1;
                        break;
                    }
                    dis[x][i]=1;
                    dis[i][x]=1;
                    vis[i]=1;
                    q.push({i,x});


                }
            }
            continue;

        }
        
        query(x);
        for(int i=1;i<=n;i++){
            if(dis[x][i]==1 && vis[i]==0){
                //cout<<i<<endl;
                c++;

            }
        }
        int c1=0;
        for(int i=1;i<=n;i++){
            if(dis[x][i]==1 && vis[i]==0){
                c1++;
                if(c1==c){
                    vis[i]=2;
                    v.pb({x,i});
                    if(v.size()==n-1){
                        f=1;
                        break;
                    }
                    q.push({i,x});
                }
                else{
                    vis[i]=1;
                    v.pb({x,i});
                    if(v.size()==n-1){
                        f=1;
                        break;
                    }
                    q.push({i,x});
                    

                }
            }
        }
        if(f)break;


    }
    cout<<"!\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<sp<<v[i].second<<"\n";
    }
    nl;

    return 0;

}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
   solve();


    return 0;
}
