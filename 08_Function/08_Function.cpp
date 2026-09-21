#include <iostream>
using namespace std;
//task1
void DrawRectangle(int height, int width){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
//task2
double Factorial(int n){
    double fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
//task3
bool IsPrime(int number){
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}
//task4
void FindMinMax(int arr[], int size){
    int minVal = arr[0], maxVal = arr[0];
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] < minVal){
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    cout << "Minimum: value = " << minVal << ", index = " << minIndex << endl;
    cout << "Maximum: value = " << maxVal << ", index = " << maxIndex << endl;
}
void InitArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = rand() % 90 + 10;
    }
}
void ShowArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
//task5
double Cube(int number){
    return number * number * number;
}
//task6
bool IsPositive(int number){
    return number >= 0;
}
int main()
{
    DrawRectangle(4, 5);
    cout << endl;
    int numFact = 5;
    cout << numFact << "! = " << Factorial(numFact) << endl;
    int testNum = 16;
    if (IsPrime(testNum))
        cout << testNum << " is a prime number." << endl;
    else
        cout << testNum << " is not a prime number" << endl;
    cout << endl;
    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    cout << "Array: ";
    ShowArray(arr, size);
    FindMinMax(arr, size);
    cout << endl;
    int value = 3;
    cout << "Cube of " << value << " = " << Cube(value) << endl;
    cout << endl;
    int number = -7;
    if (IsPositive(number))
        cout << "Number " << number << " is positive" << endl;
    else
        cout << "Number " << number << " is negative" << endl;
}
