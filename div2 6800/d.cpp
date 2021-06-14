#include <bits/stdc++.h>
using namespace std;
int dp[207][507],n;
int arr[207];
int f(int i,int j){
	if(j>500)return 1e7;
	if(i==n)return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	return dp[i][j]=min(f(i,j+1),f(i+1,j+1)+abs(arr[i]-j));
}
int main() {
	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		cin>>n;
		int i;
		for(i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		cout<<f(0,1)<<"\n";
	}
	return 0;
}