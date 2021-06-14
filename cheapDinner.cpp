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
#define print(a) for(int i=0;i<a.size();i++)cout<<a[i]<<sp;
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
  int n1,n2,n3,n4;
  cin>>n1>>n2>>n3>>n4;
  ll a[n1],b[n2],c[n3],d[n4];
  for(int i=0;i<n1;i++)cin>>a[i];
  for(int i=0;i<n2;i++)cin>>b[i];
  for(int i=0;i<n3;i++)cin>>c[i];
  for(int i=0;i<n4;i++)cin>>d[i];
  set<pll> s1,s2,s3;
  int m1,m2,m3;
  cin>>m1;
  for(int i=0;i<m1;i++){
      pll x;
      cin>>x.first>>x.second;
      //cout<<x.first<<x.second;
      s1.insert(mk(a[x.first-1],b[x.second-1]));
      

  }
    cin>>m2;
  for(int i=0;i<m2;i++){
      pll x;
      cin>>x.first>>x.second;
      s2.insert(mk(b[x.first-1],c[x.second-1]));
      

  }
    cin>>m3;
  for(int i=0;i<m3;i++){
      pll x;
      cin>>x.first>>x.second;
      s3.insert(mk(c[x.first-1],d[x.second-1]));
      

  }
  sort(a,a+n1);
  sort(b,b+n2);
  sort(c,c+n3);
  sort(d,d+n4);
  //for(int i=0;i<n2;i++)cout<<b[i]<<sp;

  vector<pll> v1;
  for(int i=0;i<n1;i++){
      int j=0;
      while(j<n2){
          if(s1.find(mk(a[i],b[j]))==s1.end()){
              v1.pb(mk(a[i],b[j]));
              cout<<a[i]<<sp<<b[j]<<endl;
              break;
          }
          j++;
      }
  }
  vector<pair<pll,ll>> v2;
  for(int  i=0;i<v1.size();i++){
      int j=0;
      while(j<n3){
          if(s2.find(mk(v1[i].second,c[j]))==s2.end()){
              v2.pb(mk(v1[i],c[j]));
              cout<<v1[i].first<<sp<<v1[i].second<<sp<<c[j]<<endl;
              break;
          }
          j++;
      }
  }
  vector<pair<pair<pll,ll>,ll>> v3;
  for(int i=0;i<v2.size();i++){
      int j=0;
      while(j<n4){
          if(s3.find(mk(v2[i].second,d[j]))==s2.end()){
              v3.pb(mk(v2[i],d[j]));
              cout<<v2[i].first.first<<sp<<v2[i].first.second<<sp<<v2[i].second<<sp<<d[j]<<endl;
              break;
          }
          j++;
      }
  }
  ll um=INT_MAX;
  for(int i=0;i<v3.size();i++){
      ll sum=v3[i].first.first.first+v3[i].first.first.second+v3[i].first.second+v3[i].second;
      um=min(um,sum);


  }
  cout<<um<<endl;


    return 0;
}
