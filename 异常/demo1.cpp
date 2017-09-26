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
	//return 0;//main函数返回值可以省略，此时编译器自动插入return 0;
	return EXIT_SUCCESS;
}