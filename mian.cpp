#include <iostream>
using namespace std;

int card;                           //card为方便找到数组中的第几张卡
int function = 0;                   //控制整个系统退出运行的参数
/*用户类*/
class people {
protected:
	
public:
	people(int n, int m,int q) {       //构造函数
		account_number = n; 
		password = m;
		balance = q;
	}
	int get_account_number(void);
	int get_password(void);
	int get_balance(void);
private:
	int account_number;                //账号
	int password;                      //密码
	int balance;                       //余额
};

int people::get_account_number(void) {
	return account_number;
}
int people::get_password(void) {
	return password;
}
int people::get_balance(void) {
	return balance;
}
people obj[2] = {
		people(227,123,777),
		people(526,456,888)
};
/*ATM类*/
class ATM {
protected:

public:
	void better();
	void cin_account_number_s();
	void cin_password_s();
	void get_account_number_b(int i);//获取people类中的account_number
	void get_password_b(int i);      //获取people类中的password
	void ATM_function();             //显示主界面
	void print_message();            //打印信息
	void withdrawal_balance();       //取款
	void change_password();          //修改密码
	void get_balance_b(int i);

private:
	int password_b;
	int account_number_b;
	int password_s;
	int account_number_s;
	int balance_b;
	int withdrawal;                     //取款金额
};

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
	cout << "\n" << "按4退卡";
	cin >> function;
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
	cout << "按4退出";
	cin >> function;

}
void ATM::change_password() {
	cout << "修改的密码为：";
}
void ATM::ATM_function() {
	int key=1;
	cout << "按1查看信息\n";
	cout << "按2取款\n";
	cout << "按3修改密码\n";
	cout << "按4退出\n";
	while (key) {
		cout << "输入：";
		cin >> function;
		switch (function) {
		case 1:
			print_message();
		case 2:
			withdrawal_balance(); 
		case 3:
			change_password(); 
		case 4:
			key = 0;
		}

	}
}

int main() {
	ATM atm;
	atm.cin_account_number_s();
	atm.cin_password_s();
	atm.better();
	return 0;
}

