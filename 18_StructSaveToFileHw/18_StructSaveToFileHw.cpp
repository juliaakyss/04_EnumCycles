#include <iostream>
#include <fstream>
using namespace std;
void WriteShoppingList()
{
    const char* filename = "shopping_list.txt";
    ofstream outFile(filename, ios_base::out);
    if (!outFile.is_open())
    {
        cout << "Error: Could not open or create " << filename << "!" << endl;
        return;
    }
    cout << "Enter 4 products:" << endl;
    for (int i = 1; i <= 4; i++)
    {
        char product[100];
        cout << "Product " << i << ": ";
        cin.getline(product, 100);
        outFile << product << endl;
    }
    outFile.close();
    cout << "Shopping list successfully saved to " << filename << endl;
}
void ReadShoppingList()
{
    const char* filename = "shopping_list.txt";
    ifstream inFile(filename, ios_base::in);
    if (!inFile.is_open())
    {
        cout << "Error: File " << filename << " not found!" << endl;
        return;
    }
    cout << "\nSHOPPING LIST" << endl;
    char buff[100];
    int count = 0;
    while (inFile.getline(buff, 100))
    {
        count++;
        cout << count << ". " << buff << endl;
    }
    inFile.close();
    if (count == 0)
    {
        cout << "List is empty." << endl;
    }
}
void WriteNumbers()
{
    const char* filename = "numbers.txt";
    ofstream outFile(filename, ios_base::out);

    if (!outFile.is_open())
    {
        cout << "Error: Could not open or create " << filename << "!" << endl;
        return;
    }

    cout << "Enter 3 favorite numbers:" << endl;
    for (int i = 1; i <= 3; i++)
    {
        int number;
        cout << "Number " << i << ": ";
        cin >> number;
        outFile << number << endl;
    }

    outFile.close();
    cout << "Numbers successfully saved to " << filename << endl;
}
void ReadAndSumNumbers()
{
    const char* filename = "numbers.txt";
    ifstream inFile(filename, ios_base::in);
    if (!inFile.is_open())
    {
        cout << "Error: File " << filename << " not found!" << endl;
        return;
    }
    int number;
    int sum = 0;
    int count = 0;
    while (inFile >> number)
    {
        sum += number;
        count++;
    }
    inFile.close();
    if (count == 0)
    {
        cout << "File is empty or contains no valid numbers." << endl;
    }
    else
    {
        cout << "\nTotal numbers read: " << count << endl;
        cout << "Sum of all numbers: " << sum << endl;
    }
}
int main()
{
    WriteShoppingList();
    ReadShoppingList();
    WriteNumbers();
    ReadAndSumNumbers();
}