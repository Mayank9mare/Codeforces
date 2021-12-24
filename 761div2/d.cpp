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
map<pair<pll,ll>,ll> m;
int query(int a,int b,int c){
    if(a>b){
        swap(a,b);
    }
    if(a>c){
        swap(a,c);
    }
    if(b>c){
        swap(b,c);
    }
    if(m.find({{a,b},c})!=m.end()){
       return m[{{a,b},c}];
    }
    cout<<"?"<<sp<<a<<sp<<b<<sp<<c<<endl;
    int x;
    cin>>x;
    m[{{a,b},c}]=x;

    return x;
}
vector<int>  forsix(vector<int> &a){
    cout<<a.size()<<endl;
    int x;
    int x1=a[0];
    int x2=a[1];
   // int v[6]={0};
    int f1=0;
    int f2=0;
    vector<int> v1,v2;
    for(int i=2;i<a.size();i++){
        x=query(x1,x2,a[i]);
        if(x==0){//bo
            f2=1;
        }
        if(x==1){
            f1=1;
        }
        if(f1==1 && f2==1)break;

    }
    if(f2==0){
        v1.pb(x1);
        v1.pb(x2);
        //v[x1]=1;
        //v[x2]=1;
        x1=a[2];
        x2=a[3];
        f1=0;
        f2=0;
        for(int i=4;i<a.size();i++){
        x=query(x1,x2,a[i]);
        if(x==0){//bo
            f2=1;
        }
        if(x==1){
            f1=1;
        }
        if(f1==1 && f2==1)break;
            
        }
        if(f2==0){
            v1.pb(x1);
            v1.pb(x2);
            v2.pb(a[4]);
            v2.pb(a[5]);
        }
        else if(f1==0){
            v2.pb(x1);
            v2.pb(x2);
            x1=v1.back();
            x2=v2.back();
            for(int i=4;i<6;i++){
                int y=query(x1,x2,a[i]);
                if(y==0){
                    v2.pb(a[i]);
                }
                else{
                    v1.pb(a[i]);
                }

            }



        }
        else{
        for(int i=4;i<a.size();i++){
            x=query(x1,x2,a[i]);
            if(x==1){
                //v[a[i]]=1;
                v1.pb(a[i]);

            }
            else{
                //v[a[i]]=2;
                v2.pb(a[i]);
            }
        }
        x1=v1.back();
        x2=v2.back();
        x=query(a[3],x1,x2);
        if(x==1){
            //v[a[3]]=1;
            v1.pb(a[3]);
        }
        else{
            //v[a[3]]=2;
            v2.pb(a[3]);
        }
        x=query(a[2],x1,x2);
        if(x==1){
            //v[a[2]]=1;
            v1.pb(a[2]);
        }
        else{
            //v[a[2]]=2;
            v2.pb(a[2]);
        }
            

        }


    }
    else if(f1==0){
        v2.pb(x1);
        v2.pb(x2);
        //v[x1]=2;
        //v[x2]=2;
        x1=a[2];
        x2=a[3];
        f1=0;
        f2=0;
        for(int i=4;i<a.size();i++){
        x=query(x1,x2,a[i]);
        if(x==0){//bo
            f2=1;
        }
        if(x==1){
            f1=1;
        }
        if(f1==1 && f2==1)break;
            
        }
       if(f2==0){
           v1.pb(x1);
           v1.pb(x2);
           x1=v1.back();
           x2=v2.back();
           for(int i=4;i<6;i++){
               int y=query(x1,x2,a[i]);
                if(y==0){
                    v2.pb(a[i]);
                }
                else{
                    v1.pb(a[i]);
                }

           }



       } 
       else if(f1==0){
           v2.pb(x1);
           v2.pb(x2);
           v1.pb(a[4]);
           v1.pb(a[5]);
       }
       else{
        for(int i=4;i<a.size();i++){
            x=query(x1,x2,a[i]);
            if(x==1){
                //v[a[i]]=1;
                v1.pb(a[i]);

            }
            else{
                //v[a[i]]=2;
                v2.pb(a[i]);
            }
        }
        x1=v1.back();
        x2=v2.back();
        x=query(a[3],x1,x2);
        if(x==1){
           // v[a[3]]=1;
            v1.pb(a[3]);
        }
        else{
            //v[a[3]]=2;
            v2.pb(a[3]);
        }
        x=query(a[2],x1,x2);
        if(x==1){
           // v[a[2]]=1;
            v1.pb(a[2]);
        }
        else{
            //v[a[2]]=2;
            v2.pb(a[2]);
        }

       }


    }
    else{
        for(int i=2;i<a.size();i++){
            x=query(x1,x2,a[i]);
            if(x==1){
               // v[a[i]]=1;
                v1.pb(a[i]);

            }
            else{
                //v[a[i]]=2;
                v2.pb(a[i]);
            }
        }
        x1=v1.back();
        x2=v2.back();
        x=query(a[0],x1,x2);
        if(x==1){
            //v[a[0]]=1;
            v1.pb(a[0]);
        }
        else{
            //v[a[0]]=2;
            v2.pb(a[0]);
        }
        x=query(a[1],x1,x2);
        if(x==1){
           // v[a[1]]=1;
            v1.pb(a[1]);
        }
        else{
            //v[a[1]]=2;
            v2.pb(a[1]);
        }

    }
  return v2;

  

}
int solve(){
    int n;
    cin>>n;
    int a=1;
    int b=2;

    //ll v[n+1]={0};
    int f1=0,f2=0;
    vector<int> y;
    vector<int> a1;
    for(int i=1;i<n;i+=3){
        int x=query(i,i+1,i+2);
        if(x==1 && f1==0){
            f1=1;
            a1.pb(i);
            a1.pb(i+1);
            a1.pb(i+2);
        }
        if(x==0 && f2==0){
            f2=1;
            a1.pb(i);
            a1.pb(i+1);
            a1.pb(i+2);

        }
        if(f1==1 && f2==1)break;
       // y.pb(x);
    }
   vector<int> v=forsix(a1);
   for(int x:v){
       cout<<x<<sp;
   }
   nl;
   


    return 0;

}


int main()
{
    minato;
    cout.flush();
  solve();


    return 0;
}
