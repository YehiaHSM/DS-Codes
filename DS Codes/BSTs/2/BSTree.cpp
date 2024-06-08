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
		while(tmp!=NULL)
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
void BSTree<T>::remove(T val)
{
	assert(contains(val));
	Node<T>* n=findNode(val);
	if((n->left==NULL)&&(n->right==NULL)) //deleting a leaf node
	{
		if(n==root)
			root=NULL;
		else
		{
			Node<T>* parent=findParent(val);
			if(val<parent->value)
				parent->left=NULL;
			else
				parent->right=NULL;
		}
		delete n;
	}
	else if ((n->left==NULL)&&(n->right!=NULL))
	{
		Node<T>* parent=findParent(val);
		if(n==root)
			root=n->right;
		else
		{
			if(val<parent->value)
				parent->left=n->right;
			else
				parent->right=n->right;
		}
		delete n;
	}
	else if ((n->left!=NULL)&&(n->right==NULL))
	{
		Node<T>* parent=findParent(val);
		if(n==root)
			root=n->left;
		else
		{
			if(val<parent->value)
				parent->left=n->left;
			else
				parent->right=n->left;
		}
		delete n;
	}
	else
	{
		Node<T>* minNode=findMin(n->right);
		Node<T>* parent=findParent(minNode->value);
		n->value=minNode->value;
		
		if(parent==n)
			parent->right=minNode->right;
		else
			parent->left=minNode->right;
		delete minNode;
	}
	
}
	
template <class T>
Node<T>* BSTree<T>::findMin(Node<T>* start)
{
	Node<T>* minNode=start;
	while(minNode->left!=NULL)
		minNode=minNode->left;
	return minNode;
}

template <class T>
Node<T>* BSTree<T>::findParent(T val)
{
	Node<T>* a,*b;
	a=root;
	b=NULL;
	while((a!=NULL)&&(a->value!=val))
	{
		b=a;
		if(a->value>val)
			a=a->left;
		else
			a=a->right;
	}
	return b;
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
