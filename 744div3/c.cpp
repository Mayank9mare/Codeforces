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
#define endl "\n"
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid

int solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<string> v(0);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.pb(s);
    }
    int a[n][m];
    int b[n][m];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='*'){
                if(i-1>=0 && j-1>=0){
                    a[i][j]=1+a[i-1][j-1];
                }
                else{
                    a[i][j]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(v[i][j]=='*'){
                if(i-1>=0 && j+1<m){
                    b[i][j]=1+b[i-1][j+1];
                }
                else{
                    b[i][j]=1;
                }
            }
        }
    }
    int c[n][m];
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='*'){
                int k1=min(a[i][j],b[i][j]);
                //cout<<k1<<endl;
                if(k1>=1+k){
                    //cout<<k1<<endl;
                    int i1=i,j1=j;
                    c[i][j]=1;
                    int cnt=0;
                    while(cnt<k1-1){
                        i1--;
                        j1--;
                        c[i1][j1]=1;
                        cnt++;
                    }
                    cnt=0;
                    i1=i;
                    j1=j;
                    while(cnt<k1-1){
                        i1--;
                        j1++;
                        c[i1][j1]=1;
                        cnt++;
                    }

                }
                
            }

        }
    }
    int f=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<c[i][j]<<sp;
    //     }
    //     nl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='*' && c[i][j]==0){
                f=1;
                break;

            }
        }
        if(f)break;
    }
     if(f==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }




    return 0;

}


int main()
{
    minato;
    int t;
    cin>>t;
    while(t--){
        solve();
        

    }


    return 0;
}
