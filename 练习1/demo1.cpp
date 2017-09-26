int getMaxOrMin(int *arr, int count, bool isMax)
{
	int temp = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (isMax && arr[i] > temp)
		{
			temp = arr[i];
		}
		else if (!isMax&& arr[i] < temp)
		{
			temp = arr[i];
		}
	}

	return temp;
}
#include<iostream>
using namespace std;
int main(char* args[])
{
	int arr[] = { 3,7,9,2,10 };

	bool isMax = false;

	cout << getMaxOrMin(arr, 5, isMax)<<endl;
	system("pause");
	return 0;
}