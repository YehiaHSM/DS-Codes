#include<iostream>
#include "BSTree.cpp"

using namespace std;

int main()
{
	BSTree<int> B;
	B.insert(100);
	B.insert(200);
	B.insert(90);
	B.insert(150);
	B.insert(125);
	B.insert(88);
	B.insert(99);
	B.insert(210);
	//B.remove(100);
	
	B.traverse(2);
	
	return 0;
}