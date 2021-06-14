#include<bits/stdc++.h>
using namespace std;
long long T,n,m,res;
int main(){
	cin>>T;
	while(T--){
		cin>>n>>m;
		if(n<m){cout<<n<<endl;continue;}
		res=0;
		for(long long i=1;i*i<=m;i++){
			if(m%i)continue;
			if(i!=1){
				long long tmp=n;
				while(!(tmp%m))tmp/=i;
				res=max(res,tmp);				
			}
				long long tmp=n;
				while(!(tmp%m))tmp/=m/i;
				res=max(res,tmp);	
		}
		cout<<res<<endl;
	}
	return 0;
}