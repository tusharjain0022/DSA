// Author : Tushar Jain 
// Dated : 21/07/2021
// Program for post order traversal in a binary tree without recursion
#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

struct Node{
    int left, right;
};

map<int, Node> tree;

void postOrderTraversal(int root){
    stack<int> st;
    array<bool,10001> vis;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        if(tree[root].left and tree[root].left!=-1 and !vis[tree[root].left]){
            st.push(tree[root].left);
        }
        else if(tree[root].right and tree[root].right!=-1 and !vis[tree[root].right]){
            st.push(tree[root].right); 
        }
        else {
            int node = st.top();
            st.pop();
            vis[node] = true;
            cout <<node << " ";
        }


    }
}

int main()
{ 
   fastIO;
   int n; //no. of nodes
   cin >> n;

       while (n != 1)
       {
           int root, left, right;
           cin >> root >> left >> right; // left/right=-1 if they dont exist
           if (left != -1)
           {
               tree[root].left = left;
               n--;
           }
           if (right != -1)
           {
               tree[root].right = right;
               n--;
           }
       }
      postOrderTraversal(1);
   return 0;
}