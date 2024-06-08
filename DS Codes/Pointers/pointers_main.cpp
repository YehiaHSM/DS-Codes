//1. Pointer Assignment
/*#include <iostream>

using namespace std;

int main()
{
	int n1=1, n2=2;
	int *p1, *p2;
	p1 = &n1;
	p2 = &n2;
	cout<<"p1="<<*p1<<endl;
	cout<<"p2="<<*p2<<endl;
	*p1=*p2;		//try also *p1=*p2;
	cout<<"p1="<<*p1<<endl;
	cout<<"p2="<<*p2<<endl;
	cout<<"n1="<<n1<<endl; 
	return 0;
}*/

//2.using the new operator 
/*#include <iostream>

using namespace std;

int main()
{
	int *p1;
	p1 = new int;
	*p1 = 4;
	cout<<"p1="<<*p1<<endl;
	int *p2=p1;
	cout<<"p2="<<*p2<<endl;
	p1 = new int;
	cout<<"p1="<<*p1<<endl;
	
	cout<<"p2="<<*p2<<endl;
	return 0;
}*/


//3. using the delete operator
#include <iostream>

using namespace std;

int main()
{
	int *p1;
	p1 = new int;
	*p1 = 4;
	cout<<"p1="<<*p1<<endl;
	delete p1;
	*p1=7;
	cout<<"p1="<<*p1<<endl;

	return 0;
}


//4. application on pointers
/*#include <iostream>
#include <string>
using namespace std;

struct person
{
  string name;
  person* parent;
};

int main()
{
	person* p1 = new person; p1->name="Ahmed"; p1->parent=0;

	person* p2 = new person; p2->name="Mohamed"; p2->parent=p1;

	person* p3 = new person; p3->name="Ali"; p3->parent=p2;
	
	cout<<(*p3).name<<"'s father is "<<p3->parent->name<<endl;

	cout<<p3->name<<"'s grandfather is "<<p3->parent->parent->name<<endl;

	return 0;
}*/
