
//import io
//import os
//input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

//fflush(stdout);

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll loops")

#include <bits/stdc++.h>
using namespace std;

const long long int MOD = 998244353;
const long long int INF = 1e18;
#define pb push_back
#define ff first
#define ss second
#define f(i, a, b) for (long long int i = a; i < b; i++)
#define ll long long int
#define srt(a) sort(a.begin(), a.end())
#define srtc(a, c) sort(a.begin(), a.end(), c);
#define fi(i, a, b) for (long long int i = a; i >= b; i--)
#define fsum(i, a, b, sum) for (long long int i = a; i < b; i+=sum)
#define vectori vector<long long int>
#define vectorc vector<char>
#define ma(v) max_element(v.begin(), v.end())
#define mi(v) min_element(v.begin(), v.end())
#define rev(s) reverse(s.begin(), s.end())
#define up(v, x) upper_bound(v.begin(), v.end(), x)
#define lo(v, x) lower_bound(v.begin(), v.end(), x)
#define endl "\n"

//////////////////////////////////////////////////////////

void solve()
{
    ll tc;
    cin>>tc;
    while(tc--){
        string s,t;
        cin>>s;
        cin>>t;
        ll n=s.length(),m=t.length();
        bool ans=false;
        ll i=0;
        while(i<n){
            ll j=i,k=0;
            ll temp=1;
            while(k<m && j>=0){
                if(j==n){
                    temp=-1;
                    j+=(2*temp);
                }
                else if(s[j]==t[k]){
                    j+=temp;
                    k++;
                }
                else if(temp==1){
                    temp=-1;
                    j+=(2*temp);
                }
                else{
                    break;
                }
            }
            if(k==m){
                ans=true;
                break;
            }
            i++;
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}
int main()
{
	
    
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
    solve();
    
    
    return 0;
}

