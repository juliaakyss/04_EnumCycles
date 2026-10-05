#include <iostream>
using namespace std;
int my_strlen(char str[])
{
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}
int main()
{
	//task1
	/*char str[255];
	cout << "Enter text : ";
	cin.getline(str, 255);
	int countA = 0;
	int countO = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (tolower(str[i]) == 'a' || tolower(str[i]) == 'à')
		{
			countA++;
		}
		else if (tolower(str[i]) == 'o' || tolower(str[i]) == 'î')
		{
			countO++;
		}
	}
	cout << "Count 'a' : " << countA << endl;
	cout << "Count 'o' : " << countO << endl;
	if (countA > countO)
	{
		cout << "More 'a'" << endl;
	}
	else if (countO > countA)
	{
		cout << "More 'o'" << endl;
	}
	else
	{
		cout << "Equal count" << endl;
	}*/
	//task2
	/*char str[255];
	cout << "Enter text : ";
	cin.getline(str, 255);
	int letters = 0;
	int digits = 0;
	int spaces = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
		{
			letters++;
		}
		else if (isdigit(str[i]))
		{
			digits++;
		}
		else if (isspace(str[i]))
		{
			spaces++;
		}
	}
	cout << "Letters : " << letters << endl;
	cout << "Digits  : " << digits << endl;
	cout << "Spaces  : " << spaces << endl;*/
	//task3
	/*char str[255];
	cout << "Enter text : ";
	cin.getline(str, 255);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isupper(str[i]))
		{
			str[i] = (char)tolower(str[i]);
		}
		else if (islower(str[i]))
		{
			str[i] = (char)toupper(str[i]);
		}
	}
	cout << str << endl;*/
	//task4
	char str[255];
	cout << "Enter text : ";
	cin.getline(str, 255);
	cout << "Length : " << my_strlen(str) << endl;
}
