#include <iostream>
using namespace std;
int* CreateArray(int size)
{
    return new int[size];
}
void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100; 
    }
}
void ShowArray(const int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* AddNewElement(int* arr, int& size, int number)
{
    int* temp = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    temp[size] = number;
    delete[] arr;
    size++;
    return temp;
}
int main()
{
    int* pInt = new int;
    double* pDouble = new double;
    float* pFloat = new float;
    *pInt = 4;
    *pDouble = 2.5;
    *pFloat = 1.5;
    double product = (*pInt) * (*pDouble) * (*pFloat);
    cout << "Values:" << endl;
    cout << "Int: " << *pInt << endl;
    cout << "Double: " << *pDouble << endl;
    cout << "Float: " << *pFloat << endl;
    cout << "\nProduct: " << product << endl;
    delete pInt;
    delete pDouble;
    delete pFloat;

    srand(static_cast<unsigned int>(time(0)));
    int size = 5;
    int* arr = CreateArray(size);
    InitArray(arr, size);
    cout << "Array before changes: ";
    ShowArray(arr, size);
    int newElement = 77;
    arr = AddNewElement(arr, size, newElement);
    cout << "Array after new element " << newElement << ": ";
    ShowArray(arr, size);
    delete[] arr;
}
