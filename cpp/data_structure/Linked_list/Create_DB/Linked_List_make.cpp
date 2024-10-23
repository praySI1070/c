#include "printT.h"
#include "Linked_list.h"
#include <sstream>


//test�Լ�
void test() {
	println("test");
	return;
}


// �ٱ߱� �Լ�
void Line() {
	for (int i = 0; i < 15; i++)
		print("-");
	printf("\n");

	return;
}


//���ڿ� �ڸ��� �Լ�
s_s* str_slice(string data) {
	istringstream data_slice(data);
	string temp;
	s_s* sl = new s_s;

	int count = 0;
	while (getline(data_slice, temp, ',')) {
		switch (count)
		{
		case 0:
			sl->name = temp;
			break;
		case 1:
			sl->phone_num = temp;
			break;
		default:
			println("�޸����� ������ �̻��մϴ�.");
			break;
		}
		count++;
	}

	return sl;
}


//���ڿ� ���� ��ȯ ���� �Լ�
int error_num(string qu) {
	int check = 0;

	try {
		check = stoi(qu);
	}
	catch (invalid_argument& e) {		// &��������
		println("���ڷθ� �Է����ּ���.");
		check = -1;
	}
	catch (out_of_range& e) {
		println("������ ������ϴ�.");
		check = -1;
	}


	return check;
}


//��ȣ ��ġ�°� Ȯ�� �Լ�
bool check_exist_num(Node* node, string qu) {
	while (node != nullptr) {
		if (node->phone_num == qu) {
			return true;
		}

		node = node->address;
	}


	return false;
}


//���� �ּҿ� ���ֱ� �Լ�
Node* value_input(Node* curr, s_s* si) {
	curr->name = si->name;
	curr->phone_num = si->phone_num;
	if (si->phone_num == "") {
		curr->phone_num = "None";
	}

	return curr;
}