/* Bhavik Agarwal (bhavik_2001) */
#include<bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    int freq;
    Node *left, *right;
 
    Node(char data, int freq){
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};
 
struct comp { 
    bool operator()(Node* l, Node* r){
        return (l->freq > r->freq);
    }
};
 
void printCode(struct Node* root, string str){
 
    if (!root) return;
 
    if (root->data != '$'){
        cout << root->data << ": " << str << "\n";
    }
 
    printCode(root->left, str + "0");
    printCode(root->right, str + "1");
}

int main(){
    
    int n;
    cin >> n;

    vector<pair<char,int>> v;

    // Taking input - O(n)
    for(int i=0;i<n;i++){
        char c;
        int freq;
        cin >> c >> freq;
        v.push_back({c,freq});
    }
 
    struct Node *left, *right, *top;
    priority_queue<Node*, vector<Node*>, comp> pq;
    
    // Inserting in the priority queue - O(nlogn)
    for (int i = 0;i<n;i++){
        pq.push(new Node(v[i].first, v[i].second));
    }
    
    // O(nlogn)
    while(pq.size() != 1){

        // O(logn)
        left = pq.top();
        pq.pop();
    
        // O(logn)
        right = pq.top();
        pq.pop();

        top = new Node('$', left->freq + right->freq);
 
        top->left = left;
        top->right = right;
    
        // O(logn)
        pq.push(top);
    }
    
    printCode(pq.top(), "");

    // Total Time Complexity - O(nlogn)
    // Space Complexity - O(n)

    return 0;
}