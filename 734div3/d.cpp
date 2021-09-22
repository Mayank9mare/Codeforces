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
int mat[101][101];
int mp[101][101];
//KnightMareVoid
int hor(int n,int m,int k,int k2){
    mem0(mat);
    mem0(mp);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat[i][j]=0;
        }
    }
    int c=0;
    
           for(int j=0;j+1<m;j+=2){
            for(int i=0;i<n;i++){
                if(k==0)break;
                int p=1;
                set<int> s;
                if(i-1>=0){
                    s.insert(mat[i-1][j]);
                    s.insert(mat[i-1][j+1]);

                }
                if(i+1<n){
                     s.insert(mat[i+1][j]);
                    s.insert(mat[i+1][j+1]);

                }
                if(j-1>=0){
                    s.insert(mat[i][j-1]);
                }
                if(j+2<m){
                    s.insert(mat[i][j+2]);
                }
                while(s.find(p)!=s.end()){
                    p++;
                }

                mat[i][j]=p;
                mat[i][j+1]=p;
                k--;
                if(k==0)break;
            }
            if(k==0)break;

        }
        for(int j=0;j<m;j++){
            int c1=0;
            for(int i=0;i<n;i++){
                if(mat[i][j]==0){
                    c1++;
                }
            }
            c+=c1/2;
        }
        for(int j=0;j<m;j++){
            int i=0;
            while(mat[i][j]!=0&& i<n){
                i++;
            }
            for(i;i+1<n;i+=2){
                if(mat[i][j]==0){
                int p=1;
                set<int> s;
                if(j-1>=0){
                    s.insert(mat[i][j-1]);
                    s.insert(mat[i+1][j-1]);

                }
                if(j+1<m){
                     s.insert(mat[i][j+1]);
                    s.insert(mat[i+1][j+1]);

                }
                if(i-1>=0){
                    s.insert(mat[i-1][j]);
                }
                if(i+2<n){
                    s.insert(mat[i+2][j]);
                }
                while(s.find(p)!=s.end()){
                    p++;
                }
                mat[i][j]=p;
                mat[i+1][j]=p;
                }


            }
        }
        
        if(k==0 && c==k2)return 1;
        return 0;

}
int solve(){
    int n,m,k;
    cin>>n>>m>>k;
    ll p=(m*n)/2;
    int k2=p-k;
    int a[n]={0};
   


    int f=0;
    if(hor(n,m,k,k2))f=1;
    if(f==0){
        if(hor(m,n,k2,k))f=2;
    }

   
    if(f>0){
        cout<<"YES"<<endl;
        if(f==1){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                      cout<<char(int('a')+mat[i][j]-1);
                    
                    
                }
                nl;
            }
            

        }
        else{
            swap(n,m);
            
              for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    mp[j][i]=mat[i][j];
                   
                }
                
            }
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout<<char(int('a')+mp[i][j]-1);
                }
                nl;
            }

            
        }
        

    }
    else{
        cout<<"NO"<<endl;
    }
   
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
