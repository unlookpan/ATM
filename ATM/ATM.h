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
	void get_account_number_b(int i);//��ȡpeople���е�account_number
	void get_password_b(int i);      //��ȡpeople���е�password
	void ATM_function();             //��ʾ������
	void print_message();            //��ӡ��Ϣ
	void withdrawal_balance();       //ȡ��
	//void change_password(people &x);          //�޸�����
	void get_balance_b(int i);

private:
	int password_b;
	int account_number_b;
	int password_s;
	int account_number_s;
	int balance_b;
	int withdrawal;                     //ȡ����
	int cin_password;
};

#endif