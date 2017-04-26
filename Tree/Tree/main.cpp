#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
using namespace std;
int l;
class TREE 
{
private:
	struct Node
	{
		int val;
		Node *first;
		Node *second;
		Node *third;
	};
	

public:
	TREE()
	{
		root = NULL;
		
	};

	~TREE()
	{
		del(root);
	}

	Node *root;

	void Add(int &x, Node*& root)
	{
		
		
		if (root == NULL)
		{
			root = new Node;
			root->val = x;
			cout << x << endl;
			root->first = root->second = root->third = NULL;

		}
		else
		{
			
			int a = (rand() % 3)+1;

			if (a == 1)
			{
				Add(x, root->first);
			}

			if (a == 2)
			{
				Add(x, root->second);
			}

			if (a == 3)
			{
				Add(x, root->third);
			}
		}
	}

	void Print(Node*& root)
	{
		if (root->first == NULL && root->second == NULL && root->third == NULL)
		{
			cout << root->val << ' ';
		}
		else
		{
			if (root->first != NULL)
			{
				Print(root->first);
				
			}
			if (root->second != NULL)
			{
				Print(root->second);
				
			}
			
			if (root->third != NULL)
			{
				Print(root->third);
				
			}
			
		}
		
	}

	void del(Node* root)
	{
		if (root)
		{
			del(root->first);
			del(root->second);
			del(root->third);
			delete root;
		}
	}
};
int main() 
{
	int n;
	TREE t;

	setlocale(LC_ALL, "Russian");

	srand((unsigned int)time(0));

	cout << "¬ведите количество узлов "; cin >> n;
	for (int j = 1; j <= n; j++) 
	{
		int put; 
		put = rand() % 50;
		t.Add(put, t.root);
	}

	t.Print(t.root);
	
	cout << endl;
	system("pause");
	return 0;
}







































































































































































