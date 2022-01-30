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
int cur;
int b[200005];
int check(int a[],int n,int m){
    //b[n-1]=a[n-1]-(3*m);

    vector<int> v(n,0);
    for(int i=n-1;i>=2;i--){
        //cout<<v[i]<<sp;
        v[i]+=a[i];
        if(v[i]<m)return 0;
        int r=(v[i]-m)/3;
        if(3*r>a[i]){
            r=(a[i]/3);
        }
        v[i]-=(3*r);
        v[i-1]+=r;
        v[i-2]+=(2*r);
        //cout<<v[i]<<endl;
    }
    for(int i=0;i<2;i++){
        v[i]+=a[i];
    }

    int mina=INT_MAX;
    for(int i=0;i<n;i++){
        //cout<<v[i]<<sp;
        mina=min(v[i],mina);
    }
    return (mina>=m);
    return 1;
   
    

}
int check2(int a[],int n,int m){
    //b[n-1]=a[n-1]-(3*m);

    vector<int> v(n,0);
    for(int i=n-1;i>=2;i--){
        v[i]+=a[i];
        //cout<<v[i]<<sp;

        //if(v[i]<m)return 0;
        int r=(v[i]-m)/3;
        if(3*r>a[i]){
            r=(a[i]/3);
        }
        v[i]-=(3*r);
        v[i-1]+=r;
        v[i-2]+=(2*r);
        //cout<<v[i]<<endl;

    }
    for(int i=0;i<2;i++){
        v[i]+=a[i];
    }
    int mina=INT_MAX;
    for(int i=0;i<n;i++){
        mina=min(v[i],mina);
    }
    return mina;

   
    

}

int solve(){
    
    def(a,n);
    int p=a[n-1];
    int r=*max_element(a,a+n)+1;
    int l=*min_element(a,a+n);
    while(l+1<r){
        int m=(l+r)/2;
        if(check(a,n,m)){
            l=m;

        }
        else{
            r=m;
        }

    }
    cout<<l<<endl;
    // cout<<check2(a,n,l)<<endl;
    return 0;

}


signed main()
{
    minato;
    w(t)
    solve();


    return 0;
}
