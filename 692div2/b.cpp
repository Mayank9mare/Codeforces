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
ll countDigit(long long n)
{
    ll count = 0;
    while (n != 0) 
    {
        n = n / 10;
        ++count;
    }
    return count;
}
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int check(ll n){
    int c=0;
    ll n1=n;
     while (n != 0) 
    {   
        int a=n%10;
        if(a!=0){
            if(n1%a!=0){
                c=1;
            }
        }
        
        
        n = n / 10;
        
    }
    return c;

}



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n1;
        cin>>n1;
        ll n=n1;
        ll a=countDigit(n);
        vector<int> v;
        ll count = 0;
        while(check(n1)){
            n1++;
        }
        cout<<n1<<endl;
  
    

 



    }


    return 0;
}
