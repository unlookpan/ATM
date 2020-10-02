#include <iostream>
using namespace std;

//people obj[2] = {
//		people(227,123),
//		people(526,456)
//};
/*”√ªß¿‡*/
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
/*ATM¿‡*/
//class ATM {
//protected:
//
//public:
//	void better();
//	void cin_account_number_s();
//	void cin_password_s();
//	void get_account_number_b(int i);
//	void get_password_b(int i);
//
//private:
//	int password_b;
//	int account_number_b;
//	int password_s;
//	int account_number_s;
//};
//
//void ATM::cin_account_number_s() {
//	cout << "«Î ‰»Î’À∫≈";
//	cin >> account_number_s;
//}
//void ATM::cin_password_s() {
//	cout << "«Î ‰»Î√‹¬Î";
//	cin >> password_s;
//}
//void ATM::get_account_number_b(int i) {
//	account_number_b = obj[i].get_account_number();
//}
//void ATM::get_password_b(int i) {
//
//}
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
	//ATM atm;
	// ‰»Î’À∫≈∫Õ√‹¬Î
	cout << "«Î ‰»Î’À∫≈";
	cin >> account_number_s;
	cout << "«Î ‰»Î√‹¬Î";
	cin >> password_s;
	for (i = 0; i < 2; i++) {
		account_number_b = obj[i].get_account_number();
		if (account_number_b == account_number_s) {
			password_b = obj[i].get_password();
			if (password_b == password_s)cout << "µ«¬º≥…π¶" << "\n";
			else cout << "√‹¬Î¥ÌŒÛ" << "\n";
		}
	}

	for (i = 0; i < 2; i++) {
		cout << obj[i].get_account_number() << "\n" << obj[i].get_password() << "\n";
	}
	return 0;
}

