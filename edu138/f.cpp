#pragma GCC optimize("Ofast") 
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long

#ifdef LOCAL
#include "headers/debug.h"
#include "headers/file.h"
#define dbg(...)                                                              \
  cerr << "Line " << __LINE__ << ": " FOR_EACH_MACRO(out, __VA_ARGS__) << "\n"
#else
#define dbg(...) 69
#endif

const int mod=998244353;

// #define googleOrFacebook
// #define testcases
const int N=3e5+5;
vector<int> primes, invalid, dp[2];
int n, m;
void solve(){
    cin>>n>>m;
    dp[0].clear(); dp[0].resize(n+5, -1);
    dp[1].clear(); dp[1].resize(n+5, -1);
    dp[0][1]=m%mod; dp[1][1]=0;
    for(int i=2;i<=n;i++){
        int temp=invalid[i];
        int cnt=m/temp;
        cout<<m-cnt<<endl;
        dp[0][i]=((cnt%mod)*dp[0][i-1])%mod;
        dp[1][i]=((((m-cnt)%mod)*dp[0][i-1])%mod+((m%mod)*dp[1][i-1])%mod)%mod;
    }

    // int ans=(fun(1, 0)*m)%mod;
    dbg(dp[0], dp[1]);
    int ans=0;
    for(int i=1;i<=n;i++){
        (ans+=dp[1][i])%=mod;
    }
    cout<<ans;
    dbg("SEX");
}

signed main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    #ifdef LOCAL
        file();
    #endif
    primes.clear(); primes.resize(N, 1);
    primes[0]=primes[1]=0;
    for(int i=2;i<N;i++){
        if(!primes[i])continue;
        for(int j=2*i;j<N;j+=i)primes[j]=0;
    }
    invalid.clear(); invalid.push_back(0);
    invalid.push_back(1);
    for(int i=2;i<N;i++){
        if(!primes[i])invalid.push_back(invalid.back());
        else{
            if(invalid.back()>1e12)invalid.push_back(invalid.back());
            else{
                invalid.push_back(invalid.back()*i);
            }
        }
    }
    dbg(invalid.back());
    int tt=1,t=1;
    #ifdef testcases
        cin>>tt;
    #endif
    while(t<=tt){
        #ifdef googleOrFacebook
            cout<<"Case #"<<t<<": ";
        #endif
        solve(); cout<<"\n"; t++;
    }
    return 0;
}