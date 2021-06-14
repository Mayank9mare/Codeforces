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
#define pb pb
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



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
          string s;
        cin>>s;
        int n=s.size();
        int b[30]={0};
         int c[30]={0};
        for(int i=0;i<s.size();i++){
            b[s[i]-'a']++;
        }
        stack<int> st[n];
        int f=0;
        int nxt[n];
        nxt[n-1]=n;
       


        for(int i=n-2;i>=0;i--){
            if(b[s[i]-'a']>1){
            while( (!st[f].empty()) && (s[st[f].top()]-'a')<=(s[i]-'a')){
                st[f].pop();
            }
            if(st[f].empty()){
                nxt[i]=n;
            }
            else{
                nxt[i]=st[f].top();
            }
            st[f].push(i);
            }
            else{
                f++;
                nxt[i]=-1;
                st[f].push(i);
                
            }
        }

        // int k=n-1;
        // for(int i=n-2;i>=0;i--){
        //     if(b[s[i]-'a']>1){
        //         nxt[i]=k;
        //     }
        //     else{
        //         nxt[i]=-1;
        //         k=i;
        //     }

        // }
        // for(int i=0;i<n;i++){
        //     cout<<nxt[i]<<sp;
        // }
        // nl;
        vector<char> ans;
        for(int i=0;i<n;i++){
            if(b[s[i]-'a']==1){
                ans.pb(s[i]);
            }
            else{
                if(nxt[i]==n){
                    if(c[s[i]-'a']==0){
                    ans.pb(s[i]);
                    c[s[i]-'a']=1;
                    }
                }
                else if((s[nxt[i]]-'a')>(s[i]-'a') ){
                    if(c[s[nxt[i]]-'a']==1){

                    }
                    
                    b[s[i]-'a']--;
                    // for(int j=i+1;j<nxt[i];j++){
                    //     b[s[j]-'a']--;
                    // }

                    // i=nxt[i]-1;



                }

            
                else{
                    if(c[s[i]-'a']==0){
                    c[s[i]-'a']=1;
                    }
                    {
                        b[s[i]-'a']--;

                    }

                }
            }
        }
     
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];


        }
        nl;


        

    }


    return 0;
}
