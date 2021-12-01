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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int k=0;
    vector<int> v;

    for(int i=0;i<n-2;i++){
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c'){
            k++;
            v.pb(i);


        }
        

    }
    while(q--){
        int x;
        char c;
        cin>>x>>c;
        x--;
        if(s[x]==c){
            cout<<k<<endl;
            continue;
        }
        if(s[x]=='a'){
            if(x+1<n && x+2<n&&s[x+1]=='b' &&s[x+2]=='c'){
                k--;
                //s[x]=c;
            }
            s[x]=c;
            if(s[x]=='b'){
                if(x-1>=0 && x+1<n && s[x-1]=='a' && s[x+1]=='c'){
                    k++;
                }
            }
            if(s[x]=='c'){
                if(x-2>=0 && x-1>=0 && s[x-2]=='a'&&s[x-1]=='b'){
                    k++;
                }
            }

        }
        else if(s[x]=='b'){
            if(x-1>=0 && x+1<n &&s[x-1]=='a'&&s[x+1]=='c'){
                k--;
                //s[x]=c;
            }
            s[x]=c;
            if(s[x]=='a'){
                if(x+1<n &&x+2<n && s[x+1]=='b' &&s[x+2]=='c'){
                    k++;
                }
            }
              if(s[x]=='c'){
                if(x-2>=0 && x-1>=0 && s[x-2]=='a'&&s[x-1]=='b'){
                    k++;
                }
            }
        }
        else if(s[x]=='c'){
            if(x-1>=0 &&x-2>=0 &&s[x-2]=='a' &&s[x-1]=='b'){
                k--;
            }
            s[x]=c;
            if(s[x]=='a'){
                if(x+1<n &&x+2<n && s[x+1]=='b' &&s[x+2]=='c'){
                    k++;
                }
            }
            if(s[x]=='b'){
                if(x-1>=0 && x+1<n && s[x-1]=='a' && s[x+1]=='c'){
                    k++;
                }
            }

        }
        cout<<k<<endl;
    }
    return 0;

}


int main()
{
    minato;
    solve();


    return 0;
}
