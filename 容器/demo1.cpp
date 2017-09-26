#include <vector>
#include <iostream>
#include <string>
using namespace std;

/************************************************************************/
/* vector支持快速随机访问                                                                     */
/************************************************************************/

int main()
{
	vector<string> vec;
	string str;
	for (int i = 0; i < 5; i++)
	{
		getline(cin, str);
		vec.push_back(str);
	}

	for (vector<string>::iterator it = vec.begin();it != vec.end();it++) {
		cout << it->c_str() << endl;
	}
	cout << vec.capacity() << endl;
	vec.reserve(10);
	cout << vec.capacity() << endl;
	system("pause");
	return 0;
}