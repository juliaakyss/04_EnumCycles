#include <iostream>
using namespace std;
int main()
{
   //task1
    /*const int SIZE = 10;
    int arr[SIZE];
    float product = 1;
    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        product *= arr[i];
    }
    cout << "Array: "<<endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
    cout << "\nProduct of elements: " << product << endl;*/
    //task2
    /*int negative_count = 0;
    int positive_count = 0;
    const int SIZE = 7;
    int arr[SIZE];
    cout << "Enter " << SIZE << " integers (from -12 to 50):\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] < 0) {
            negative_count++;
        }
        else if (arr[i] > 0) {
            positive_count++;
        }
    }
    cout << "\nNegative elements count: " << negative_count<<endl;
    cout << "Positive elements count: " << positive_count<<endl;*/
    //task3
    /*const int SIZE = 7;
    long arr[SIZE] = { 10, -3, 4, 8, 15, -6, 22 };
    long sum_even = 0;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        }
    }
    cout << "Sum of even elements: " << sum_even << endl;*/
    //task4
    /*int number = 1;
    const int SIZE = 10;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        number *= 2;
        arr[i] = number;
    }
    cout << "Forward order:  "<<endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
    cout << "\nReverse order:  "<<endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }*/
    //task5
    const int SIZE = 7;
    int arr[SIZE] = { -5, 12, -3, 0, -8, 7, -1 };
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            arr[i] = arr[i] * -1;
        }
    }
    cout << "Modified array: "<< endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}
