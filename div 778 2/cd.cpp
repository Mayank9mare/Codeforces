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
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
ll fact(ll n){
    ll ans=1;
    for(int i=1;i<n+1;i++){
        ans=(ans%mod*i%mod)%mod;
    }
    return ans;
}
int bs(ll a[],ll x,ll n){
    int left =0;
    int right =n;
    while(left<right){
        int m=(left+right)/2;
        if(a[m]<=x){
            left=m+1;

        }
        else{
            right=m;
        }
    }
    if(left>0 && a[left-1]==x){
        return 1;
    }
    else
    {
        return 0;
    }
    
}


int main()
{
    ll n,k,pos;
    cin>>n>>k>>pos;
    
    
    
   
    ll ans=1;
    ll g=n-k;
    ll s=k-1;
    ll l=0;
    ll r=n;
    while(l<r){
        ll m=(r+l)/2;
        
        
        if(m>pos){
            ans=(ans*g)%mod;
            g--;
            r=m;
        }
        else if(m<pos){
            ans=(ans*s)%mod;
            s--;
            l=m+1;
        }
        else{
            l=m+1;

        }
    }
    if(l-1==pos){
         ans=(ans%mod*fact(g+s))%mod;
         cout<<ans<<endl;

    }
    else{
        cout<<0<<endl;
    }
   
    
    
    


    return 0;
}
