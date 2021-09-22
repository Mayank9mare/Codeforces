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
//#define mod 1000000007//998244353
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
const int mod=1003;

int cnttrue(string A) {
  int n=A.size();
  //cout<<n<<endl;
  int Tot[n+1][n+1];
  int T[n+1][n+1];
  int F[n+1][n+1];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      T[i][j]=0;
      F[i][j]=0;
      Tot[i][j]=0;
    }
  }
  for(int i=0;i<n;i++){
    T[i][i]=(A[i]=='T')?1:0;
    F[i][i]=(A[i]=='F')?1:0;
  Tot[i][i]=T[i][i]+F[i][i];

  }
  for(int l=1;l<n;l++){
    for(int i=0;i<n-l;i++){
      int j=i+l;
      if(A[i]!='T' && A[i]!='F')continue;
      if(A[j]!='F'&& A[j]!='T')continue;
      for(int k=i;k<j;k++){
        if(A[k]=='&'){
          T[i][j]+=(T[i][k-1]*T[k+1][j])%mod;
          F[i][j]+=((Tot[i][k-1]*Tot[k+1][j])%mod-(T[i][k-1]*T[k+1][j])%mod +mod)%mod;
        }
        else if(A[k]=='|'){
          T[i][j]+=((Tot[i][k-1]*Tot[k+1][j])%mod-(F[i][k-1]*F[k+1][j])%mod +mod)%mod;
          F[i][j]+=(F[i][k-1]*F[k+1][j])%mod;
        }
        else if(A[k]=='^'){
          T[i][j]+=((T[i][k-1]*F[k+1][j])%mod+(T[k+1][j]*F[i][k-1])%mod)%mod;
          F[i][j]+=((T[i][k-1]*T[k+1][j])%mod+(F[i][k-1]*F[k+1][j])%mod)%mod;
        }
      
        T[i][j]%=mod;
        F[i][j]%=mod;

       
        
      }
      
       Tot[i][j]+=(T[i][j]+F[i][j])%mod;
        Tot[i][j]%=mod;
    }
  }
  return T[0][n-1];



}
int solve(){
    string s;
    cin>>s;
    cout<<cnttrue(s)<<endl;

    return 0;

}


int main()
{
    minato;
  solve();

    return 0;
}
