#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        ll cnt=0;
        for(ll i=1;i*i<=n;i++){
             cnt++;
        }
        for(ll i=1;i*i*i<=n;i++){            
            if(floor(sqrt(i*i*i))*floor(sqrt(i*i*i))!=i*i*i) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}