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



#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define all(c) c.begin(), c.end()
#define fast_io ios_base::sync_with_stdio(0), cin.tie(0)
#define mod 1000000007
int h, m;
map<char, char> ump = {{'0', '0'}, {'1', '1'}, {'2', '5'}, {'5', '2'}, {'8', '8'}};

int modu(ll x){
while(x<0)
  x+=mod;
return (x%mod);
}
ll power(ll x,int y){
    ll p=mod;
    ll res =1;
    x=x%p;
    while(y>0){
        if(y&1){
            res=(res*x)%p;
        }
            y=y>>1;
            x=(x*x)%p;
        }
        return res;

    
}
ll modInverse(ll n){
    ll p=mod;
    return power(n,p-2);
}
ll nCrModFermat(int n,int r){
    ll p=mod;
    if(r==0){
        return 1;
    }
    ll fac[n+1];
    fac[0]=1;
    for(int i=1;i<=n;i++){
        fac[i]=(fac[i-1]*i)%p;
    }
    return(fac[n]*modInverse(fac[r])%p*modInverse(fac[n-r])%p);

}

int to_integer(const string &aa)
{
    int temp = 0;
    for (auto xy : aa)
        temp=(temp*10) + (xy -'0');
    return temp;
}






bool is_valid(string a, string b)
{
    for (auto &ch : a)
        if (ump.find(ch) == ump.end())
            return false;
        else
            ch = ump[ch];

    for (auto &ch : b)
        if (ump.find(ch) == ump.end())
            return false;
        else
            ch = ump[ch];

    reverse(all(a)), reverse(all(b));

    int ax = to_integer(a), bx = to_integer(b);
    return (bx < h && ax < m);
}


int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> h >> m;
        string x;
        cin >> x;
        string a = x.substr(0, 2), b = x.substr(3, 2);

        while (1)
        {
            if (is_valid(a, b))
                break;
            else
            {
                int b_int = (to_integer(b) + 1) % m, a_int;
                if (b_int == 0)
                    a_int = (to_integer(a) + 1) % h;
                else
                    a_int = to_integer(a);

                a = to_string(a_int);
                b = to_string(b_int);

                if (a.length() == 1)
                {
                    a.pb('0');
                    reverse(all(a));
                }

                if (b.length() == 1)
                {
                    b.pb('0');
                    reverse(all(b));
                }
            }
        }


        cout << a << ":" << b << '\n';
    }

    return 0;
}