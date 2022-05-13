#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root){return res;}//如果root为空，直接返回空的vector
        queue<Node*> que;//用队列来存储节点
        que.push(root);//将根节点入队
        while(!que.empty()){//如果队列不为空，则循环
            int size=que.size();//获取队列中节点的个数
            vector<int> tmp;//用来存储每一层的节点的值
            while(size--){//将队列中的节点出队，并将其值存入tmp中
                Node *p=que.front();//将队列中的第一个节点赋值给p
                que.pop();//将队列中的第一个节点出队
                tmp.push_back(p->val);//将p的值存入tmp中
                for(int i=0;i<p->children.size();i++)//将p的所有子节点入队
                    que.push(p->children[i]);//将p的所有子节点入队
                //for(auto c:p->children)
                    //que.push(c);                
            }
            res.push_back(tmp);//将tmp存入res中
        }
        return res;
    }
};

int main(){
	Node *root=new Node(1);
	root->children.push_back(new Node(2));
	root->children.push_back(new Node(3));
	root->children[0]->children.push_back(new Node(4));
	root->children[0]->children.push_back(new Node(5));
	root->children[1]->children.push_back(new Node(6));
	root->children[1]->children.push_back(new Node(7));
	Solution a;
	vector<vector<int>> res=a.levelOrder(root);
	cout<<"[";
	for(auto v:res){
		cout<<"[";
		for(auto i:v){
			cout<<i<<",";
		}
		cout<<"]";
	}
	cout<<"]"<<endl;
	return 0;
}