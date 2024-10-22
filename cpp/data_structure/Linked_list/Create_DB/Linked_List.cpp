#include "./CookHeader.h"
#include <stdio.h>
#include <fstream>
#include <sstream>

#define txt_adr "data.txt"

//using namespace std;


//��ũ�� ����Ʈ ����ü
typedef struct Linked {
	int count = 0;
	string name ="";
	string phone_num ="";
	struct Linked* address = nullptr;
}Node;


//���ڿ� �޴� ����ü
typedef struct sl_str{
	string name;
	string phone_num;
}s_s;


//test�Լ�
void test() {
	println("test");
	return;
}


// �ٱ߱� �Լ�
void Line() {
	for(int i =0;i< 15;i++)
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
		default:
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
		curr->phone_num = "NULL";
	}

	return curr;
}


//���� ã���� Ȯ���ϴ� �Լ�
Node* search_way(Node* node, int num) {
	Node* curr = node;
	bool curr_check = false;
	string check = "";
	int same_name = 0;

	while (num != -1) {
		switch (num)
		{
		case 21:
			input(num, "ã������ ��ȣ�� �Է����ּ���.:  ");
			while (curr != nullptr) {
				if (curr->count == num) {
					curr_check = true;
					break;
				}

				curr = curr->address;
			}


			if (!curr_check) {
				curr = nullptr;
			}
			num = -1;
			break;
		case 22:
			input(check, "ã������ �̸��� �Է����ּ���.:  ");
			while (curr != nullptr) {
				if (curr->name == check) {
					same_name++;
				}


				curr = curr->address;
			}

			if (same_name > 0) {
				curr_check = true;
				curr = node;
				if (same_name == 1) {
					while (curr != nullptr) {
						if (curr->name == check) {
							break;
						}


						curr = curr->address;
					}
					num = -1;
					break;
				}
				else {
					println("�̸��� ��ġ�� ����� �ֽ��ϴ�.");
					Line();
					while (curr != nullptr) {
						if (curr->name == check) {
							print(curr->count);
							print("\t");
							print(curr->name);
							print("\t");
							println(curr->phone_num);
							Line();
						}


						curr = curr->address;
					}
					curr = node;
					num = 21;
					break;
				}
			}

			if (!curr_check) {
				curr = nullptr;
			}
			break;
		case 23:
			input(check, "ã������ ��ȭ��ȣ�� �Է����ּ���.:  ");
			while (curr != nullptr) {
				if (curr->phone_num == check) {
					curr_check = true;
					break;
				}


				curr = curr->address;
			}


			if (!curr_check) {
				curr = nullptr;
			}
			num = -1;
			break;
		default:
			println("�����Լ� ���� �̻��� �����߻�");
			num = -1;
			break;
		}
	}



	return curr;
}


//���� �Լ�
int start() {
	string qu = "";
	int check = 0;

	while (true) {
		println("�ϰ� ���� �۾��� ��ȣ�� �Է��ϼ���.");
		input(qu, "1.�߰�, 2.����, 3.����, 4.����, 5.�˻�, 8.���� ��� ,9.����:  ");

		check = error_num(qu);
		if (check == -1) {
			continue;
		}
		else {
			break;
		}
	}

	return check;
}


//�߰� �Լ�
Node* add(Node* node,s_s* si) {

	if (node == nullptr) {
		node = new Node;

		node->count = 1;
		node->name = si->name;
		node->phone_num = si->phone_num;
		if (si->phone_num == "") {
			node->phone_num = "NULL";
		}

		delete si;

		return node;
	}
	else {
		Node* curr = node;
		Node* pre = curr;

		while (curr->address != nullptr) {
			curr = curr->address;
			pre = curr;
		}
		curr = new Node;
		pre->address = curr;
		
		curr = value_input(curr, si);
		curr->count = pre->count + 1;

		delete si;

		return node;
	}
}


//���� ���� �Լ�
int check_modify(Node* node) {
	int check = -1;
	string qu = "";

	while (check == -1) {
		input(qu, "ã�� ����� �������ּ���. 1.��ȣ, 2.�̸�, 3.�޴�����ȣ, 4.�ڷΰ���:  ");
		check = error_num(qu);
		if (check == -1) {
			continue;
		}
		else {
			check += 20;
			break;
		}
	}

	return check;
}


//���� �Լ�
Node* modify(Node* node, int num) {
	string check = "";
	string data = "";
	s_s* si = nullptr;
	Node* curr = node;
	bool curr_check = false;
	bool exist_num = true;
	int same_name = 0;

	curr = search_way(node,num);

	if (curr == nullptr) {
		println("ã���ô� �ڷᰡ �����ϴ�.");
	}
	else {
		while (exist_num) {
			println("�����Ϸ��� ���� �Է����ּ���.");
			input(data, "ex)������,010-1234-5678\n");
			si = str_slice(data);


			exist_num = check_exist_num(node,si->phone_num);

			//���� �����Ϸ��� �ڷ�� ��ȣ�� ������ ��� -> �̸��� ����
			if (si->phone_num == curr->phone_num) {
				exist_num = false;
			}

			if (exist_num) {
				println("�̹� �����ϴ� ��ȭ��ȣ�Դϴ�.");
			}
		}
		
		curr = value_input(curr, si);
	}

	delete si;

	return node;
}


//���� �Լ�
Node* insert(Node* node,s_s* si) {
	int count = 0;
	bool exist_value = false;
	Node* curr = node;
	Node* pre = node;
	Node* tail = nullptr;

	input(count, "���°�� �������� �����ּ���.:  ");


	while (curr != nullptr) {	//count������ ���� �ִ��� Ȯ��
		if (curr->count == count) {
			exist_value = true;
			break;
		}

		pre = curr;
		curr = curr->address;
	}


	if (exist_value) {
		if (curr->address != nullptr) {
			tail = curr;
		}

		curr = new Node;

		if (count == 1) {
			curr->count = 1;
			curr = value_input(curr, si);
			curr->address = tail;
			node = curr;

			while (tail != nullptr) {

				tail->count = curr->count + 1;
				curr = tail;
				tail = tail->address;
			}
		}
		else {
			curr = value_input(curr, si);
			pre->address = curr;
			curr->address = tail;

			while (curr != nullptr) {
				curr->count = pre->count + 1;
				pre = curr;
				curr = curr->address;
			}
		}
	}

	return node;
}


//���� �Լ�
Node* del_node(Node* node, int check) {
	Node* curr = node;
	Node* pre = node;
	Node* tail = nullptr;
	int temp = 0;
	curr = search_way(node, check);

	//curr�� head���
	if (curr == node) {
		pre = curr;
		curr = curr->address;
		tail = curr;
		delete pre;

		while (curr != nullptr) {
			temp++;
			curr->count = temp;
			curr = curr->address;
		}

		return tail;
	}
	else {
		while (pre->address != curr) {
			pre = pre->address;
		}

		tail = curr->address;
		delete curr;
		pre->address = tail;

		temp = pre->count;
		while (tail != nullptr) {
			temp++;
			tail->count = temp;
			tail = tail->address;
		}
	}

	return node;
}


//�˻� �Լ�
void search(Node* node, int check) {
	Node* curr = node;

	curr = search_way(node, check);

	cout << "\n";
	Line();
	print(curr->count);
	print('\t');
	print(curr->name);
	print("\t");
	println(curr->phone_num);
	Line();

	return;
}


//���� ��� �Լ�
void all_print(Node* node) {
	cout << "\n";
	Line();
	int count = 1;

	if (node != nullptr) {
		do {
			print(node->count);
			print("\t");
			print(node->name);
			print("\t");
			println(node->phone_num);
			Line();
			node = node->address;
		} while (node != nullptr);
	}
	else {
		Line();
	}
	cout << "\n";

	return;
}


//���� �ÿ� delete�Լ�
void delete_node(Node* node) {
	Node* next = nullptr;

	while (node != nullptr) {
		next = node->address;

		delete node;

		node = next;
	}

	return;
}


int main()
{
	int check= 0;

	Node* node = nullptr;
	string data = "";
	s_s* si = nullptr;
	bool exist_num = true;

	while (check != 9) {
		check = start();

		switch (check)
		{	
		case 1:	//�߰�
			exist_num = true;
			while (exist_num) {
				println("�߰��Ϸ��� ���� �Է����ּ���.");
				input(data, "ex)������,010-1234-5678\n");
				si = str_slice(data);
				exist_num = check_exist_num(node, si->phone_num);

				if (exist_num) {
					println("�̹� �����ϴ� ��ȭ��ȣ�Դϴ�.");
				}
			}
			node = add(node,si);
			break;
		case 2:	//����
			if (node == nullptr) {
				println("������ ���� �����ϴ�.");
				break;
			}
			check = check_modify(node);
			if (check == 24) {
				break;
			}
			node = modify(node,check);
			break;
		case 3:	// ����
			exist_num = true;
			while (exist_num) {
				println("�����Ϸ��� ���� �Է����ּ���.");
				input(data, "ex)������,010-1234-5678\n");
				si = str_slice(data);
				exist_num = check_exist_num(node, si->phone_num);

				if (exist_num) {
					println("�̹� �����ϴ� ��ȭ��ȣ�Դϴ�.");
				}

			}

			node = insert(node,si);
			break;
		case 4:	// ����
			if (node == nullptr) {
				println("������ ���� �����ϴ�.");
				break;
			}
			check = check_modify(node);
			if (check == 24) {
				break;
			}
			node = del_node(node, check);

			break;
		case 5:	//�˻�
			if (node == nullptr) {
				println("�˻��� ���� �����ϴ�.");
				break;
			}
			check = check_modify(node);
			if (check == 24) {
				break;
			}
			search(node, check);

			break;
		case 8:
			all_print(node);
			break;
		case 9:	//����
			println("����Ǿ����ϴ�.");
			delete_node(node);
			break;
		default:
			println("�ٽ� �������ּ���.");
			continue;
		}
	}


	return 0;
}