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
vector<int> prefix_function(string s){
    int n=s.length();
    vector<int> pre(n,0);
    for(int i=1;i<n;i++){
        int j=pre[i-1];
        while(j>0 && s[i]!=s[j]){
            j=pre[j-1];
        }
        if(s[i]==s[j]){
            j++;
        }
        pre[i]=j;
    }
    return pre ;
}

int check(string x,string y){
    if(x==y)return 1;
    if(x.length()>y.length())return 0;
    string s=x+'#'+y;
    cout<<s<<endl;
    int n=s.size();
    vector<int> z=prefix_function(s);
    int l[n+1],r[n+1]={0};
    int c=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            c++;

        }
        else{
            c=0;
        }
        l[i]=c;
    }
    c=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            c++;

        }
        else{
            c=0;
        }
        r[i]=c;

    }
    for(int i=x.length();i<s.length();i++){
        if(z[i]==x.size()){
            cout<<"yesssss"<<endl;
            int p=i-x.size();
            if(l[p]>=p-x.size() && r[i+1]>=(s.size()-i)){
                return 1;

            }



        }
    }
    return 0;


}
string convert(ll x){
    int f=0;
    string k="";
    for(ll i=32;i>=0;i--){
        if((1<<i)&x){
            f=1;
            k+='1';
        }
        else{
            if(f==0)continue;
            k+='0';
        }
    }
    return k;
}
int solve(){
    ll x,y;
    cin>>x>>y;
    string k1=convert(x);
    string k2=convert(y);
    string k3=k1+'1';
    cout<<k1.size()<<sp<<k2.size()<<endl;
    int f=check(k3,k2);
    if(f){
        cout<<"YES"<<endl;
        return 0;
    }
    while(k1.size() && k1.back()=='0')k1.pop_back();
    f=check(k1,k2);
     if(f){
        cout<<"YES"<<endl;
        return 0;
    }
    reverse(all(k3));
    f=check(k3,k2);
     if(f){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;


    // cout<<convert(x)<<endl;
    // cout<<convert(y)<<endl;
    return 0;

}


int main()
{
    minato;
  
 solve();


    return 0;
}
