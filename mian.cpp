#include <iostream>
using namespace std;

/*用户类*/
class people {
protected:
	int account_number;
	int password;
public:
	people(int n, int m) {
		account_number = n;
		password = m;
	}
	int get_account_number(void);
	int get_password(void);
private:
	int i;
};

int people::get_account_number(void) {
	return account_number;
}
int people::get_password(void) {
	return password;
}

int main() {
	int i = 0;
	int password_b;
	int account_number_b;
	int password_s;
	int account_number_s;
	people obj[2] = {
		people(227,123),
		people(526,456)
	};
	
	//输入账号和密码
	cout << "请输入账号";
	cin >> account_number_s;
	cout << "请输入密码";
	cin >> password_s;
	for (i = 0; i < 2; i++) {
		account_number_b = obj[i].get_account_number();
		if (account_number_b == account_number_s) {
			password_b = obj[i].get_password();
			if (password_b == password_s)cout << "登录成功" << "\n";
			else cout << "密码错误" << "\n";
		}
	}

	for (i = 0; i < 2; i++) {
		cout << obj[i].get_account_number() << "\n" << obj[i].get_password() << "\n";
	}
	return 0;
}

