#pragma GCC optimize("Ofast") 
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
// #define segt
// #define fibbo
// #define fact
// #define divi
// #define dsu

const int mod=1e9+7;

#ifdef fibbo
unordered_map<int,int> Fib;
int fib(int n){
    // f(0)=1, f(1)=1 , f(2)=2   // fibonacci in logn time
    if(n<2) return 1;
    if(Fib.find(n) != Fib.end()) return Fib[n];
    Fib[n] = (fib((n+1) / 2)*fib(n/2) + fib((n-1) / 2)*fib((n-2) / 2)) % mod;
    return Fib[n];
}
#endif

bool isPerfectSquare(long double x){
	if(x>=0){
		int sr=sqrt(x);
		return (sr*sr==x);
	}
	return false;
}

bool isExponentOfTwo(int n){
    while(n%2==0){
        n/=2;
    }
    return n==1;
}

int power(int x, int y){
    int res = 1;
    x = x % mod;
    if (x == 0) return 0; 
    while (y > 0){
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
int inv(int n){
    return power(n,mod-2);
}
 
#ifdef fact 
vector<int> fac;
void factorial(int n){
    fac.clear();
    fac.resize(n+1);
    fac[0]=1;
    for(int i=1;i<=n;i++){
        fac[i]=(fac[i-1]*i)%mod;
    }
}
vector<int> ifac;
void ifactorial(int n){
    ifac.clear();
    ifac.resize(n+1);
    for(int i=0;i<=n;i++){
        ifac[i]=inv(fac[i]);
    }
}
int ncr(int n,int r){
    if(n<r)return 0;
    if(r==0)return 1;
    return (((fac[n]*ifac[r])%mod)*ifac[n-r])%mod;
}
#endif
 
#ifdef divi 
vector<int> prime;
void div(int n){
    prime.clear();
    prime.resize(n+1,0);
    prime[1]=1;
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=1;j*i<=n;j++){
                if(prime[i*j]==0)prime[j*i]=i;
            }
        }
    }
}
#endif

#ifdef segt
int changingFun(int x,int y){
    return (x+y); //res bhi change krna h......
}

const int N = 2e5;  // limit for array size
int n;  // array size
int t[2 * N];
 
void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = changingFun(t[i<<1] , t[i<<1|1]);
}
 
void modify(int p, int value) {  // set value at position p
  for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = changingFun(t[p] , t[p^1]);
}
 
int query(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res = changingFun(res,t[l++]);
    if (r&1) res =changingFun(res,t[--r]);
  }
  return res;
}
#endif

#ifdef dsu
//first->parent, second->rank
vector<pair<int,int>> subsets;

void DSU(int n){
    subsets.clear();
    subsets.resize(n,{0,0});
    for(int i=0;i<n;i++)subsets[i].first=i;
}

int findDSU(int i){
    if (subsets[i].first != i)subsets[i].first = findDSU(subsets[i].first);
    return subsets[i].first;
}

void unionDSU(int x, int y){
	int xroot = findDSU(x);
	int yroot = findDSU(y);
    if (subsets[xroot].second < subsets[yroot].second)
        subsets[xroot].first = yroot;
    else if (subsets[xroot].second > subsets[yroot].second)
        subsets[yroot].first = xroot;
    else {
        subsets[yroot].first = xroot;
        subsets[xroot].second++;
    }
}
#endif

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\
\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\
\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//

// #define googleOrFacebook
#define testcases
// #define tle
vector<int> v;
vector<vector<int>> dp;
int n;
//alice 2, bob 1, draw 0;
int fun(int i, int j){
    if(j==i+1){
        if(v[i]!=v[j])return 2;
        return 0;
    }
    if(dp[i][j]!=-1)return dp[i][j];
    if(((v[i]<v[j] && fun(i+1, j-1)==0) || (fun(i+1, j-1)==2))&&((v[i]<v[i+1] && fun(i+2, j)==0) || (fun(i+2, j)==2))){
        return dp[i][j]=2;
    }
    if(((v[i]>v[j] && fun(i+1, j-1)==0) || (fun(i+1, j-1)==2))&&((v[j]<v[j-1] && fun(i, j-2)==0) || (fun(i, j-2)==2))){
        return dp[i][j]=2;
    }
    if(v[i]==v[j] && fun(i+1, j-1)==0 && (fun(i+2, j)==2 || (fun(i+2, j)==0 && v[i]<=v[i+1]))){
        return dp[i][j]=0;
    }
    if(v[i]==v[i+1] && fun(i+2, j)==0 && (fun(i+1, j-1)==2 || (fun(i+1, j-1)==0 && v[i]<=v[j]))){
        return dp[i][j]=0;
    }
    if(v[i]==v[j] && fun(i+1, j-1)==0 && (fun(i, j-2)==2 || (fun(i, j-2)==0 && v[j]<=v[j-1]))){
        return dp[i][j]=0;
    }
    if(v[j]==v[j-1] && fun(i, j-2)==0 && (fun(i+1, j-1)==2 || (fun(i+1, j-1)==0 && v[i]>=v[j]))){
        return dp[i][j]=0;
    }
    return dp[i][j]=1;
}
void solve(){
    string s; cin>>s;
    n=s.size();
    v.clear();
    for(auto z:s){
        int x=z-'a';
        v.push_back(x);
    }
    dp.clear();
    dp.resize(n+1, vector<int>(n+1, -1));
    if(fun(0, n-1)==2){
        cout<<"Alice";
    }
    else if(fun(0, n-1)==1){
        cout<<"Bob";
    }
    else{
        cout<<"Draw";
    }
}

signed main(){
    #ifdef tle
    time_t start, end;
    time(&start);
    #endif
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    int tt=1,t=1;
    #ifdef testcases
        cin>>tt;
    #endif
    while(t<=tt){
        #ifdef googleOrFacebook
            cout<<"Case #"<<t<<": ";
        #endif
        solve();
        cout<<"\n";
        t++;
    }
    #ifdef tle
    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
    #endif
    return 0;
}