#pragma once
#if !defined(aaaa)
#define aaaa
#include "ATM.h"
/*�û���*/

class people {
protected:

public:
	people(int n, int m, int q); 
	int get_account_number(void);
	int get_password(void);
	int get_balance(void);
	//friend ATM;
private:
	int account_number;                //�˺�
	int password;                      //����
	int balance;                       //���
};
#endif