#include<iostream>
#include<queue>
#define maxSize 500
using namespace std;

typedef struct TreeNode{
	char data;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;

/*
//递归 
class Solution {
public:
    int run(TreeNode *root) {
    	
    }
};
*/

//层次遍历
class Solution {
public:
    int run(TreeNode *root) {
    	//定义队列
		int front,rear;
		int depth = 0;
		TreeNode *que[1000];
		TreeNode *p;
		front = 0,rear = 0;
		que[rear++] = root;
    	if(root == NULL)
			return 0;
		while(front != rear){
			depth++;
			p = que[front++];
			if(p->left != NULL && p->right != NULL){
				que[rear++] = p->left;
				que[rear++] = p->right;
			}
			else{
				 break;
			}	
		}
		return depth;
    }
};

int main(){
	return 0;
}
