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
        int h,m;
        cin>>h>>m;
        string s;
        cin>>s;
        int carry=0;
        int fl=0;
        int ss=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==':'){
                fl=1;
                continue;
            }
            if(s[i]-'0'==(9-carry)){
                s[i]='0';
                carry=1;
            }
            if(s[i]-'0'>5-carry){
                carry=0;
                s[i]='8';

            }
            else if(s[i]-'0'>2-carry){
                carry=0;
              s[i]='5';
            }
           
            

        }
        string p1="";
        string p2="";
        p1+=s[0];
        p1+=s[1];
        p2+=s[3];
        p2+=s[4];
        int l1=stoi(p1);
        if(l1>=h){
            l1=0;
            s[0]='0';
            s[1]='0';
        }
        int l2=stoi(p2);
        if(l2>=m){
            s[3]='0';
            s[4]='0';
            l2=0;

        }
        string t2=(to_string(l1));
        reverse(all(t2));
        int k2=stoi(t2);
        if(l1<=9)k2*=10;
        string t1=(to_string(l2));
        reverse(all(t1));
        int k1=stoi(t1);
        if(l2<=9)k1*=10;
        //cout<<k1<<sp<<k2<<endl;
        if(k1>=h){
            s[3]='0';
            s[4]='0';
        }
        
       






        //cout<<s<<endl;
        //carry=0;
        
        // for(int i=s.size()-1;i>=0;i--){
        //     if(s[i]==':'){
        //         fl=4;
        //         continue;
        //     }
        //     if(fl==0){
        //         if((s[i]-'0')+carry>h/10){
        //             s[i]='0';
        //             s[i-1]='0';
        //             carry=1;
        //         }
        //         else{
        //             carry=0;
        //         }
        //         fl=1;
                
        //     }
        //     else if(fl==1){
        //         if((s[i]-'0')+carry>h%10){
        //             s[i]='0';
        //             carry=1;
        //         }
        //         else{
        //             carry=0;
        //         }
        //         fl=2;
                


        //     }
        //     else if(fl==4){
        //          if((s[i]-'0')+carry>m/10){
        //             s[i]='0';
        //             s[i-1]='0';
        //             carry=1;
        //         }
        //         else{
        //             carry=0;
        //         }
        //         fl=5;

        //     }
        //     else if(fl==5){
        //          if((s[i]-'0')+carry>m%10){
        //             s[i]='0';
        //             cout<<"a"<<endl;
        //             carry=1;
        //         }
        //         else{
        //             carry=0;
        //         }
        //         fl=6;

        //     }
            
        // }

        
        cout<<s<<endl;

    }


    return 0;
}
