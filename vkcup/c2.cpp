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
#define int long long
using namespace std;
//KnightMareVoid

int solve(){
       int n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    reverse(a,a+n);
    reverse(b,b+n);
    ll s1=0;
    ll s2=0;
    ll k=(n)-floor(n/4);
    ll p=(n/4);
    

  
    for(int i=0;i<n;i++){
    
        s1+=a[i];
        s2+=a[i];

        //s2+=b[i];
    }
for(int i=1;i<n;i++){
    b[i]+=b[i-1];
}
    // for(int i=0;i<n;i++){
    //     p1.push(a[i]);
    //     p2.push(b[i]);
    // }
    // for(int i=0;i<k;i++){
    //     s2+=p2.top();
    //     p2.pop();
    // }
    // for(int i=0;i<p;i++){
    //     s1-=p1.top();

    //     p1.pop();
    // }
   
   
    
    
    // while(p<mod){
    //     p+=4;
    //     ll rem=n-p;
        
    //     s1+=rem*100;
    //     id=min(n-1,id);
    //    s2=b[rem+id];

       
    //     if(p1.size()){
    //         s1-=p1.top();
    //         p1.pop();
    //     }
    //     else{
    //         s1-=100;
    //     }
    //     if(s1>=s2)break;

    // }
     reverse(a,a+n);
     for(int i=1;i<n;i++){
         a[i]+=a[i-1];
     }
    int n1=n;
    int c=0;
    int l=n;
    int r=1e8;
       while(l<r){
           int m=(l+r)/2;
          // cout<<m<<endl;
           p=(m/4);
           n1=m-p;
           int rem=m-n;
           s1=a[n-1];
           
           s1+=rem*100;
           //cout<<s1<<endl;
           //cout<<rem<<endl;
           int m11=min(n-1,n1);
        
           s2=b[m11];
           if(p>0){
           if(p<=n){
               s1-=a[p-1];
           }
           else{
               s1-=a[n-1];
               s1-=(100*(p-n));
           }
           }
           //s1+=rem*100;
          // cout<<s1<<sp<<s2<<endl;
          //cout<<l<<sp<<r<<endl;

           if(s1>=s2){
               r=m;
           }
           else{
               l=m+1;
           }
           


           

         }
    cout<<l-n<<endl;


    return 0;

}


int32_t main()
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
