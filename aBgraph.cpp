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
#define maxx 1000
//KnightMareVoid
void dfs(int s,int vis[],int n,string a[]);
void DFS(string a[],int n){
    int vis[n]={0};
    vis[0]=1;
   dfs(0,vis,n,a);

}
void dfs(int s,int vis[],int n,string a[]){
    for(int i=0;i<n;i++){
        if(a[s][i]!='*'){
            if(vis[i]==0){
                vis[i]=1;
                dfs(i,vis,n,a);
            }

        }
    }


}



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(m==1){
            int c=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(a[i][j]!='*'){
                        c=1;
                        cout<<"YES"<<endl;
                        cout<<i+1<<sp<<j+1<<endl;
                        break;
                    }
                    
                }
                if(c)break;
            }
            continue;
        }
        int c=0;
        int s1,s2,s3;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!='*'){
                    if(a[i][j]==a[j][i]){
                        c=1;
                        s1=i;
                        s2=j;
                        break;
                    }
                    if(m%2==1){
                        if(a[i][j]!=a[j][i]){
                            c=1;
                            s1=i;
                            s2=j;
                            break;
                        }
                    }
                   
                }
            }
        }
        if(c==0 ){
            for(int i=0;i<n;i++){
                int x=-1;
                int y=-1;
                for(int j=0;j<n;j++){
                    if(a[i][j]=='a')x=j;
                    if(a[i][j]=='b')y=j;
                }
                if(x!=-1 && y!=-1){
                    c=2;
                    s1=i;s2=x;
                    s3=y;
                }
            }
        }
        if(c==1){
            cout<<"YES"<<endl;
            int i;
            s1++;
            s2++;
            cout<<s1<<sp;
            for(int i=0;i<m;i++){
                if(i%2==0)cout<<s2<<sp;
                else cout<<s1<<sp;
            }
            nl;
           
        }
        else if(c==2){
            s1++;
            s2++;
            s3++;
            cout<<"YES"<<endl;
            
            if(m%4==0){
            cout<<s1<<endl;
            for(int i=0;i<m/2;i++){
                if(i%2==0)cout<<s2<<sp;
                else cout<<s1<<sp;
            }
            for(int i=0;i<m/2;i++){
                if(i%2==0)cout<<s3<<sp;
                else cout<<s1<<sp;
            }
            nl;
            }
            else{
                cout<<s2<<sp;
                int k=0;
                int d=0;
                for(int i=0;i<m;i++){
                    if(i%2==0){
                        cout<<s1<<sp;
                    }
                    else{
                        if(k%2==0){
                            cout<<s3<<sp;
                            k++;
                        }
                        else{
                            cout<<s2<<sp;
                            k++;
                        }

                    }

                    

                    
                }
                nl;


            }

        }
        else{
            cout<<"NO"<<endl;
        }


        

    }


    return 0;
}
