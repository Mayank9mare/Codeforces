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
#define SPACE 10

using namespace std;

class TreeNode{
    public:
     int val;
     TreeNode* left;
     TreeNode* right;
     TreeNode(){
         val=0;
         left =NULL;
         right=NULL;
     }
     TreeNode(int v){
         val=v;
         left =NULL;
         right=NULL;

     }


};
class BST{
    public:
       TreeNode* root;
       BST(){
           root=NULL;
       }
       bool isEmpty(){
           if(root==NULL){
               return true;
           }
           else{
               return false;
           }

       }
       void print2D(TreeNode* r,int space){
           if(r==NULL){
               return;
           }
           space+=SPACE;
           print2D(r->right,space);
           cout<<endl;
           for(int i=SPACE;i<space;i++){
               cout<<" ";
           }
           cout<<r->val<<"\n";
           print2D(r->left,space);
       }
       void insertNode(TreeNode* new_node){
           if(root==NULL){
               root=new_node;
           }
           else{
               TreeNode* temp=root;
               while(temp!=NULL){
                   if(new_node->val==temp->val){
                       //duplicate cases
                   }
                   else if(new_node->val<temp->val &&temp->left==NULL){
                       temp->left=new_node;
                       break;
                   }
                   else if(new_node->val<temp->val){
                       temp=temp->left;
                   }
                   else if(new_node->val>temp->val && temp->right==NULL){
                       temp->right=new_node;
                       break;
                   }
                   else{
                       temp=temp->right;
                   }
               }
           }
       }
       void printPreorder(TreeNode* r){
           if(r==NULL){
               return;
           }
           cout<<r->val<<" ";
           printPreorder(r->left);
           printPreorder(r->right);
       }
       void printInorder(TreeNode* r){
           if(r==NULL){
               return;
           }
           printInorder(r->left);
           cout<<r->val<<" ";
           printInorder(r->right);
       }
       void printPostorder(TreeNode* r){
           if(r==NULL){
               return;
           }
           printPostorder(r->left);
           printPostorder(r->right);
           cout<<r->val<<" ";
       }
       TreeNode* iterativeSearch(int v){
           if(root==NULL){
               return NULL;
           }
           else{
               TreeNode* temp=root;
               while(temp!=NULL){
                   if(v==temp->val){
                       return temp;
                   }
                   else if(v<temp->val){
                       temp=temp->left;
                   }
                   else{
                       temp=temp->right;
                   }
               }
           }
       }
       int height(TreeNode* r){
           if(r==NULL){
               return -1;
           }
           else{
               int lheight=height(r->left);
               int rheight=height(r->right);
               if(lheight>rheight){
                   return lheight+1;
               }
               else{
                   return rheight+1;  
               }
           }
       }
       void printGivenlevel(TreeNode* r,int level){
           if(r==NULL){
               return;
           }
           else if(level==0){
               cout<<r->val<<" ";
           }
           else{
               printGivenlevel(r->left,level-1);
               printGivenlevel(r->right,level-1);
           }
       }
       void printLevelOrderBST(TreeNode* r){
           int h=height(r);
           for(int i=0;i<=h;i++){
               printGivenlevel(r,i);
           }
       }
  TreeNode * minValueNode(TreeNode * node) {
    TreeNode * current = node;
    /* loop down to find the leftmost leaf */
    while (current -> left != NULL) {
      current = current -> left;
    }
    return current;
  }
 
  TreeNode * deleteNode(TreeNode * r, int v) {
    // base case 
    if (r == NULL) {
      return NULL;
    }
    // If the key to be deleted is smaller than the root's key, 
    // then it lies in left subtree 
    else if (v < r -> val) {
      r -> left = deleteNode(r -> left, v);
    }
    // If the key to be deleted is greater than the root's key, 
    // then it lies in right subtree 
    else if (v > r -> val) {
      r -> right = deleteNode(r -> right, v);
    }
    // if key is same as root's key, then This is the node to be deleted 
    else {
      // node with only one child or no child 
      if (r -> left == NULL) {
        TreeNode * temp = r -> right;
        delete r;
        return temp;
      } else if (r -> right == NULL) {
        TreeNode * temp = r -> left;
        delete r;
        return temp;
      } else {
        // node with two children: Get the inorder successor (smallest 
        // in the right subtree) 
        TreeNode * temp = minValueNode(r -> right);
        // Copy the inorder successor's content to this node 
        r -> val = temp -> val;
        // Delete the inorder successor 
        r -> right = deleteNode(r -> right, temp -> val);
        //deleteNode(r->right, temp->value); 
      }
    }
    return r;
  }

};



int main()
{
    BST obj;
    TreeNode* n=new TreeNode(3);
    TreeNode* n1=new TreeNode(5);
    TreeNode* n2=new TreeNode(7);
    TreeNode* n3=new TreeNode(6);
    TreeNode* n4=new TreeNode(2);
    TreeNode* n5 =new TreeNode(4);
    TreeNode* n6=new TreeNode(9);
    obj.insertNode(n1);
    obj.insertNode(n);
    obj.insertNode(n2);
    obj.insertNode(n3);
    obj.insertNode(n4);
    obj.insertNode(n5);
    obj.insertNode(n6);
    cout<<obj.height(n1)<<endl;
    
    obj.print2D(n1,0);
    obj.deleteNode(n1,3);
    obj.print2D(n1,0);

    //obj.printPreorder(n1);
    //obj.printInorder(n1);
    //obj.printPostorder(n1);



    return 0;
}
