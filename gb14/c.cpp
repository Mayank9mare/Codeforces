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
        ll n,m,x;
        cin>>n>>m>>x;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int b=0;
        int a1;
        int k=-1;
        int f=0;
        ll p1[n];
        priority_queue<pll,vector<pll>,greater<pll>> pq;
        for(int i=0;i<m;i++){
            pq.push({0,i});
        }
        ll maxa=0;
        ll mina=INT_MAX;
        for(int i=0;i<n;i++){
            pll p=pq.top();
            pq.pop();
            p1[i]=p.second;
            pq.push({p.first+a[i],p.second});




        }
        ll s[m]={0};
        for(int i=0;i<n;i++){
            s[p1[i]]+=a[i];
            // maxa=max(s[p1[i]],maxa);
            // mina=min(s[p1[i]],mina);
          

        }
        for(int i=0;i<m;i++){
            maxa=max(s[i],maxa);
            mina=min(s[i],mina);
        }
        if(maxa-mina>x){
            f=1;
        }
        if(f==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<p1[i]+1<<sp;
        }
        nl;

        // for(int i=0;i<n;i++){
        //     if((n-i)%m==0){
        //         k=(n-i)/m;
        //         b=i;
        //         if(m-b<0){
        //             continue;
        //         }
        //         f=1;
        //         break;
        //     }

        // }
        // if(f==0){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        //     a1=m-b;
        //     int p[n];
        //     int i=0;
        //     for(int j=0;j<a1;j++){
        //         int c=0;
        //         while(c!=k){
        //             p[i]=j;
        //             c++;
        //             i++;
        //         }
                

        //     }
        //     for(int j=0;j<b;j++){
        //         int c=0;
        //         while(c!=k+1){
        //             p[i]=a1+j;
        //             i++;
        //             c++;
        //         }
        //     }
        //     for(int i=0;i<n;i++){
        //         cout<<p[i]+1<<sp;
        //     }
        //     nl;


           

        //}

        

    }


    return 0;
}
