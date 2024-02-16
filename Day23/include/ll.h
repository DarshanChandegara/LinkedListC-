#ifndef LL
#define LL

#include <iostream>
#include<memory>

template<typename T>
struct Node {
	T data{};
	std::shared_ptr<Node<T>> next;

	Node(T val) : data{ val }, next{ nullptr } {}
};

template<typename T>

class LinkedList {
private:
	std::shared_ptr<Node<T>> head;
	
public:

	LinkedList() : head(nullptr) {}

	LinkedList(const std::initializer_list<T>& list) {
		for (const T& val : list) {
			insertAtLast(val);
		}
	}

	void display() {
		std::shared_ptr<Node<T>> ptr = head;
		while (ptr) {
			std::cout << ptr->data << " -> ";
			ptr = ptr->next;
		}
		std::cout << "NULL\n";
	}

	void insertAtLast(T val) {
		std::shared_ptr<Node<T>> n = std::make_shared<Node<T>>(val);
		if (!head) {
			head = n;
		}
		else {
			std::shared_ptr<Node<T>> ptr = head;
			while (ptr->next != nullptr) {
				ptr = ptr->next;
			}
			ptr->next = n;
		}
	}

	void insertAtFirst(T val) {
		std::shared_ptr<Node<T>> n = std::make_shared<Node<T>>(val);
		n->next = head;
		head = n;
	}

	void deleteAtLast() {
		std::shared_ptr<Node<T>> ptr = head;
		std::shared_ptr<Node<T>>ptr1 = head->next;

		while (ptr1->next) {
			ptr = ptr->next;
			ptr1 = ptr1->next;
		}
		ptr->next = ptr->next->next;
		ptr1 = nullptr;
	}

	void deleteAtFirst() {
		std::shared_ptr<Node<T>> ptr = head;
		head = head->next;
		ptr = nullptr;
	}
};

#endif