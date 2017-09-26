#include<fstream>
#include <iostream>
using namespace std;

int main() {
	fstream strem;
	
	strem.open("F:\\±Ê¼Ç\\qqAAA009B7071ABB1F3A80B997C6387E80\\339A0A671FD14C8394D9F98F2450E3B1\\lesson1.md",fstream::in|fstream::binary);
	if (strem) {
		char buffer[1024] = { 0 };
		while (!strem.eof())
		{
			strem.getline(buffer, 1024);
			wcout << buffer << endl;
		}
	}

	system("pause");
	return 0;
}
