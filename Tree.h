#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct Node
{
    int x;
    Node *left,*right;
};
void show(Node *&Tree)
{
	if (Tree != NULL)
	{
	   show(Tree->left);
	   cout << Tree->x << '\t';
	   show(Tree->right);
	}
}
void del(Node *&Tree){
   if (Tree != NULL)
	{
	   del(Tree->left);
	   del(Tree->right);
	   delete Tree;
	   Tree = NULL;
	}
}
void add_node(int x,Node *&MyTree)
{
	if (NULL == MyTree)
	{
		MyTree = new Node;
		MyTree->x = x;
		MyTree->left = MyTree->right = NULL;
	}
                   if (x < MyTree->x)
                      {
                          if (MyTree->left != NULL) add_node(x, MyTree->left);
                          else
                          {
                              MyTree->left = new Node;
                              MyTree->left->left = MyTree->left->right = NULL;
                              MyTree->left->x = x;
                          }
                      }
                    if (x > MyTree->x)
                      {
                          if (MyTree->right != NULL) add_node(x, MyTree->right);
                          else
                          {
                              MyTree->right = new Node;
                              MyTree->right->left = MyTree->right->right = NULL;
                              MyTree->right->x = x;
                          }
                      }





//#ifndef TREE_H_INCLUDED #define TREE_H_INCLUDED #endif // TREE_H_INCLUDED
