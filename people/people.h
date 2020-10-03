#pragma once
#if !defined(aaaa)
#define aaaa
#include "ATM.h"
/*用户类*/

class people {
protected:

public:
	people(int n, int m, int q); 
	int get_account_number(void);
	int get_password(void);
	int get_balance(void);
	void fu_passsword(int t);
	void fu_balance(int t);
private:
	int account_number;                //账号
	int password;                      //密码
	int balance;                       //余额
};
#endif
