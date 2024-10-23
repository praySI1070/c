#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <string>
#include <fstream>

#define txt_adr "data.txt"


//��ũ�� ����Ʈ ����ü
typedef struct Linked {
	int count = 0;
	string name = "";
	string phone_num = "";
	struct Linked* address = nullptr;
}Node;


//���ڿ� �޴� ����ü
typedef struct sl_str {
	string name;
	string phone_num;
}s_s;

//test�Լ�
void test();

// �ٱ߱� �Լ�
void Line();

//���ڿ� �ڸ��� �Լ�
s_s* str_slice(string data);

//���ڿ� ���� ��ȯ ���� �Լ�
int error_num(string qu);

//��ȣ ��ġ�°� Ȯ�� �Լ�
bool check_exist_num(Node* node, string qu);

//���� �ּҿ� ���ֱ� �Լ�
Node* value_input(Node* curr, s_s* si);

Node* start_read_node(Node* node);

void exit_write_node(Node* node);

#endif // LINKED_LIST_H