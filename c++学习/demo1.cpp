#include<iostream>
using namespace std;
int main(char* args[]) {
	cout << "������һ��������" << endl;
	int x = 0;
	cin >> x;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;
	cout << "������һ������ֵ(0,1):" << endl;
	bool flag = false;
	cin >> flag;
	cout << boolalpha << flag << endl;

	system("pause");
	return 0;
}