//              .-""""-.
//                        / j      \
//                       :.d;       ;
//                       P        :
//            .m._       $$         :
//           dSMMSSSss.__b.    __ :
//          :MMSMMSSSMMMSSb  P ;
//          SMMMSMMSMMMSSS$$$$     :b
//         dSMMMSMMMMMMSSMMb.dP SSb.
//        dSMMMMMMMMMMSSMMPT$$=-. /TSSSS.
//       :SMMMSMMMMMMMSMMP  `b_.'  MMMMSS.
//       SMMMMMSMMMMMMMMM \  .'\    :SMMMSSS.
//      dSMSSMMMSMMMMMMMM  \/\_/; .'SSMMMMSSSm
//     dSMMMMSMMSMMMMMMMM    :.;'" :SSMMMMSSMM;
//   .MMSSSSSMSSMMMMMMMM;    :.;   MMSMMMMSMMM;
//  dMSSMMSSSSSSSMMMMMMM;    ;.;   MMMMMMMSMMM
// :MMMSSSSMMMSSP^TMMMMM     ;.;   MMMMMMMMMMM
// MMMSMMMMSSSSP   `MMMM     ;.;   :MMMMMMMMM;
// "TMMMMMMMMMM      TM;    :`.:    MMMMMMMMM;
//    )MMMMMMM;     _/\    :`.:    :MMMMMMMM
//   dSSMMMb.  |._\   :`.:     MMMMMMMM
//   TS$$$$$m;O\"-;`.:_.-  MMMMMMM;
//  :$$$$$$$$$$b_l./\ ;`.:    mMMSSMMM;
//  :$$$$$$$$$$$$$$$$$$$./\;`.:  .MSMMMMMM
//   $$$$$$$$$$$$$$$$$$$$. \`.:.SMSSSMMM;
//   $$$$$$$$$$$$$$$$$$$$$. \.:SSMMMMMMM
//   :$$$$$$$$$$$$$$$$$$$$$.//.:SSSSSSSMM;
//   :$$$$$$$$$$$$$$$$$$$$$$.`.:SSSSSSSMMMP
//    $$$$$$$$$;"^J "^$$$$;.`.P  `SSSMMMM
//    :$$$$$$$$$       :$$$;.`.P'..   TMMMb
//    :$$$$$$$$$;      $$$$;.`/ c^'   dS;
//    S$$$$;      '^^^:_dg:___.$SSS
//    SS$$$$;            $$$$$$$$$SSS;
//   :SSSS$$$$            : $$$$$$$$SSS
//   :P"TSSSS$$$            ; $$$$$$$$SSS;
//   j    `SSSSS$           :  :$$$$$$$$SS$
//  :       "^S^'           :   $$$$$$$$S$;
//  ;.____.-;"               "--^$$$$$$$$P
//  '-....-"  bug                  ""^^TP"
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
#define sp " " 
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
class Edge
{
    public:
       int src,dest,weight;
};

class Graph
{

    public:
       int V,E; //no. of vertices and edges;
       Edge* edges;//array of edges
       vector<pair<int,int>> *adj;
       Graph(int v,int e);
       void addEdge(int v,int u,int w);
       void BFS(int s);
       void DFS(int s);//main dfs tp keep track of visited nodes
       void dfs(int v,int vis[]);//this because we need a recursive call dfs at its print and moves to next;

};
Graph::Graph(int v,int e){
    this->V=v;
    this->E=e;
    this->edges=new Edge[sizeof(Edge)*e];
    this->adj=new vector<pair<int,int>>[v+1];


}
Graph* createGraph(int V,int E){//vague
    Graph* graph =new Graph(V,E);
    graph->E=E;
    graph->V=V;
    graph->edges=new Edge[sizeof(Edge)*E];
    graph->adj=new vector<pair<int,int>>[V+1];
    return graph;
}
void Graph::addEdge(int v,int u,int w){
    adj[v].pb(mk(w,u));
    //adding a directed edge
}
void Graph::BFS(int s){
    
    int *vis=new int[V];
    memset(vis,-1,sizeof(vis));
    queue<int> q;
    // pushing into the queue so that later it can be found
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        s=q.front();
        cout<<s<<" ";
        q.pop();
        for(auto i=adj[s].begin();i!=adj[s].end();i++){ //check
            if(vis[(*i).second]!=1){
                vis[(*i).second]=1;
                q.push((*i).second);
            }

        }
        
      


    }
}
void Graph::dfs(int v,int vis[]){
    cout<<v<<" ";
    vis[v]=1;
    for(auto i=adj[v].begin();i!=adj[v].end();i++){ //note will backtrack as there can be more than that value ,it just goes far away and comeback so all elemnts are include
        if(vis[(*i).second]!=1){
            dfs((*i).second,vis);
        }
    }


}
void Graph::DFS(int s){
    int *vis=new int[V];
    memset(vis,0,sizeof(vis));
    dfs(s,vis); //recursion

}


int find(int parent[],int i){
    if(parent[i]==i){
        return i;
    }
    return find(parent,parent[i]);
}
void Union(int parent[],int rank[],int x,int y){
    if(rank[x]<rank[y]){
        parent[x]=y;
    }
    else if(rank[x]>rank[y]){
        parent[y]=x;
    }
    else{
        parent[y]=x; //x becomes parent
        rank[x]++;
    }

    
}
int isCycle(Graph* graph)
{
    int* parent =new int[graph->V*sizeof(int)];
    int* rank=new int[graph->V*sizeof(int)];
    memset(rank,0,sizeof(int)*graph->V);
    int c=0;
    // memset(parent,-1,sizeof(int)*graph->V);
    for(int i=0;i<graph->V;i++){
        parent[i]=i;

    }
    //iterate through all edges and find subsets of both vertices
    for(int i=0;i<graph->E;i++){
        int x=find(parent,graph->edges[i].src);
        int y=find(parent,graph->edges[i].dest);
        if(x==y){
            return 1;
        }
        else{
            Union(parent,rank,x,y); //if source and dest are in same them make one parent as they are connected
            
        }
    }
    return 0;
}
int myComp(const void *a,const void *b){ //for qsort
    Edge *a1=(Edge*)a;
    Edge *b1=(Edge*)b;
    return a1->weight>b1->weight;
}
ll KrushukalMst(Graph* graph){
    int V=graph->V;
    Edge result[V]; //array of Edge
    int e=0;
    int i=0;
    qsort(graph->edges,graph->E,sizeof(graph->edges[0]),myComp);//sorted 
    int* parent =new int[graph->V*sizeof(int)];
    int* rank=new int[graph->V*sizeof(int)];
    for(int j=0;j<V;j++){
        parent[j]=j;
        rank[j]=0;
    }
    //like cycle founding
    //no. of edges to be included should be V-1
    while(e<V-1 && i<graph->E){ 
        Edge next_edge=graph->edges[i++];
        int x=find(parent,next_edge.src);
        int y=find(parent,next_edge.dest);
        if(x!=y){
            result[e++]=next_edge;
            Union(parent,rank,x,y);
        }

    }
    ll mcost=0;
    for(int i=0;i<e;i++){ //simply iterate now
        //cout<<result[i].src<<" "<<result[i].dest<<" "<<result[i].weight<<endl;
        mcost+=result[i].weight;
    }
    //cout<<mcost<<endl;
    return mcost;

}
long long prim(Graph* graph,int x){
    int marked[graph->V];
    memset(marked,0,sizeof(marked));
    priority_queue<pll,vector<pll>,greater<pll>> p;
    int y;
    pll q;
    ll mcost=0;
    p.push(mk(0,x));
    while(!p.empty()){
        q=p.top();
        p.pop();
        x= q.second;
        if(marked[x]==1)continue;
        mcost+=q.first;
        marked[x]=1;
        for(int i=0;i<graph->adj[x].size();i++){
            y=graph->adj[x][i].second;
            if(marked[y]==0){
                p.push(graph->adj[x][i]);

            }
            


        }


    }
    return mcost;
}
void bfs01(Graph* graph,int start,int k){//when there are only 0,1 weights shortest path from start to any other element
  int distance[graph->V]={0};
  memset(distance,mod,sizeof(distance));
  deque<int> q;
  q.pb(start);
  distance[start]=0;
  while(!q.empty()){
      int v=q.front();
      q.pop_front();
      for(int i=0;i<graph->adj[v].size();i++){
          if(distance[graph->adj[v][i].second]>distance[v]+graph->adj[v][i].first){
              distance[graph->adj[v][i].second]=distance[v]+graph->adj[v][i].first;

          }
          if(graph->adj[v][i].first==0){
              q.push_front(graph->adj[v][i].second);
          }
          else{
              q.push_back(graph->adj[v][i].second);

          }
      }
  }
}
void dijisktra(Graph* graph,int s){
    int distance[graph->V];
    memset(distance,mod,sizeof(distance));
    
    //vector<int> dis(graph->V);
    //int distance[graph->V];
    int vis[graph->V]={0};
    //memset(distance,mod,graph->V);
    distance[s]=0;
    priority_queue<pll,vector<pll>,greater<pll>> p;
    p.push(mk(distance[s],s));
    while(!p.empty()){
        ll q=p.top().second;
        p.pop();
        if(vis[q]==1)continue;
        vis[q]=1;

        
        for(int i=0;i<graph->adj[q].size();i++){
            if(distance[graph->adj[q][i].second]>distance[q]+graph->adj[q][i].first){
                distance[graph->adj[q][i].second]=distance[q]+graph->adj[q][i].first;
                p.push(mk(distance[graph->adj[q][i].second],graph->adj[q][i].second));
                
            }
            
        }
    }
    // for(int i=1;i<graph->V;i++){
    //     if(distance[i]==mod){
    //         cout<<maxa<<" ";
    //         continue;
    //     }
    //     cout<<distance[i]<<" ";
    // }
    // nl;
    
}



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);

    int V,E,k;
    cin>>V>>E>>k;
    Graph* graph=new Graph(V,E);
    for(int i=0;i<E;i++){
        int src,des,weight=0;
        cin>>src>>des>>weight;
        graph->edges[i].src=src;graph->edges[i].dest=des;graph->edges[i].weight=weight;//kruskal undirected
        graph->addEdge(src-1,des-1,weight);
        graph->addEdge(des-1,src-1,weight);//two for undirected graph sucker

    }
    cout<<KrushukalMst(graph)<<endl;
  


    return 0;
}