#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	cout << "\n------------------\n";
	cout << "Enter array elements\n";
	cout << "--------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void linearsearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "enter the element you want to search : ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << "Found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparation : " << ctr << endl;
	}
}