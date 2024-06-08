#pragma once
template <class T>
class Node
{
public:
	T value;
	Node<T>* left, *right;
	Node();
	Node(T val);
};

template <class T>
class BSTree
{

	Node<T>* root;
public:
	BSTree(void);
	bool contains(T val);
	Node<T>* findNode(T val);
	Node<T>* findParent(T val);
	Node<T>* findMin(Node<T>* start);
	void remove(T val);
	void insert(T val);
	void traverse(int order);
	void inOrder(Node<T>* start);
	void preOrder(Node<T>* start);
	void postOrder(Node<T>* start);
	~BSTree(void);
};

