#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
	cout<<"enter width and height"<<endl;
	int width, height;
	cin>>width>>height;
	rectangle r1(width, height);
	cout<<"area= "<<r1.area()<<endl;
	return 0;
}

