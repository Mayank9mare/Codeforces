//              .-""""-.
//                        / j      \
//                       :.d;       ;
//                       $P        :
//            .m._       $$         :
//           dSMMSSSss.__$b.    __ :
//          :MMSMMSSSMMMSS$$b  $P ;
//          SMMMSMMSMMMSSS$$$$     :b
//         dSMMMSMMMMMMSSMM$$b.dP SSb.
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
//   dSS$$MMMb.  |._\\   :`.:     MMMMMMMM
//   T$S$$$$$$$$$m;O\\"-;`.:_.-  MMMMMMM;
//  :$$$$$$$$$$$$$$b_l./\ ;`.:    mMMSSMMM;
//  :$$$$$$$$$$$$$$$$$$$./\;`.:  .$MSMMMMMM
//   $$$$$$$$$$$$$$$$$$$$. \`.:.$$$SMSSSMMM;
//   $$$$$$$$$$$$$$$$$$$$$. \.:$$$$SSMMMMMMM
//   :$$$$$$$$$$$$$$$$$$$$$.//.:$$$SSSSSSSMM;
//   :$$$$$$$$$$$$$$$$$$$$$$.`.:$SSSSSSSMMMP
//    $$$$$$$$$;"^J "^$$$$;.`.$P  `SSSMMMM
//    :$$$$$$$$$       :$$$;.`.P'..   TMMM$b
//    :$$$$$$$$$;      $$$$;.`/ c^'   d$$$$S;
//    $$$$S$$$$;      '^^^:_dg:___.$$$$$SSS
//    $$$SS$$$$;            $$$$$$$$$$$$$SSS;
//   :$$SSSS$$$$            : $$$$$$$$$$$$SSS
//   :P"TSSSS$$$            ; $$$$$$$$$$$$SSS;
//   j    `SSSSS$           :  :$$$$$$$$$$$$SS$
//  :       "^S^'           :   $$$$$$$$$$$$S$;
//  ;.____.-;"               "--^$$$$$$$$$$$$P
//  '-....-"  bug                  ""^^T$$$P"





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
#define sp " "
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
//KnightMareVoid
const int MAXN=1e5;
int n;
pair<ll,pll> tree[4*MAXN] ;
int A[MAXN];
int lazy[4*MAXN];

void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node].first =1;
        tree[node].second.second=A[start];
        tree[node].second.first=A[start];

    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        if(__gcd(tree[2*node].second.second,tree[2*node+1].second.first)==1){
            tree[node].first=tree[2*node].first+tree[2*node+1].first-1;
        
        
        }
        else{
            tree[node].first=tree[2*node].first+tree[2*node+1].first;


        }
        tree[node].second.first=tree[2*node].second.first;
        tree[node].second.second=tree[2*node+1].second.second;
    }
}

// void update(int node, int start, int end, int idx, int val)
// {
//     if(start == end)
//     {
//         // Leaf node
//         A[idx] += val;
//         tree[node] += val;
//     }
//     else
//     {
//         int mid = (start + end) / 2;
//         if(start <= idx and idx <= mid)
//         {
//             // If idx is in the left child, recurse on the left child
//             update(2*node, start, mid, idx, val);
//         }
//         else
//         {
//             // if idx is in the right child, recurse on the right child
//             update(2*node+1, mid+1, end, idx, val);
//         }
//         // Internal node will have the sum of both of its children
//         tree[node] = tree[2*node] + tree[2*node+1];
//     }
// }

pair<ll,pll> query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return {0,{-1,-1}};
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    pair<ll,pll> p1 = query(2*node, start, mid, l, r);
    pair<ll,pll> p2 = query(2*node+1, mid+1, end, l, r);
    if(p1.first==0){
        return p2;

    }
    else if(p2.first==0){
        return p1;
    }
    else{
        if(__gcd(p1.second.second,p2.second.first)==1){
            return {p1.first+p2.first-1,{p1.second.first,p2.second.second}};
        }
        else{
            return {p1.first+p2.first,{p1.second.first,p2.second.second}};
        }

    }
}

// void updateRange1(int node, int start, int end, int l, int r, int val)
// {
//     // out of range
//     if (start > end or start > r or end < l)
//         return;

//     // Current node is a leaf node
//     if (start == end)
//     {
//         // Add the difference to current node
//         tree[node] += val;
//         return;
//     }

//     // If not a leaf node, recur for children.
//     int mid = (start + end) / 2;
//     updateRange1(node*2, start, mid, l, r, val);
//     updateRange1(node*2 + 1, mid + 1, end, l, r, val);

//     // Use the result of children calls to update this node
//     tree[node] = tree[node*2] + tree[node*2+1];
// }


// void updateRange(int node, int start, int end, int l, int r, int val)
// {
//     if(lazy[node] != 0)
//     { 
//         // This node needs to be updated
//         tree[node] += (end - start + 1) * lazy[node];    // Update it
//         if(start != end)
//         {
//             lazy[node*2] += lazy[node];                  // Mark child as lazy
//             lazy[node*2+1] += lazy[node];                // Mark child as lazy
//         }
//         lazy[node] = 0;                                  // Reset it
//     }
//     if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
//         return;
//     if(start >= l and end <= r)
//     {
//         // Segment is fully within range
//         tree[node] += (end - start + 1) * val;
//         if(start != end)
//         {
//             // Not leaf node
//             lazy[node*2] += val;
//             lazy[node*2+1] += val;
//         }
//         return;
//     }
//     int mid = (start + end) / 2;
//     updateRange(node*2, start, mid, l, r, val);        // Updating left child
//     updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
//     tree[node] = tree[node*2] + tree[node*2+1];        // Updating root with max value 
// }

// int queryRange(int node, int start, int end, int l, int r)
// {
//     if(start > end or start > r or end < l)
//         return 0;         // Out of range
//     if(lazy[node] != 0)
//     {
//         // This node needs to be updated
//         tree[node] += (end - start + 1) * lazy[node];            // Update it
//         if(start != end)
//         {
//             lazy[node*2] += lazy[node];         // Mark child as lazy
//             lazy[node*2+1] += lazy[node];    // Mark child as lazy
//         }
//         lazy[node] = 0;                 // Reset it
//     }
//     if(start >= l and end <= r)             // Current segment is totally within range [l, r]
//         return tree[node];
//     int mid = (start + end) / 2;
//     int p1 = queryRange(node*2, start, mid, l, r);         // Query left child
//     int p2 = queryRange(node*2 + 1, mid + 1, end, l, r); // Query right child
//     return (p1 + p2);
// }



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int q;
   cin>>n>>q;
   for(int i=0;i<n;i++){
       cin>>A[i];
   }
   build(1,0,n-1);
   while(q--){
       int l,r;
       cin>>l>>r;
       l--;
       r--;
       cout<<query(1,0,n-1,l,r).first<<endl;

   }


    return 0;
}
