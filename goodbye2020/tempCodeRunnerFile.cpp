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
int fi[100000];
int dp[1001][1001]; // 2D matrix
bool isPal(string s, int i, int j)
{
    // Base condition
    if (i > j)
        return 1;
 
    // check if the recursive tree
    // for given i, j
    // has already been executed
    if (dp[i][j] != -1)
        return dp[i][j];
 
    // If first and last characters of 
    // substring are unequal
    if (s[i] != s[j])
        return dp[i][j] = 0;
 
    // memoization
    return dp[i][j] = isPal(s, i + 1, j - 1); 
}
 
int countSubstrings(string s)
{
    memset(dp, -1, sizeof(dp));
    int n = s.length();
    int count = 0;
 
    // 2 for loops are required to check for
    // all the palindromes in the string.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            // Increment count for every palindrome
            if (isPal(s, i, j)){
                count++;
                fi[i]+=1;
                fi[j+1]-=1;
            }
        }
    }
    // return total palindromic substrings
    return count;
}



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        memset(fi,0,sizeof(fi));
        int n=s.size();
        int b[n+1]={0};
        
        
        int c=countSubstrings(s);
        b[0]=fi[0];
        //cout<<b[0]<<" ";
        for(int i=1;i<n;i++){
            b[i]=b[i-1]+fi[i];
            //cout<<b[i]<<" ";

        }
        int d=0;
        vector<pair<int,int>> v;
     memset(dp, -1, sizeof(dp));
  
    int count = 0;
 
    // 2 for loops are required to check for
    // all the palindromes in the string.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            // Increment count for every palindrome
            if (isPal(s, i, j)){
                
                v.pb(mk(i,j));
                
            }
        }
    }
    int k=v.size();
    if(k==0){
        cout<<0<<"\n";
    }
    else{
        int ans =k/n;
        ans++;
        cout<<ans<<"\n";
    }

        
      
      
        // sort(b,b+n);
        // int d=0;
        // int l=n-1;

        //cout<<b[n-1]<<b[n-2]<<endl;
        

        // while(c>0){
        //     c=c-b[l];
        //     d++;
        //     l--;



        // }
         //cout<<d<<endl;
        
        // for(int i=2;i<=n;i++){
        //     for(int j=0;j<n;j++){

        //     }
        // }


    }


    return 0;
}
