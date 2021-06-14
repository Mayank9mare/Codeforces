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
        int n,m;
        cin>>n>>m;
        ll a[n];
        ll b[m];
        set<ll> s1,s2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            s2.insert(b[i]);
        }
        vector<ll> v1,v2,v3,v4;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                v1.pb(-a[i]);
            }
            else{
                v3.pb(a[i]);
            }
        }
        sort(all(v1));
        for(int i=0;i<m;i++){
            //cout<<b[i]<<endl;
            if(b[i]<0){
                v2.pb(-b[i]);
            }
            else{
                v4.pb(b[i]);
            }
        }
        sort(all(v2));
        sort(all(v3));
        sort(all(v4));
        set<ll> s3;
        int c1=0,c2=0;
           for(int i=0;i<n;i++){
            //cout<<a[i]<<endl;
            if(a[i]>0){
                if(s2.find(a[i])!=s2.end()){
                    s3.insert(a[i]);
                    c1++;
                }
            }
            else if(a[i]<0){
                if(s2.find(a[i])!=s2.end()){
                    s3.insert(a[i]);
                    c2++;
                    //cout<<a[i]<<sp<<c2<<endl;
                }
            }


        }
        
        //cout<<c1<<sp<<c2<<endl;
        ll ans=0;
        ll r,l=0;
       
        for(int i=0;i<v4.size()&&v3.size()>0;i++){
            r=v4[i];
            if(s3.find(r)!=s3.end()){
                c1--;
            }
        
           
            int k1=lower_bound(v3.begin(),v3.end(),r)-v3.begin();
            int k2=lower_bound(v3.begin(),v3.end(),l)-v3.begin();
            if(k1!=v3.size()&&v3[k1]==r){
                k1++;
            }
            
            ll load=(k1-k2);
           
        
             //cout<<load<<endl;
            int k3=lower_bound(v4.begin(),v4.end(),r-load+1)-v4.begin();
            ll laid=min(i-k3*1ll+1,load);
             ans=max(ans,c1+laid);
              
            //cout<<load<<sp<<laid<<endl;           
            
            //cout<<ans<<endl;




        }
        

        ll ans2=0;
        l=0;
      
        
            for(int i=0;i<v2.size() && v1.size()>0;i++){
                r=v2[i];
                
                //cout<<c2<<endl;
                ll rr=-r;
            if(s3.find(rr)!=s3.end()){
                c2--;
            }
        
           
            int k1=lower_bound(v1.begin(),v1.end(),r)-v1.begin();
            int k2=lower_bound(v1.begin(),v1.end(),l)-v1.begin();
            if(k1!=v1.size()&&v1[k1]==r){
                k1++;
            }
            
            ll load=(k1-k2);
        
           
             
            int k3=lower_bound(v2.begin(),v2.end(),r-load+1)-v2.begin();
            ll laid=min(i-k3*1ll+1,load);
            //cout<<c2<<sp<<laid<<endl;
             ans2=max(ans2,c2+laid);
            
            }
        
        // cout<<ans<<sp<<ans2<<endl;
         cout<<ans2+ans<<"\n";

       

        

    }
    


    return 0;
}
