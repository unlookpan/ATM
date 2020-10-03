#include<iostream>
#include"ATM.h"
#include"people.h"
using namespace std;

extern int key;
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

void ATM::better() {                                          //登录验证函数
	int i;
	for (i = 0; i < 2; i++) {
		get_account_number_b(i);
		if (account_number_b == account_number_s) {
			get_password_b(i);
			if (password_b == password_s) {
				cout << "登录成功" << "\n";
				ATM_function();
				card = i;
			}
			else cout << "密码错误" << "\n";
		}
	}
}

void ATM::print_message() {
	cout << "账号:" << obj[card].get_account_number() << "\n";
	cout << "密码" << obj[card].get_password() << "\n";
	cout << "余额" << obj[card].get_balance() << "\n";
	cout << "\n" << "按0退卡";
	cin >> key;
}

void ATM::withdrawal_balance() {
	cout << "取款金额：";
	cin >> withdrawal;
	get_balance_b(card);
	balance_b = balance_b - withdrawal;
	if (balance_b < 0) {
		cout << "余额不足\n";
	}
	else {
		cout << "取款金额：" << withdrawal << "\n";
		cout << "余额：" << balance_b << "\n";
	}
	cout << "按0退出";
	cin >> key;

}

//void ATM::change_password(people &x) {
//	cout << "修改的密码为：";
//	cin >> cin_password;
//	cout << x.password;
//
//	cout << "按0退出" << key;
//}

void ATM::ATM_function() {
	cout << "按1查看信息\n";
	cout << "按2取款\n";
	cout << "按3修改密码\n";
	cout << "按0退出\n";
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
	cout << "欢迎下次使用";
}