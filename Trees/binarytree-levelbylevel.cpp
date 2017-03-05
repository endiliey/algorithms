#include <bits/stdc++.h>

using namespace std;

struct binaryTree
{
	int data;
	binaryTree* left;
	binaryTree* right;
};

void printLevelByLevel(binaryTree* root)
{
	if (!root)
		return;
	int nodesInCurrentLevel = 1;
	int nodesInNextLevel = 0;
	queue<binaryTree*> q;
	q.push(root);

	while (!q.empty())
	{
		binaryTree* currentNode = q.front();
		q.pop();
		nodesInCurrentLevel--;

		if (currentNode)
		{
			cout << currentNode->data << " ";
			q.push(currentNode->left);
			q.push(currentNode->right);
			nodesInNextLevel += 2;
		}
		if (nodesInCurrentLevel == 0)
		{
			cout << endl;
			nodesInCurrentLevel = nodesInNextLevel;
			nodesInNextLevel = 0;
		}
		
	}
}

int main()
{
	binaryTree* root = new binaryTree();
	root->data = 5;
	binaryTree* left1 = new binaryTree();
	left1->data = 2;
	binaryTree* right1 = new binaryTree();
	right1->data = 8;
	root->left = left1;
	root->right = right1;
	binaryTree* right2 = new binaryTree();
	right2->data = 11;
	right1->right = right2;
	
	printLevelByLevel(root);
	return 0;
}
