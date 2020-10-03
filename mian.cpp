#include <iostream>
#include"people.h"
#include"ATM.h"
using namespace std;

int card;//card为方便找到数组中的第几张卡
int key = 0;//控制整个系统退出运行的参数

int main() {
	ATM atm;
	atm.cin_account_number_s();
	atm.cin_password_s();
	atm.better();
	return 0;
}

