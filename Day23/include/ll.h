#ifndef LL
#define LL

#include <iostream>
#include<memory>

struct Node {
	int data;
	std::shared_ptr<Node> next;

	Node(int val) : data{ val }, next{ nullptr } {}
};

class LinkedList {
private:
	std::shared_ptr<Node> head;

public:

	LinkedList() : head(nullptr) {}
	LinkedList(const std::initializer_list<int>& list);
	void display();
	void insertAtLast(int val);
	void insertAtFirst(int val);
	void deleteAtLast();
	void deleteAtFirst();
};

#endif