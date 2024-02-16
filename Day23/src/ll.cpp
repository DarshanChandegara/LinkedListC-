//#include <iostream>
//#include<memory>
//#include "../include/ll.h"
//
//void LinkedList::display() {
//	std::shared_ptr<Node> ptr = head;
//	while (ptr) {
//		std::cout << ptr->data << " -> ";
//		ptr = ptr->next;
//	}
//	std::cout << "NULL\n";
//}
//
//LinkedList::LinkedList(const std::initializer_list<int>& list) {
//	for (auto& val : list) {
//		insertAtLast(val);
//	}
//}
//
//void LinkedList::insertAtLast(int val) {
//	std::shared_ptr<Node> n = std::make_shared<Node>(val);
//	if (!head) {
//		head = n;
//	}
//	else {
//		std::shared_ptr<Node> ptr = head;
//		while (ptr->next != nullptr) {
//			ptr = ptr->next;
//		}
//		ptr->next = n;
//	}
//}
//
//void LinkedList::insertAtFirst(int val) {
//	std::shared_ptr<Node> n = std::make_shared<Node>(val);
//	n->next = head;
//	head = n;
//}
//
//void LinkedList::deleteAtLast() {
//	std::shared_ptr<Node> ptr = head;
//	std::shared_ptr<Node>ptr1 = head->next;
//
//	while (ptr1->next) {
//		ptr = ptr->next;
//		ptr1 = ptr1->next;
//	}
//	ptr->next = ptr->next->next;
//	ptr1 = nullptr;
//}
//
//void LinkedList::deleteAtFirst() {
//	std::shared_ptr<Node> ptr = head;
//	head = head->next;
//	ptr = nullptr;
//}
//
