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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int q=n/2;
        int r=q-(k-1);
        int c=0;
        vector<pair<int,int>> v;
        queue<int> st;
        queue<int> st2;
        /*for(int i=0;i<n;i++){
            if(c==(k-1)){
                break;
            }
            if(st.empty() && st2.empty()){
                if(s[i]=='('&&s[i+1]==')'){
                    c++;
                    
                    if(i+2<n){
                        i++;
                        continue;
                    }
                }
            }
            else{
                if( !st.empty()&&s[i]=='('){
                    c++;
                    v.pb(mk(st.front(),i));
                    
                    reverse(s.begin()+st.front(),s.begin()+i+1);
                    st.pop();
                    if(!st.empty()){
                        st.pop();
                    }
                    else{
                        continue;
                    }

                }
                if(!st.empty()&&s[i]==')'){
                    c++;
                    v.pb(mk(st2.front()+1,i));
                    reverse(s.begin()+st.front()+1,s.begin()+i+1);
                    st.pop();
                    if(!st.empty()){
                        st.pop();
                    }
                    else{
                        continue;
                    }
                }
            }
            if(st.empty()&&st2.empty()){
                if(s[i]=='('&&s[i+1]==')'){
                    c++;
                    
                    if(i+2<n){
                        i++;
                        continue;
                    }
                }

            }
            if(s[i]==')'){
                st.push(i);
                
            }
            else{
                st2.push(i);

            }

        }*/
        for(int i=0;i<n;i++){
            if(c==k-1){
                break;
            }
            if(s[i]==')'){
                size_t j=s.find('(',i);
                reverse(s.begin()+i,s.begin()+j+1);
                v.pb(mk(i,j));
                i++;
                c++;


                



            }
            else{
                size_t j=s.find(')',i);
                reverse(s.begin()+i+1,s.begin()+j+1);
                v.pb(mk(i+1,j));
                i++;
                c++;


            }
        }
        
        int i=2*(k-1),j=n-1;
        
        while(r){
            if(s[i]=='('){
                r--;
                i++;
            }
            else{
                if(s[j]=='('){
                    r--;
                    v.pb(mk(i,j));
                    reverse(s.begin()+i,s.begin()+j+1);
                    i++;
                    j--;
                }
                else{
                    j--;
                }


            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<(v[i].first)+1<<" "<<(v[i].second)+1<<endl;
            

        }



        
    
    }


    return 0;
}
