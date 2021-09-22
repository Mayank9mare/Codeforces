int solve(){
    string s;
    cin>>s;
    map<char,int> m;
    m['a']=1;
    m['e']=2;
    m['i']=3;
    m['o']=4;
    m['u']=5;
    int n=s.size();
    int dp[n][6];
    mem0(dp);

     set<int> st;
    if(m.find(s[0])!=m.end()){
        dp[0][m[s[0]]]+=1;
        st.insert(m[s[0]]);

        
    }
    else{
        st.insert(0);
        dp[0][0]+=1;
    }
    //cout<<dp[0][0]<<endl;
   
    for(int i=1;i<n;i++){
        if(m.find(s[i])!=m.end()){
            if(st.find(m[s[i]])==st.end()){
                st.insert(m[s[i]]);
                for(int j=0;j<6;j++){
                    dp[i][m[s[i]]]+=dp[i-1][j];
                }
                dp[i][m[s[i]]]++;
                  for(int j=0;j<6;j++){
                    if(j==m[s[i]])continue;
                    dp[i][j]=dp[i-1][j];
                }
            }
            else{
                for(int j=0;j<6;j++){
                    if(dp[i-1][j])
                    dp[i][j]=(dp[i-1][j]+1);
                }

            }
            //cout<<dp[i][m[s[i]]]<<endl;
        }
        else{
            if(st.find(0)==st.end()){
                st.insert(0);
                 for(int j=0;j<6;j++){
                    dp[i][0]+=(dp[i-1][j]+1);
                }
                for(int j=0;j<6;j++){
                    if(j==0)continue;
                    dp[i][j]=dp[i-1][j];
                }
                dp[i][0]++;

            }
            else{
                 for(int j=0;j<6;j++){
                     if(dp[i-1][j])
                    dp[i][j]=(dp[i-1][j]+1);
                }

            }
            //cout<<dp[i][0]<<endl;
        }
    }
    ll ans=0;
    for(int i=0;i<6;i++){
        ans+=dp[n-1][i];
    }
    cout<<ans<<endl;
    return 0;


        



    }