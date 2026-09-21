#include <iostream>
using namespace std;
int main()
{
	const int MONTHS = 12;
	double array[MONTHS];
	for (int i = 0; i < MONTHS; i++)
	{
		cout << "Enter profit for " << i + 1 << " month: ";
		cin >> array[i];
	}
	int start_month, end_month;
	cout << "Enter start month: ";
	cin >> start_month;
	cout << "Enter end month: ";
	cin >> end_month;
	int start_index = start_month - 1;
	int end_index = end_month - 1;
	double max_profit = array[start_index];
	double min_profit = array[start_index];
	int max_month = start_month;
	int min_month = start_month;
	for (int i = start_index; i <= end_index; i++)
	{
		if (array[i] > max_profit)
		{
			max_profit = array[i];
			max_month = i + 1; 
		}
		if (array[i] < min_profit)
		{
			min_profit = array[i];
			min_month = i + 1;
		}
	}
	cout << "Max profit: " << max_profit << " (month " << max_month << ")" << endl;
	cout << "Minimum profit: " << min_profit << " (month " << min_month << ")" << endl;
}
