#include "rectangle.h"
#include <iostream>
using namespace std;
rectangle::rectangle()
{
	width=height=0;
}

rectangle::rectangle(int wdth,int hgt)
{
	width=wdth;
	height=hgt;
}


int rectangle::area()
{
	return width*height;
}



rectangle::~rectangle(void)
{
	cout<<"end"<<endl;
}
