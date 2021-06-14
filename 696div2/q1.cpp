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
//KnightMare


// Sample code to perform I/O:


int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	map<int,int> m;
	map<int,int> m1;
	int c=0;
	for(int i=0;i<n;i++){
		m[a[i]]=0;
		m1[a[i]]=0;
	}
	for(int i=0;i<n;i++){
		m[a[i]]++;
		if(m[a[i]]==1){
			c++;
		}

	}
	int d=0;
	ll ans=0;
	int j=0;
	for(int i=0;i<n;i++){

		m1[a[i]]++;
		if(m1[a[i]]==1){
			d++;
		}
        if(d==c){
		while(d==c){
			ans+=(n-i);
			m1[a[j]]--;
            
			if(m1[a[j]]==0){
				d--;
			}
            j++;

		}
        }
		
		
	}
	cout<<ans<<endl;

    

}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here

