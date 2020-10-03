#pragma once
#if !defined(bbbb)
#define bbbb
//#include "people.h"
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
	//void change_password(people &x);          //修改密码
	void get_balance_b(int i);

private:
	int password_b;
	int account_number_b;
	int password_s;
	int account_number_s;
	int balance_b;
	int withdrawal;                     //取款金额
	int cin_password;
};

#endif