#include "BSTree.h"
#include <iostream>
#include <assert.h>

template <class T>
Node<T>::Node()
{
	left=right=NULL;
}

template <class T>
Node<T>::Node(T val)
{
	value=val;
	left=right=NULL;
}

template <class T>
BSTree<T>::BSTree(void)
{
	root=NULL;
}

template <class T>
bool BSTree<T>::contains(T val)
{
	Node<T>* tmp=findNode(val);

	return (tmp!=NULL);
}

template <class T>
Node<T>* BSTree<T>::findNode(T val)
{
	Node<T>* tmp=root;

	while((tmp!=NULL)&&(tmp->value!=val))
		if(tmp->value>val)
			tmp=tmp->left;
		else
			tmp=tmp->right;
	return tmp;
}

template <class T>
void BSTree<T>::insert(T val)
{
	assert(!contains(val));
	Node<T>* tmp=root;
	Node<T>* newNode=new Node<T>(val);
	if(root==NULL)
		root=newNode;
	else
	{
		while(true)
		{
			if(tmp->value>val)
				if(tmp->left==NULL)
				{
					tmp->left=newNode;
					break;
				}
				else
					tmp=tmp->left;
			else
				if(tmp->right==NULL)
				{
					tmp->right=newNode;
					break;
				}
				else
					tmp=tmp->right;
		}
	}
}


template <class T>
void BSTree<T>::traverse(int order)
{
	if (order==1)
		inOrder(root);
	else if (order==2)
		preOrder(root);
	else
		postOrder(root);
}

template <class T>
void BSTree<T>::inOrder(Node<T>* start)
{
	if (start != NULL)
     {
		inOrder(start->left);
		cout << start->value << endl;
		inOrder(start->right); 
     }
}

template <class T>
void BSTree<T>::preOrder(Node<T>* start)
{
	if (start != NULL)
     {
		 cout << start->value << endl;
		 preOrder(start->left);
		 preOrder(start->right);
	 }
}

template <class T>
void BSTree<T>::postOrder(Node<T>* start)
{
	if (start != NULL)
     {
		 postOrder(start->left);
		 postOrder(start->right);
		 cout << start->value << endl;
     }
}

template <class T>
BSTree<T>::~BSTree(void)
{
}
