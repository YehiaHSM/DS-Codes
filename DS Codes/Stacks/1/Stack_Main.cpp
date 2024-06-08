#include <iostream>
#include "StackArr.h"

using namespace std;

int main()
{
	StackArr S;
	S.Push(10);
	S.Push(20);
	S.Push(30);

	cout<<"top= "<<S.Top()<<endl;

	while(!S.empty())
	{
		cout<<S.Top()<<endl;
		S.Pop();
	}
	system("pause");
	return 0;
}