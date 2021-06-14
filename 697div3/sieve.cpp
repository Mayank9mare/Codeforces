#include <bits/stdc++.h> 
using namespace std; 

const int N=1e6;
bool prime[N+1];
  
void SieveOfEratosthenes() 
{ 
    
     
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=N; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            
            for (int i=p*p; i<=N; i += p) 
                prime[i] = false; 
        } 
    } 
  
    
    for (int p=2; p<=N; p++) 
       if (prime[p]) 
          cout << p << " "; 
}  
int main(){
    SieveOfEratosthenes();
}