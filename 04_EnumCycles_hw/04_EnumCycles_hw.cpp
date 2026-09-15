#include <iostream>
using namespace std;
int main()
{
	//task1
	/*float numbers = 14;
	while (numbers <= 123) {
		cout << "Number " << numbers << endl;
		numbers++;
	}*/
	//task2
	/*int numbers = 1;
	while (numbers <= 100) {
		if (numbers % 2 != 0) {
			cout << "Number " << numbers << endl;
		}
		numbers++;
	}*/
	//task3
	/*int count = 0;
	int negative_count = 0;
	int num;
	int n;
	cout << "Enter number of numbers (N > 0): ";
	cin >> n;
	cout << "Enter " << n << " numbers:" << endl;
	while (count < n) {
		cin >> num;
		if (num < 0) {
			negative_count += 1;
		}
		count++;
	}
	cout << "Number of negative numbers: " << negative_count << endl;*/
	//task4
	/*int count = 0;
	int product = 1;
	int num;
	int sum = 0;
	cout << "Enter 8 numbers:" << endl;
	while (count < 8) {
		cin >> num;
		product *= num;
		sum += num;
		count++;
	}
	cout<<"Product: " << product<<endl;
	float average = sum / 8;
	cout << "Average number: " << average << endl;*/
	//task5
	/*int count = 100;
	do {
		cout << count << endl;
		count -= 2;
	} while (count >= 2);
	cout << 1 << endl;*/
	//task6
	int count = 0;
	int product = 1;
	int num;
	cout << "Enter 5 numbers:" << endl;
	do {
		cin >> num;
		product *= num; 
		count++;        
	} while (count < 5);
	cout << "Product: " << product << endl;
}
