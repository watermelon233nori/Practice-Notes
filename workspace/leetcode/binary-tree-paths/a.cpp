#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node./
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        TreeNode* current = root;
        stack<int> path;
        char meetRoot = 0;
    }
};

int main() {
    
}