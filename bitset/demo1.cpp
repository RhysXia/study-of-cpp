#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	bitset<32> bit(0xffffff);


	cout << "�Ƿ���1��" << bit.any() << endl;
	cout << "�Ƿ�û��1��" << bit.none() << endl;
	size_t count = bit.count();
	cout << "1�ĸ�����" << count << endl;
	size_t size = bit.size();
	cout << "��С��" << size << endl;

	unsigned long num = bit.to_ulong();

	cout << "����Ϊ��" << num << endl;
	system("pause");
	return 0;
}