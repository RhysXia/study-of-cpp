#include<iostream>
using namespace std;

/*
������Ŀ���ǰ���const���εı���ͨ��ǿ������ת���޸ĵ�
ע�⣺
	����aǰ����const��
	���б�������ֱ�Ӱ�a��������1��
	�������a�Ľ������1
*/
int main()
{
	const int a = 1;
	
	const int *p = &a;

	cout << "û���޸�ǰ��" << a << endl;

	int *q = const_cast<int*> (p);
	*q = 20;
	cout << "�޸ĺ�" << a << endl;

	cout << a << "," << *p << "," << *q << endl;
	cout << &a << "," << q << "," << p << endl;

	system("pause");
	return 0;
}