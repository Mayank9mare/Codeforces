#include<iostream>
using namespace std;

int main(){
	int i ,j, a,n ;
	int f=0;
    cin>>a;
    cin>>n;
for(i=a ; i<= n ; i++){
    f=0;
    for(j=1 ; j<= i ; j++){
        if(i%j ==0){
        f=f+1 ;
        }
    }
    if (f ==2)
cout<<i<<endl ;
}
        
        
    

    


return 0 ;
}