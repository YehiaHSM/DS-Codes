#include <iostream>
#include "ArrList.cpp"

using namespace std;

int main()
{
	ArrList<int> L;
	L.Append(9);
	L.Append(8);
	L.Append(7);
	L.Append(6);
	L.insertAt(2,100);
	L.deleteAt(1);
	
	//for(int i=0; i<L.Length();i++)
		//cout<<L.At(i)<<endl;
	L.display();
	
	return 0;
}