#include <iostream>
#include "QueueArr.cpp"

using namespace std;

int main()
{
	QueueArr<int> q(3);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	
	cout<<"the queue contains:"<<endl;
	while(!q.empty())
	{
		cout<<q.Front()<<endl;
		q.dequeue();
	}
	
	return 0;
}