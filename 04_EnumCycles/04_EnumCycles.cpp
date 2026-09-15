#include <iostream>
using namespace std;
int main() {
	//task1
	/*float numbers = 1;
	while (numbers <= 100) {
		cout << "Number " << numbers << endl;
		numbers++;
	}*/
	//task2
	/*int numbers = 1;
	while (numbers <= 200) {
		if(numbers % 2 == 0){
			cout << "Number " << numbers << endl;
		}
		numbers++;
	}*/
	//task3
	/*int count = 0;
	int sum = 0;
	int num;
	int n;
	cout << "Enter number of numbers (N > 0): ";
	cin >> n;
	cout << "Enter " << n << " numbers:" << endl;
	while (count < n) {
		cin >> num;
		if (num % 2 == 0) {
			sum += num;
		}
		count++;
	}
		cout << "Sum of even numbers: " << sum << endl;*/
	//task4
	/*int sum = 0;
	for (int i = 1; i <= 12; i++) {
		sum += i;
	}
	cout << "Total number of strikes: " << sum << endl;*/
	//task5
	int sum = 0;
	int num = 1;
	cout << "Enter numbers:" << endl;
	for (int i = 0; num != 0; i++) {
		cin >> num;
		if (num != 0) {
			sum += num;
		}
	}
	cout << "Sum of all numbers: " << sum << endl;
}
