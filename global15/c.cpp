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
int check(pll a,pll b){
    if(a.first>a.second){
        swap(a.first,a.second);
    }
      if(b.first>b.second){
        swap(b.first,b.second);
    }
    
    if(a.first<b.first){
        if(a.second<b.second && a.second>b.first){
            return 1;
        }
    }
    if(a.second>b.second){
        if(a.first<b.second && a.first>b.first){
            return 1;
        }
    }
    return  0;
}

int solve(){
    int k;
    cin>>n>>k;
    vector<pll> v;
    set<int> s;
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
        // vis[x]=1;
        // vis[y]=1;
        s.insert(x);
        s.insert(y);
    }
    vector<int> rem;
    vector<pll> v2;
    for(int i=1;i<=2*n;i++){
        if(s.find(i)==s.end()){
            rem.pb(i);
            //vis[i]=0;

        }
    }
    if(rem.size()!=0){
    vector<int> vis(rem.size(),0);
    int m=rem.size()/2;
    for(int i=0;i+m<rem.size();i++){
        if(vis[i]==1)continue;
        v2.pb({rem[i],rem[i+m]});
        vis[i]=1;
        vis[i+m]=1;
    }
    for(int i=0;i<v2.size();i++){
        // for(int j=i+1;j<v2.size();j++){
        //     if(check(v2[i],v2[j])==0){
        //         swap(v2[i].first,v2[j].first);
        //         if(check(v2[i],v2[j])==0){
        //             swap(v2[i].first,v2[j].first);
        //             swap(v2[i].first,v2[j].second);
        //         }
        //     }

        // }
        v.pb(v2[i]);
    }
    }
    int ans=0;
 
        for(int i=0;i<n;i++){
          
            pll p=v[i];
            for(int j=i+1;j<n;j++){
            if(check(v[i],v[j])){
                ans++;
            }

               
            }
        }
        
    
    cout<<ans<<endl;
    

    //cout<<state(v,rem)<<endl;
    
    return 0;

}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        

    }


    return 0;
}
