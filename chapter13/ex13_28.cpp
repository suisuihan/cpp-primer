#include <iostream>

using namespace std;

class TreeNode{
public:
    TreeNode(const string &s= string()): value(s), count(new int(0)), left(nullptr), right(nullptr){ }
    TreeNode(const TreeNode &tn): value(tn.value), count(tn.count), left(tn.left), right(tn.right) {++*count;}  
    TreeNode& operator=(const TreeNode &rtn);
    ~TreeNode();
private:
    string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

TreeNode& TreeNode::operator=(const TreeNode &rtn){
    ++*rtn.count;
    if(--*count == 0){
        delete count;
        delete left;
        delete right;
    }
    value = rtn.value;
    count = rtn.count;
    left = rtn.left;
    right = rtn.right;
    return *this;
}

TreeNode::~TreeNode(){
    if(--*count == 0){
        delete count;
        delete left;
        delete right;
    }
}

class BinStrTree{
public:
    BinStrTree():root(new TreeNode()){}
    BinStrTree(const BinStrTree &bst):root(new TreeNode(*bst.root)){}
    BinStrTree& operator=(const BinStrTree &bst){
        TreeNode *new_root = new TreeNode(*bst.root);
        delete root;
        root = new_root;
        return *this;
    }
    ~BinStrTree(){
        delete root;
    }

private:
        TreeNode *root;
};


int main(){
    BinStrTree bt;
}
