#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{


	try
	{
		int a,b;
		cin >> a >> b;
		int c = a / b;
		cout << c << endl;
	}
	catch (exception)
	{
		cerr << "error" << endl;
	}

	system("pause");
	//return 0;//main��������ֵ����ʡ�ԣ���ʱ�������Զ�����return 0;
	return EXIT_SUCCESS;
}