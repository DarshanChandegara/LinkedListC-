#include "./include/ll.h"

int main()
{
	LinkedList <int>l1{5,10,15};
	l1.insertAtLast(10);
	l1.insertAtLast(20);
	l1.insertAtLast(30);
	l1.insertAtLast(40);
	l1.insertAtLast(50);
	l1.deleteAtLast();
	l1.deleteAtLast();
	l1.display();
	l1.insertAtLast(60);
	l1.insertAtLast(70);
	l1.display();
	l1.insertAtFirst(0);
	l1.display();
	l1.deleteAtFirst();
	l1.display();
}