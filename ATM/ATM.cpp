#include<iostream>
#include"ATM.h"
#include"people.h"
using namespace std;

extern int key;
extern int card;
extern people obj[2];

void ATM::cin_account_number_s() {
	cout << "�������˺�";
	cin >> account_number_s;
}

void ATM::cin_password_s() {
	cout << "����������";
	cin >> password_s;
}

void ATM::get_account_number_b(int i) {                       //��ȡpeople���е�account_number
	account_number_b = obj[i].get_account_number();
}

void ATM::get_password_b(int i) {                             //��ȡpassword
	password_b = obj[i].get_password();
}

void ATM::get_balance_b(int i) {
	balance_b = obj[i].get_balance();
}

void ATM::better() {                                          //��¼��֤����
	int i;
	for (i = 0; i < 2; i++) {
		get_account_number_b(i);
		if (account_number_b == account_number_s) {
			get_password_b(i);
			if (password_b == password_s) {
				cout << "��¼�ɹ�" << "\n";
				ATM_function();
				card = i;
			}
			else cout << "�������" << "\n";
		}
	}
}

void ATM::print_message() {
	cout << "�˺�:" << obj[card].get_account_number() << "\n";
	cout << "����" << obj[card].get_password() << "\n";
	cout << "���" << obj[card].get_balance() << "\n";
	cout << "\n" << "��0�˿�";
	cin >> key;
}

void ATM::withdrawal_balance() {
	cout << "ȡ���";
	cin >> withdrawal;
	get_balance_b(card);
	balance_b = balance_b - withdrawal;
	if (balance_b < 0) {
		cout << "����\n";
	}
	else {
		cout << "ȡ���" << withdrawal << "\n";
		cout << "��" << balance_b << "\n";
	}
	cout << "��0�˳�";
	cin >> key;

}

//void ATM::change_password(people &x) {
//	cout << "�޸ĵ�����Ϊ��";
//	cin >> cin_password;
//	cout << x.password;
//
//	cout << "��0�˳�" << key;
//}

void ATM::ATM_function() {
	cout << "��1�鿴��Ϣ\n";
	cout << "��2ȡ��\n";
	cout << "��3�޸�����\n";
	cout << "��0�˳�\n";
	cin >> key;
	while (key) {
		switch (key) {
		case 0:
			break;
		case 1:
			print_message();
			break;
		case 2:
			withdrawal_balance();
			break;
		case 3:
			//change_password(obj[card]);
			break;
		}
	}
	cout << "��ӭ�´�ʹ��";
}