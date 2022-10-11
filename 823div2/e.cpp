#include<bits/stdc++.h>
using namespace std;


vector<int> prime;
int mu[100005];
bool use[100005];

void _mu(int n){
    mu[1]=1;
    for(int i=2;i<=n;++i){
        if(!use[i])mu[i]=-1,prime.push_back(i);
        for(int j=0;j<prime.size();++j){
            if(i*prime[j]>n)break;
            use[i*prime[j]]=1;
            if(!(i%prime[j])) break;
            else mu[i*prime[j]]=-mu[i];
        }
    }return ;
}

int myFun(int A,int B){
    //if(A>B)swap(A,B);
   _mu(max(A,B));
   int c=0;
   for(int i=1;i<=max(A,B);i++){
    c+=(mu[i]*(A/i)*(B/i));

   }
   //cout<<c<<endl;
   return c;
}

int main(){
    cout<<myFun(3,3)<<endl;
}

