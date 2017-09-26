#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	bitset<32> bit(0xffffff);


	cout << "是否有1：" << bit.any() << endl;
	cout << "是否没有1：" << bit.none() << endl;
	size_t count = bit.count();
	cout << "1的个数：" << count << endl;
	size_t size = bit.size();
	cout << "大小：" << size << endl;

	unsigned long num = bit.to_ulong();

	cout << "数字为：" << num << endl;
	system("pause");
	return 0;
}