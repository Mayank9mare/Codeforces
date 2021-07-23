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
//KnightMareVoid

int solve(){
    string s;
    cin>>s;
    int n=s.size();
    int p[26]={0};
    for(int i=0;i<n;i++){
        p[s[i]-'a']++;
    }
    int f=0;
    string s1="";
    for(int i=0;i<26;i++){
        if(p[i]==1){
            p[i]--;
            f=1;
            s1+=char(int('a')+i);
            break;
        }
    }
    //cout<<f<<endl;
    if(f==1){
        for(int i=1;i<n;i++){
            for(int j=0;j<26;j++){
                if(p[j]>0){
                    p[j]--;
                    s1+=char(int('a')+j);
                    break;
                }
            }
        }
        //cout<<s1<<endl;
    }
    else{
          for(int i=0;i<26;i++){
        if(p[i]>0){
            p[i]--;
           // f=1;
            s1+=char(int('a')+i);
            break;
        }
    }
        //cout<<s1<<endl;
        int k=p[s1[0]-'a'];
        int rem=(n-2)/2;
        rem+=1;
        //cout<<rem<<sp<<k<<endl;
        if(k<=rem){
            //cout<<1<<endl;
            int g=-1;
            for(int i=1;i<n;i++){
                if(g==-1){
                for(int j=0;j<26;j++){
                    if(p[j]>0){
                        p[j]--;
                        s1+=char(int('a')+j);
                        if(s1[0]==s1[i]){
                            //cout<<1<<endl;
                            g=s1[0]-'a';

                        }
                        break;
                    }
                }
                }
                else{
                    for(int j=0;j<26;j++){
                        if(j==g)continue;
                        if(p[j]>0){
                        p[j]--;
                        s1+=char(int('a')+j);
                        g=-1;
                     
                        break;
                    }

                    }
                    
                }
                //cout<<g<<endl;
            }

        }
        else{
            //cout<<s1<<endl;
            set<int> st;
            st.insert(s1[0]-'a');
            vector<int> v;

            for(int i=0;i<26;i++){
                if(p[i]>0){
                    if(st.find(i)==st.end()){
                        v.pb(i);
                        st.insert(i);
                    }
                    if(v.size()==2)break;
                }

            }
            //cout<<v.size()<<endl;
           // cout<<p[s1[0]-'a']<<endl;
            if(v.size()==0){
                while(p[s1[0]-'a']>0){
                    //cout<<s1<<endl;
                    s1+=s1[0];
                    p[s1[0]-'a']--;
                }
            }
            
            else if(v.size()==1){
                while(p[v[0]]>0){
                    s1+=char(int('a')+v[0]);
                    p[v[0]]--;
                }
                while(p[s1[0]-'a']>0){
                    p[s1[0]-'a']--;
                    s1+=s1[0];
                }
            }
            else{
                s1+=char(int('a')+v[0]);
                p[v[0]]--;
                while(p[s1[0]-'a']>0){
                    p[s1[0]-'a']--;
                    s1+=s1[0];
                }
                s1+=char(int('a')+v[1]);
                p[v[1]]--;

                for(int i=0;i<26;i++){
                    while(p[i]>0){
                        p[i]--;
                        s1+=char(int('a')+i);
                    }
                }


            }


        }
    }
    cout<<s1<<endl;
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
