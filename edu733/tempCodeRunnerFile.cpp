const int N = 100000;
int lp[N+1];
vector<int> pr;
void lc(){
    for(int i=2;i<=N;i++){
        lp[i]=1;
    }

for(int i=2; i<N; ++i) {
    if (lp[i] == 1) {
        //lp[i] = i;
        pr.push_back (i);
         for(ll j=2*i;j<N;j+=i){
        lp[i]=0;
    }
    }
   
}
}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    lc();
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        //map<ll,ll> m1;
        //map<ll,ll> m2;
        if(k>max(a,b)){
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> v;
        ll c1=0;
        ll c2=0;
        if(k==1){
            if(a==b){
                cout<<"NO"<<endl;
                continue;
            }
            if(a%b==0 || b%a==0){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
  

        for(int i:pr){
            if(a%i!=0)continue;
         

            while(a%i==0){
                a/=i;
                c1++;

            }
            
            
            
        }
        if(a!=1){
            c1++;
        }
        for(int i:pr){
            if(b%i!=0)continue;
            while(b%i==0){
                b/=i;
                c2++;
            }
        }
        if(b!=1){
            c2++;
        }
        ll c=c1+c2;
        if(k<=c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



        

    }


    return 0;
}
