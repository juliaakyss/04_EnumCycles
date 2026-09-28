#include <iostream>
#include <iomanip>
using namespace std;
void InitArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}

void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------------" << endl << endl;
}
void FillRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}
//task1
int** AddRowStart(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows + 1];
	temp[0] = new int[cols];
	FillRow(temp[0], cols);
	for (int i = 0; i < rows; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[] arr;
	rows++;
	return temp;
}
//task2
int** DeleteRowStart(int** arr, int& rows, int cols)
{
	if (rows <= 0) return arr;
	int** temp = new int* [rows - 1];
	delete[] arr[0];
	for (int i = 1; i < rows; i++)
	{
		temp[i - 1] = arr[i];
	}
	delete[] arr; 
	rows--;      
	return temp;
}
//task3
int** DeleteRowByPosition(int** arr, int& rows, int cols, int pos)
{
	if (pos < 0 || pos >= rows || rows <= 0) return arr;
	int** temp = new int* [rows - 1];
	delete[] arr[pos];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = pos + 1; i < rows; i++)
	{
		temp[i - 1] = arr[i];
	}
	delete[] arr; 
	rows--;  
	return temp;
}
//task4
int** AddColumnStart(int** arr, int rows, int& cols)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
		temp[i][0] = rand() % 10;
		for (int j = 0; j < cols; j++)
		{
			temp[i][j + 1] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr; 
	cols++;       
	return temp;
}
int main()
{
	int rows = 3;
	int cols = 4;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		FillRow(arr[i], cols);
	}
	cout << "Original array:" << endl;
	ShowArray(arr, rows, cols);
	arr = AddRowStart(arr, rows, cols);
	cout << "Array after new row in the begining:" << endl;
	ShowArray(arr, rows, cols);
	arr = DeleteRowStart(arr, rows, cols);
	cout << "Array after deleting first row:" << endl;
	ShowArray(arr, rows, cols);
	int pos = 2;
	cout << "Delete row by index " << pos << ":" << endl;
	arr = DeleteRowByPosition(arr, rows, cols, pos);
	ShowArray(arr, rows, cols);
	arr = AddColumnStart(arr, rows, cols);
	cout << "Array after new column in the begining:" << endl;
	ShowArray(arr, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}
