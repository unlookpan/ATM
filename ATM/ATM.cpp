#include<iostream>
#include"ATM.h"
#include"people.h"
using namespace std;

extern int key_1;
extern int key_2;
extern int card;
extern people obj[2];

void ATM::cin_account_number_s() {
	cout << "请输入账号";
	cin >> account_number_s;
}

void ATM::cin_password_s() {
	cout << "请输入密码";
	cin >> password_s;
}

void ATM::get_account_number_b(int i) {                       //获取people类中的account_number
	account_number_b = obj[i].get_account_number();
}

void ATM::get_password_b(int i) {                             //获取password
	password_b = obj[i].get_password();
}

void ATM::get_balance_b(int i) {
	balance_b = obj[i].get_balance();
}

void ATM::get_in() {                                          //登录验证函数
	int i;
	int t=1,r=1;
	while (t) {
		cout << "\n";
		cin_account_number_s();
		for (i = 0; i < 2; i++) {
			get_account_number_b(i);
			if (account_number_b == account_number_s) { 
				t = 0; break; 
			} 
			
		}
		if(t)cout << "账号不存在\n";
	}
	while (r) {
		cin_password_s();
		get_password_b(i);
		if (password_b == password_s) {
			r = 0;
		}
		else {
			cout << "密码错误\n";
			cout << "您可以修改密码\n";
			change_password();
		}
	}
	cout << "\n登录成功\n" ;
	card = i;
	key_1 = 9;
}

void ATM::print_message() {
	cout << "\n";
	cout << "账号:" << obj[card].get_account_number() << "\n";
	cout << "密码" << obj[card].get_password() << "\n";
	cout << "余额" << obj[card].get_balance() << "\n";
	cout << "按2取款\n";
	cout << "按0退卡\n";
	cin >> key_2;
}

void ATM::withdrawal_balance() {
	cout << "\n";
	cout << "取款金额：";
	cin >> withdrawal;
	get_balance_b(card);
	balance_b = balance_b - withdrawal;
	obj[card].fu_balance(balance_b);
	if (balance_b < 0) {
		cout << "余额不足\n";
	}
	else {
		cout << "余额：" << balance_b << "\n";
	}
	cout << "按1查询信息\n";
	cout << "按0退出\n";
	cin >> key_2;
}

void ATM::change_password() {
	int i;
	int t = 1;
	while (t) {
		cout << "\n";
		cin_account_number_s();
		for (i = 0; i < 2; i++) {
			get_account_number_b(i);
			if (account_number_b == account_number_s) {
				t = 0; break;
			}
		}
		if(t)cout << "账号不存在\n";
	}
	cout << "修改的密码为：";
	cin >> cin_password;
	obj[i].fu_passsword(cin_password);
	cout << "修改成功\n";
	get_in();
}

void ATM::ATM_function() {
	if (key_1==9) {
		cout << "\n";
		cout << "按1查看信息\n";
		cout << "按2取款\n";
		cout << "按0退出\n";
		cin >> key_2;
		while (key_2) {
			switch (key_2) {
			case 0:
				break;
			case 1:
				print_message();
				break;
			case 2:
				withdrawal_balance();
				break;
			}
		}
		cout << "欢迎下次使用";
	}
}

void ATM::interface() {
	cout << "欢迎来到ATM取款机\n";
	cout << "按1登录\n";
	cout << "按2修改密码\n";
	cout << "按0退出\n";
	cin >> key_1;
	switch (key_1) {
	case 0:
		break;
	case 1:
		get_in();
		break;
	case 2:
		change_password();
		break;
	}
}
