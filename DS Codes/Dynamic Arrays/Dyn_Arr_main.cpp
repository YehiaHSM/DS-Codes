////1. Dynamic arrays
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	cout<<"enter the size of the array"<<endl;
//	int size;
//	cin>>size;
//	cout<<"enter the values"<<endl;
//	int *arr=new int[size];
//	for(int i=0;i<size;i++)
//		cin>>arr[i];
//	cout<<arr[2]<<endl;
//	return 0;
//}


//2. resizing a dynamic array
#include <iostream>

using namespace std;

int size;
int *arr;

void Expand()
{
	int* a =new int[size+5];
	for(int i=0;i<size;i++)
		a[i]=arr[i];
	size+=5;
	delete [] arr;
	arr=a;
}

int main()
{
	size=3;
	arr=new int[size];
	cout<<"enter the values, -1 to stop"<<endl;
	int input, index=0;
	cin>>input;
	while(input!=-1)
	{
		if(index==size)
			Expand();

		arr[index]=input;
		index++;
		cin>>input;
	}

	for(int i=0;i<index;i++)
		cout<<arr[i]<<endl;
	cout<<"Final size= "<<size<<endl;
    return 0;
}



