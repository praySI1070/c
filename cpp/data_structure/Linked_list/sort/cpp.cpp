#include "pray.h"
#include <cmath>

int len_no(Node* node) {
	Node* head = node;
	int count = 0;
	do {
		node = node->post;
		count++;
	} while (node != head);

	return count;
}

Node* serach_node(Node* node, int count) {
	for (int i = 1; i < count; i++) {
		node = node->post;
	}

	return node;
}

//��ü�Լ�
//���� �Ƚ���
Node* swap(Node* node, int a, int b, int len_node) {
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	else if (a == b) {
		println("���� �ڸ��Դϴ�.");
	}

	if (b > len_node) {
		println("������ ������ϴ�.");
		return node;
	}

	Node* a_node = serach_node(node, a);
	Node* b_node = serach_node(node, b);
	Node* temp = new Node;

	//temp = a->link
	temp->pre = a_node->pre;
	temp->post = a_node->post;

	//a = b
	(a_node->pre)->post = b_node;
	(a_node->post)->pre = b_node;
	a_node->pre = b_node->pre;
	a_node->post = b_node->post;

	//b = temp
	b_node->pre = temp->pre;
	b_node->post = temp->post;
	(a_node->pre)->post = a_node;
	(a_node->post)->pre = a_node;

	delete temp;

	if (a == 1) {
		return b_node;
	}

	return node;
}

//�����Լ�
Node* insert(Node* node, int a, int b, int len_node) {
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	else if (a == b) {
		println("���� �ڸ��Դϴ�.");
	}

	if (b > len_node) {
		println("������ ������ϴ�.");
		return node;
	}

	Node* a_node = serach_node(node, a);
	Node* b_node = serach_node(node, b);
	Node* temp = new Node;

	//temp = b->link
	temp->pre = b_node->pre;
	temp->post = b_node->post;

	//a ���� b
	b_node->pre = a_node->pre;
	b_node->post = a_node;
	(a_node->pre)->post = b_node;
	a_node->pre = b_node;


	//temp�翷 �̽�
	(temp->pre)->post = temp->post;
	(temp->post)->pre = temp->pre;

	delete temp;

	if (a == 1) {
		return b_node;
	}

	return node;
}

void print_name(Node* node,int count) {
	for (int i = 0; i < count; i++) {
		println(node->name);
		node = node->post;
	}
	
	return;
}

int exit_Linked(Node* node,int count) {
	int check = 0;
	Node* post = nullptr;

	for (int i = 0; i < count; i++) {
		post = node->post;
		delete node;
		node = post;
	}

	return 0;
}

double cal_distance(Node* node) {
	double cal = sqrt((node->x * node->x) + (node->y * node->y));

	return cal;
}

void Line() {
	for (int i = 0; i < 39; i++) {
		print("-");
	}
	println("-");

	return;
}

Node* sort_linked(Node* node, int count) {
	if (count == 1) {
		return node;
	}

	Node* curr = node->post;
	Node* pre = nullptr;
	Node* handle = nullptr;
	int count_pre_node = 1;
	bool test = false;
	//2���� ������ Ž��
	for (int count_node = 2; count_node <= count; count_node++) {
		handle = curr->pre;
		if (handle->distance > curr->distance) {
			//���� ����� �������� Ž���ؼ� �����庸�� ū ��带 Ž��
			for (count_pre_node = count_node - 1; count_pre_node > 0; count_pre_node--) {

				//���� ���� ���� ��� �� �ڷ� ����
				if (handle->distance < curr->distance) {
					break;
				}
				handle = handle->pre;
			}
			curr = curr->pre;
			count_pre_node++;
			node = insert(node, count_pre_node, count_node, count);
		}

		print_node(node, count);
		
		curr = curr->post;
	}

	return node;
}

void print_node(Node* pre, int count) {
	static int a = 0;
	a++;
	print("count_node");
	println(a);

	Line();
	for (int i = 0; i < count; i++) {
		printT(pre->name);
		printT(pre->x);
		printT(pre->y);
		println(pre->distance);
		Line();

		pre = pre->post;
	}

	return;
}