#include<iostream>
#include"people.h"
using namespace std;

people obj[2] = {
		people(227,123,777),
		people(526,456,888)
};

people::people(int n, int m, int q) {
	account_number = n;
	password = m;
	balance = q;
}

int people::get_account_number(void) {
	return account_number;
}

int people::get_password(void) {
	return password;
}

int people::get_balance(void) {
	return balance;
}