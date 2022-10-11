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
#define endl "\n"
#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};


using namespace std;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef KNIGHTMARE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

//void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//KnightMareVoid
vector<vector<int>> adj;
vector<int> h;

 void update(deque<int>&dq,vector<int>&nums,int k/*window size*/,int i)
    {
        //Remove unnecessary from back
        while(!dq.empty() && nums[i]<nums[dq.back()]) dq.pop_back();
        
        //Remove unnecessary from front
        while(!dq.empty() && i-dq.front()>=k) dq.pop_front();
        
        dq.push_back(i);
    }
int maxa=0;
int dfs(int s,int p){
    for(int x:adj[s]){
        if(p==x)continue;
        h[x]=1+h[s];

        dfs(x,s);
    }
}
// int dfs2(int s,int p){
//     for(int x:adj[s]){
//         if(p==x)continue;
//         //h[x]=1+h[s];
//         dfs2(x,s);
//         dp[s]+=dp[x];
//     }
//     if(h[s]==maxa){
//         dp[s]++;
//     }
// }

int dfs2(int s,int p,int &y,int &m){
    int mx=0;
    
    for(auto x:adj[s]){
        if(x==p)continue;
        int r=dfs2(x,s,y,m);
        mx=max(r,mx);
        

    }

    if(mx==m-1 && p>0){
        y++;
        return -1;
    }
    return mx+1;

}
int solve(){
    int n,k;
    cin>>n>>k;
    maxa=0;
    adj.assign(n,vector<int>(0));

    h.assign(n,0);
    
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        x--;
  
        adj[x].pb(i);
    }
 
    dfs(0,-1);
   
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[h[i]]++;
        maxa=max(maxa,h[i]);
    }
    
    int l=0,r=maxa+1;
    while(l+1<r){
        int m=(l+r)/2;
      
        int c=0;
        dfs2(0,-1,c,m);
       // cout<<m<<sp<<c<<endl;
       
        if(c>k){
            l=m;
        }
        else{
            r=m;
        }
        
    }
    // for(int i=1;i<=maxa;i++){
    //     int m=i;
    //            vector<int> dp(maxa+1,0);
    //     deque<int> dq;
    //     dp[1]=0;
    //     dq.push_back(1);
        

    //     for(int i=2;i<=maxa;i++){
    //         dp[i]=dp[dq.front()]+mp[i];
    //         while(!dq.empty() && dp[i]<dp[dq.back()]) dq.pop_back();
        
    //     //Remove unnecessary from front
    //         while(!dq.empty() && i-dq.front()>=(m)) dq.pop_front();
        
    //         dq.push_back(i);

    //     }
    //     int c=dp[dq.front()];
    //     //cout<<c<<endl;
    // }
 
    cout<<r<<endl;




    return 0;

}


signed main()
{
    #ifndef KNIGHTMARE
    freopen("Error.txt", "w", stderr);
    #endif
    
    minato;
    w(t)
    solve();


    return 0;
}
