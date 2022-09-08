/*Write a program using class to accept 5 numbers from user and display largest, second
largest and smallest, second smallest and middle number among five.*/

#include <iostream>
using namespace std;
class num
{
private:
	int arr[5] = {0, 0, 0, 0, 0};

public:
	void swap(int &a, int &b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	void input()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Enter Number " << i + 1 << " : ";
			cin >> arr[i];
		}
		cout << "--------------------\n";
	}
	void sort()
	{

		for (int i = 0; i < 5; i++)
		{
			for (int j = i; j < 5; j++)
			{
				if (arr[i] < arr[j])
					swap(arr[i], arr[j]);
			}
		}
	}
	void display()
	{
		cout << "Largest number : " << arr[0] << endl;
		cout << "Second largest number : " << arr[1] << endl;
		cout << "Middle number : " << arr[2] << endl;
		cout << "Second smallest number : " << arr[3] << endl;
		cout << "Smallest number : " << arr[4] << endl;
		cout << "--------------------\n";
	}
};

int main()
{
	cout << "--------------------\n";
	num test;
	test.input();
	test.sort();
	test.display();
}
