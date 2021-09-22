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
const int N=1e6;
bool prime[N+1];
  
void SieveOfEratosthenes() 
{ 
    
     
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=N; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            
            for (int i=p*p; i<=N; i += p) 
                prime[i] = false; 
        } 
    } 
  
    
    // for (int p=2; p<=N; p++) 
    //    if (prime[p]) 
    //       cout << p << " "; 
} 
int count(int p){
    int c=0;
    while(p){
        c++;
        p/=10;
    }
    return c;
}
int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<endl;
        cout<<s<<endl;
        return 0;

    }
    int a[5]={1,4,6,8,9};
    int b[10]={0};
    set<int> st(a,a+5);
    int ans=-1;
    for(int i=0;i<n;i++){
        int p=s[i]-'0';
        if(st.find(p)!=st.end()){
            ans=p;
            break;

        }
    }
    if(ans!=-1){
        cout<<1<<endl;
        cout<<ans<<endl;
    }
    else{
        string s1="";
        for(int i=0;i<n;i++){
            b[s[i]-'0']++;
            if(b[s[i]-'0']==1){
                s1+=s[i];
            }
            if(b[s[i]-'0']>1){
                ans=10*(s[i]-'0')+(s[i]-'0');
                break;
            }
        }
        if(ans!=-1){
            cout<<2<<endl;
            cout<<ans<<endl;
        }
        else{
            vector<int> v(0);
            int m=s1.size();
            for(int i=0;i<m-1;i++){
                for(int j=i+1;j<m;j++){
                    int p=s1[i]-'0';
                    int p2=s1[j]-'0';
                    p=p*10+p2;
                    v.pb(p);

                }
            }
            for(int i=0;i<m-2;i++){
                for(int j=i+1;j<m;j++){
                    for(int k=j+1;k<m;k++){
                    int p=s1[i]-'0';
                    int p2=s1[j]-'0';
                    int p3=s1[k]-'0';
                    p=p*100+10*p2+p3;
                    v.pb(p);

                    }
                }
            }
             for(int i=0;i<m-2;i++){
                for(int j=i+1;j<m;j++){
                    for(int k=j+1;k<m;k++){
                        for(int k1=k+1;k1<m;k1++){
                    int p=s1[i]-'0';
                    int p2=s1[j]-'0';
                    int p3=s1[k]-'0';
                    int p4=s1[k1]-'0';
                    p=p*100+10*p2+p3;
                    p=p*10+p4;
                    v.pb(p);
                        }

                    }
                }
            }
            for(int i=0;i<v.size();i++){
                if(!prime[v[i]]){
                    ans=v[i];
                    break;
                }
            }
            cout<<count(ans)<<endl;
            cout<<ans<<endl;
            

        }
    }

    return 0;

}


int main()
{
    minato;
    int t;
    cin>>t;
    SieveOfEratosthenes();
    while(t--){
        solve();
        

    }


    return 0;
}
