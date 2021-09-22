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
 vector<vector<vector<int>>> v(0);
//KnightMareVoid
int cal(string &s,string &k){
    
    int n=s.size();
    vector<vector<int>> v1(n);
     string p1="";
    string p2="";
    string p3="";
        
    for(int i=0;i<n;i++){
        if(i%3==0){
            p1+=k[0];
            p2+=k[1];
            p3+=k[2];
        }
        else if(i%3==1){
            p1+=k[1];
            p2+=k[2];
            p3+=k[0];
        }
        else{
            p1+=k[2];
            p2+=k[0];
            p3+=k[1];
        }

    }
    int a1[n]={0};
    int a2[n]={0};
    int a3[n]={0};
    for(int i=0;i<n;i++){
        if(p1[i]!=s[i]){
            a1[i]=1;

        }
        if(p2[i]!=s[i]){
            a2[i]=1;
        }
        if(p3[i]!=s[i]){
            a3[i]=1;
        }
    }
    v1[0]={a1[0],a2[0],a3[0]};
    for(int i=1;i<n;i++){
        a1[i]+=a1[i-1];
        a2[i]+=a2[i-1];
        a3[i]+=a3[i-1];
        v1[i]={a1[i],a2[i],a3[i]};
        //cout<<a1[i]<<sp;
    }
    v.pb(v1);
    return 0;

}
int solve(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
  
    string q1="abc";
    string q2="acb";
    string q3="bac";
    string q4="bca";
    string q5="cab";
    string q6="cba";
    // vector<vector<int>> v1;
    // vector<vector<int>> v2;
    // vector<vector<int>> v3;
    // vector<vector<int>> v4;
    // vector<vector<int>> v5;
    // vector<vector<int>> v6;
   
    (cal(s,q1));
    (cal(s,q2));
    (cal(s,q3));
    (cal(s,q4));
    (cal(s,q5));
    (cal(s,q6));
    
    // v.pb(v1);
    // v.pb(v2);
    // v.pb(v3);
    // v.pb(v4);
    // v.pb(v5);
    // v.pb(v6);
    
   
   // nl;

    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        ll ans=INT_MAX;
        for(int i=0;i<6;i++){
            //vector<vector<int>> x=v[i];
            ll k1=v[i][r][0];
            ll k2=v[i][r][1];
            ll k3=v[i][r][2];
            if(l){
                k1-=v[i][l-1][0];
                k2-=v[i][l-1][1];
                k3-=v[i][l-1][2];
                
            }
            //cout<<k1<<sp<<k2<<sp<<k3<<endl;
            ans=min({ans,k1,k2,k3});
        }
        cout<<ans<<endl;

       
        




    }
    return 0;

}


int main()
{
    minato;
    solve();


    return 0;
}
