#include <iostream>
#include"people.h"
#include"ATM.h"
using namespace std;

int card;//card为方便找到数组中的第几张卡
int key_2 = 0;//控制整个系统退出运行的参数
int key_1 = 0;

int main() {
	ATM atm;
	atm.interface();//初始界面
	atm.ATM_function();
	return 0;
}

