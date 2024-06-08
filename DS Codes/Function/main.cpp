#include <iostream>

using namespace std;

template <typename T> 
T maximum(T x, T y)    
{        
	if (x < y)
		return y;        
	else            
		return x;    
}

int main()
{
	cout<<maximum(1,3)<<endl;			//function takes integers
	cout<<maximum(5.4,2.2)<<endl;		//function takes floats
	cout<<maximum('a','d')<<endl;		//function takes characters
	return 0;
}