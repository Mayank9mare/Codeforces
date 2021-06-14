//              .-""""-.
//                        / j      \
//                       :.d;       ;
//                       $P        :
//            .m._       $$         :
//           dSMMSSSss.__$b.    __ :
//          :MMSMMSSSMMMSS$$b  $P ;
//          SMMMSMMSMMMSSS$$$$     :b
//         dSMMMSMMMMMMSSMM$$b.dP SSb.
//        dSMMMMMMMMMMSSMMPT$$=-. /TSSSS.
//       :SMMMSMMMMMMMSMMP  `b_.'  MMMMSS.
//       SMMMMMSMMMMMMMMM \  .'\    :SMMMSSS.
//      dSMSSMMMSMMMMMMMM  \/\_/; .'SSMMMMSSSm
//     dSMMMMSMMSMMMMMMMM    :.;'" :SSMMMMSSMM;
//   .MMSSSSSMSSMMMMMMMM;    :.;   MMSMMMMSMMM;
//  dMSSMMSSSSSSSMMMMMMM;    ;.;   MMMMMMMSMMM
// :MMMSSSSMMMSSP^TMMMMM     ;.;   MMMMMMMMMMM
// MMMSMMMMSSSSP   `MMMM     ;.;   :MMMMMMMMM;
// "TMMMMMMMMMM      TM;    :`.:    MMMMMMMMM;
//    )MMMMMMM;     _/\    :`.:    :MMMMMMMM
//   dSS$$MMMb.  |._\\   :`.:     MMMMMMMM
//   T$S$$$$$$$$$m;O\\"-;`.:_.-  MMMMMMM;
//  :$$$$$$$$$$$$$$b_l./\ ;`.:    mMMSSMMM;
//  :$$$$$$$$$$$$$$$$$$$./\;`.:  .$MSMMMMMM
//   $$$$$$$$$$$$$$$$$$$$. \`.:.$$$SMSSSMMM;
//   $$$$$$$$$$$$$$$$$$$$$. \.:$$$$SSMMMMMMM
//   :$$$$$$$$$$$$$$$$$$$$$.//.:$$$SSSSSSSMM;
//   :$$$$$$$$$$$$$$$$$$$$$$.`.:$SSSSSSSMMMP
//    $$$$$$$$$;"^J "^$$$$;.`.$P  `SSSMMMM
//    :$$$$$$$$$       :$$$;.`.P'..   TMMM$b
//    :$$$$$$$$$;      $$$$;.`/ c^'   d$$$$S;
//    $$$$S$$$$;      '^^^:_dg:___.$$$$$SSS
//    $$$SS$$$$;            $$$$$$$$$$$$$SSS;
//   :$$SSSS$$$$            : $$$$$$$$$$$$SSS
//   :P"TSSSS$$$            ; $$$$$$$$$$$$SSS;
//   j    `SSSSS$           :  :$$$$$$$$$$$$SS$
//  :       "^S^'           :   $$$$$$$$$$$$S$;
//  ;.____.-;"               "--^$$$$$$$$$$$$P
//  '-....-"  bug                  ""^^T$$$P"





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
        
        int d=INT_MAX;
        int e=INT_MIN;
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a++;
              
            }
            else if(s[i]=='B'){
                b++;

            }
            else if(s[i]=='C'){
                c++;
            }
          
        }
        if(a==b+c){
            c=0;
            int f=-1;
            int fl=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                c++;
              
            }
            else if(s[i]=='B'){
                c--;

            }
            else if(s[i]=='C'){
                c--;
            }
            if(c<0 && f==-1){
                f=0;
            }
            if(c>0 && f==-1){
                f=1;

            }
            if(f==1 && c<0){
                fl=1;
                break;


            }
            if(f==0 && c>0){
                fl=1;
                break;

            }
          
        }
         if(fl){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        }
        else if(b==c+a){

            c=0;
            int f=-1;
            int fl=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                c++;
              
            }
            else if(s[i]=='B'){
                c--;

            }
            else if(s[i]=='C'){
                c++;
            }
            if(c<0&&f==-1){
                f=0;
            }
            if(c>0&&f==-1){
                f=1;

            }
            if(f==1 && c<0){
                fl=1;
                break;


            }
            if(f==0 && c>0){
                fl=1;
                break;

            }
          
        }
         if(fl){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        }
        else if(c==a+b){
            c=0;
            int f=-1;
            int fl=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                c++;
              
            }
            else if(s[i]=='B'){
                c++;

            }
            else if(s[i]=='C'){
                c--;
            }
            if(c<0 && f==-1){
                f=0;
            }
            if(c>0&&f==-1){
                f=1;

            }
            if(f==1 && c<0){
                fl=1;
                break;


            }
            if(f==0 && c>0){
                fl=1;
                break;

            }
          
        }
        if(fl){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        }
        else{
            cout<<"NO"<<endl;
        }
      
        

        

    }


    return 0;
}
