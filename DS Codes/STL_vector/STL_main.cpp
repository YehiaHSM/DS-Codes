#include <iostream>
#include <vector>

using namespace std;

//Accessing Vectors Using Index
int main()
{
	vector<int> V; 
	V.push_back(10);
	V.push_back(20);
	V.push_back(30);

	for(int i=0;i<V.size();i++)
		cout<<V[i]<<endl;

	return 0;
}


//Accessing Vectors Using Iterators
/*int main()
{
	vector<int> V; 
	V.push_back(10);
	V.push_back(20);
	V.push_back(30);

	
	vector<int>::iterator it;
	it=V.begin();

	for(it=V.begin();it!=V.end();it++)
	{
		cout<<*it<<endl;
	}

	return 0;
}
*/

