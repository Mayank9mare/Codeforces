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
#define endl "\n"

using namespace std;
//KnightMareVoid
long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
vector<int> rabin_karp(string const& s, string const& t) {
    const int p = 31; 
    const int m = 1e9 + 9;
    int S = s.size(), T = t.size();

    vector<long long> p_pow(max(S, T)); 
    p_pow[0] = 1; 
    for (int i = 1; i < (int)p_pow.size(); i++) 
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(T + 1, 0); 
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m; 
    long long h_s = 0; 
    for (int i = 0; i < S; i++) 
        h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m; 

    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; i++) { 
        long long cur_h = (h[i+S] + m - h[i]) % m; 
        if (cur_h == h_s * p_pow[i] % m)
            occurences.push_back(i);
    }
    return occurences;
}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int n=a+b;
        
        string s;
        cin>>s;
        int f=0;
        if(n%2==1){
            int k=n/2;
            if(a%2==1){
                if(s[k]=='0'){
                    a--;
                }
                else if(s[k]=='?'){
                    a--;
                    s[k]='0';
                }
                else{
                    f=1;
                }
            }
            else if(b%2==1){
                 if(s[k]=='1'){
                    b--;
                }
                else if(s[k]=='?'){
                    b--;
                    s[k]='1';
                }
                else{
                    f=1;
                }

            }
        }
        int l=0;
        
        int r=(n-1);
        while(l<r){
            if(s[l]=='0' && s[r]=='0'){
                a-=2;
            }
            else if(s[l]=='1'&&s[r]=='1'){
                b-=2;
            }
             else if(s[l]=='1' && s[r]=='?'){
                b-=2;
                s[r]='1';

            }
             else if(s[r]=='1' && s[l]=='?'){
                b-=2;
                s[l]='1';
            }
             else if(s[l]=='0' && s[r]=='?'){
                 a-=2;
                s[r]='0';

            }
            else if(s[r]=='0' && s[l]=='?'){
                a-=2;
                s[l]='0';
            }

            l++;
            r--;
        }
        l=0;
        r=n-1;
        while(l<r){
            // if(l==r){
            //     if(s[l]=='?'){
            //     if(a>0){
            //         s[l]='0';
            //         a--;
            //     }
            //     else if(b>0){
            //         s[l]='1';
            //         b--;
            //     }
            //     else{
            //         f=1;
            //     }
            //     }
            //     else if(s[l]=='1'){
            //         b--;
            //     }
            //     else if(s[l]=='0'){
            //         a--;
            //     }
            //     l++;
            //     r--;
            //     continue;
            // }
            if(s[l]=='1' && s[r]=='?'){
               

            }
            else if(s[r]=='1' && s[l]=='?'){
                ;
            }
            else if(s[l]=='0' && s[r]=='?'){
               

            }
            else if(s[r]=='0' && s[l]=='?'){
               
            }
            else if(s[r]=='1'&&s[l]=='1'){
               
            
            }
            else if(s[r]=='0' && s[l]=='0'){
             
            }
            else if(s[l]=='?' && s[r]=='?'){
                if(a>=2){
                    s[l]='0';
                    s[r]='0';
                    a-=2;
                }
                else if(b>=2){
                    s[l]='1';
                    s[r]='1';
                    b-=2;
                }
                else{
                    f=1;
                }
            }
            else{
                f=1;
            }
            l++;
            r--;
        }
        if(a!=0 || b!=0){
            f=1;
        }
        if(f){
            cout<<-1<<endl;
        }
        else{
            cout<<s<<endl;
        }
        
        

    }


    return 0;
}
