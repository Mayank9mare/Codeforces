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
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))

using namespace std;
//KnightMareVoid
string s;
pll find(int l,int r,int turn){
    if(l==r){
        if(turn==1){
            if(s[l]=='I'){
                return {1,1};

            }
            else{
                return {2,0};
            }
        }
        else{
            if(s[l]=='O'){
                return {1,0};

            }
            else{
                return {2,1};
            }
        }
    }
    if(turn==1){
        if(s[l]=='I' && s[r]=='I'){
            pll k1=find(l+1,r,0);
            pll k2=find(l,r-1,0);
            if(k1.second==1 && k2.second==1){
               if(k1.first>k2.first)return k1;
               else return k2;
            }
            else if(k1.second==1){
                return k1;
            }
            else if(k2.second==1){
                return k2;
            }
            else{
                if(k1.first<k1.second)return k1;
                else return k2;
            }

        }
        else if(s[l]=='I'){
            return find(l+1,r,0);
        }
        else if(s[r]=='I'){
            return find(l,r-1,0);
        }
        else{
            return {r-l+2,0};
        }
        
    }
    else{
        if(s[l]=='O' && s[r]=='O'){
            pll k1=find(l+1,r,1);
            pll k2=find(l,r-1,1);
            if(k1.second==0 && k2.second==0){
               if(k1.first>k2.first)return k1;
               else return k2;
            }
            else if(k1.second==0){
                return k1;
            }
            else if(k2.second==0){
                return k2;
            }
            else{
                if(k1.first<k1.second)return k1;
                else return k2;
            }

        }
        else if(s[l]=='O'){
            return find(l+1,r,1);
        }
        else if(s[r]=='O'){
            return find(l,r-1,1);
        }
        else{
            return {r-l+2,1};
        }

    }

}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    int cs=0;
    while(t--){
        cs++;
        cout<<"Case #"<<sp<<cs<<": ";
        //string s;
        cin>>s;
        int n=s.size();
        int l=0;
        int r=n-1;
        pll p=find(l,r,1);
        if(p.second==0){
            cout<<"O"<<sp;
            
        }
        else{
            cout<<"I"<<sp;
        }
        cout<<p.first<<endl;
        

    }


    return 0;
}
