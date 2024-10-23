#include "printT.h"
#include "Linked_list.h"

void ensure_file_exists(const string& filename) {
	// ������ �������� ������ ����
	ofstream file(filename, ios::app); // ios::app �÷��׷� �߰� ���� ����
	if (!file) {
		cerr << "���� ���� ����!" << endl;
		exit(1);
	}
}

Node* start_read_node(Node* node) {
	string line = "";
	s_s* si = nullptr;
	int count = 1;
	Node* pre = node;
	Node* curr = nullptr;

	ensure_file_exists("data.txt");

	ifstream file("data.txt");	//���Ͽ���, ������ ����
	if (file.is_open()) {
		while (getline(file, line)) {
			si = str_slice(line);
			if (node == nullptr) {
				node = new Node;
				node->count = count;
				node->name = si->name;
				node->phone_num = si->phone_num;
				if (node->phone_num == "None") {
					node->phone_num = "Null";
				}
				pre = node;
			}
			else {
				curr = new Node;
				pre->address = curr;
				curr->count = count;
				curr->name = si->name;
				curr->phone_num = si->phone_num;
				if (node->phone_num == "None") {
					node->phone_num = "Null";
				}
				pre = curr;
			}
			count++;
		}
		file.close();
	}
	else {
		println("������ ������");
		exit(1);
	}

	return node;
}


void exit_write_node(Node* node) {
	Node* next = nullptr;
	string line;
	ofstream file("data.txt");
	if (file.is_open()) {
		while (node != nullptr) {
			if (node->phone_num == "NULL") {
				node->phone_num = "None";
			}
			file << node->name << ',' << node->phone_num << endl;
			next = node;
			node = node->address;
			delete next;
		}
		file.close();
		println("�������� �Ϸ�");
	}
	else {
		println("���Ͽ��� ����");
		exit(1);
	}


	return;
}


////���� �ÿ� delete�Լ�
//void delete_node(Node* node) {
//	Node* next = nullptr;
//
//	while (node != nullptr) {
//
//		next = node->address;
//
//		delete node;
//
//		node = next;
//	}
//
//	return;
//}