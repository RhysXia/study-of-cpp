#include<iostream>
using namespace std;

/*
本程序目的是把有const修饰的变量通过强制类型转换修改掉
注意：
	用于a前面有const，
	所有编译器中直接把a当作数字1，
	所以输出a的结果总是1
*/
int main()
{
	const int a = 1;
	
	const int *p = &a;

	cout << "没有修改前：" << a << endl;

	int *q = const_cast<int*> (p);
	*q = 20;
	cout << "修改后：" << a << endl;

	cout << a << "," << *p << "," << *q << endl;
	cout << &a << "," << q << "," << p << endl;

	system("pause");
	return 0;
}