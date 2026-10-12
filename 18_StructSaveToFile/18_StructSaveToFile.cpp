#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //task1
    /*const char* filename = "text.txt";
    ofstream outFile(filename, ios_base::out);
    if (!outFile.is_open())
    {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }
    cout << "Enter 5 lines of text:" << endl;
    for (int i = 1; i <= 5; i++)
    {
        char buff[250];
        cout << "Line " << i << ": ";
        cin.getline(buff, 250);
        outFile << buff << endl;
    }
    outFile.close();
    cout << "\nSuccessfully written 5 lines to " << filename << endl;*/
    //task2
    const char* filename = "text.txt";
    ifstream inFile(filename, ios_base::in);
    if (!inFile.is_open())
    {
        cout << "File not found!" << endl;
        return 1;
    }
    cout << "Reading file content" << endl;
    char buff[250];
    int lineCount = 0;
    while (inFile.getline(buff, 250))
    {
        lineCount++;
        cout << lineCount << ": " << buff << endl;
    }
    inFile.close();
    if (lineCount == 0)
    {
        cout << "File is empty." << endl;
    }
}

