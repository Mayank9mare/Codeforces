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



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int n1=s1.size();
        int n2=s2.size();
        int k1=n1;
        int k2=n2;
        int i=0,j=0;
        int c=0;
        string a=s1;
        string b=s2;
        while(i<n1 && j<n2){
            if(s1[i]==s2[j]){

                i++;
                j++;
                if(i==n1 && j==n2)break;
                if(i==n1){
                    s1=s1.append(a);
                    n1+=k1;
                }
                if(j==n2){
                    s2=s2.append(b);
                    n2+=k2;
                }
                
            }
            else{
                c=1;
                break;
            }
        }
        
        if(c==1){
            cout<<-1<<endl;
        }
        else{
            cout<<s1<<endl;
        }

    }


    return 0;
}
