#include "pray.h"
#include <random>

int main()
{
	int count = -1;
	while (count != 0) {
		input(count, "��� �����ұ��?(1���̻�, 0�� ����)");
		if (count > 0) {
			break;
		}
		else if(count < 0) {
			println("�߸��� �����Դϴ�.");
		}
		else {
			println("����Ǿ����ϴ�.");
		}
	}
	

	//�õ尪 ����
	random_device rd;

	//���� ���� ���� �ʱ�ȭ
	mt19937 gen(rd());

	//0~100���� ���� ����
	uniform_int_distribution<int> dis(0, 100);

	Node* pre = new Node;
	pre->name = "S1";
	Node* node = pre;
	pre->x = dis(gen);
	pre->y = dis(gen);
	pre->distance = cal_distance(pre);

	if (count >= 2) {
		for (int i = 2; i <= count; i++) {
			Node* new_node = new Node;
			new_node->name = "S";
			new_node->name += to_string(i);
			new_node->x = dis(gen);
			new_node->y = dis(gen);
			new_node->distance = cal_distance(new_node);
			new_node->pre = pre;
			pre->post = new_node;
			pre = new_node;
		}
	}
	pre->post = node;
	node->pre = pre;


	pre = node;

	println("������");
	print_node(pre, count);

	//�����Լ�
	node = sort_linked(node,count);

	pre = node;
	for (int i = 0; i < 2; i++) {
		println("");
	}
	println("������");
	print_node(pre, count);

	exit_Linked(node,count);

	return 0;
}