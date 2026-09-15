#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //task1
	//srand(time(NULL));
	//const int rows = 4;
	//const int cols = 3;
	//int array[rows][cols];
	//int countNonZero = 0;
    //for (int i = 0; i < rows; i++){
        //for (int j = 0; j < cols; j++){
            //array[i][j] = rand() % 11 - 5;
            //cout << left << setw(4) << array[i][j] << " ";
            //if (array[i][j] != 0){
               // countNonZero++;
            //}
        //}
        //cout << endl;
    //}
   // cout << endl;
    //cout << "Number of no zero elements: " << countNonZero << endl;
    //task2
    //srand(time(NULL));
    //const int rows = 3;
    //const int cols = 3;
    //int array[rows][cols];
    //int countZero = 0;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 11 - 5;
    //        cout << left << setw(3) << array[i][j] << " ";
    //        if (array[i][j] == 0) {
    //            countZero++;
    //        }
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    //cout << "Number of zero elements: " << countZero << endl;
    ////task3
    //srand(time(NULL));
    //const int rows = 7;
    //const int cols = 3;
    //int array[rows][cols];
    //int countLess12 = 0;
    //for (int i = 0; i < rows; i++){
    //    for (int j = 0; j < cols; j++){
    //        array[i][j] = -20 + rand() % 40;
    //        cout << left << setw(5) << array[i][j] << " ";
    //        if (abs(array[i][j]) < 12){
    //            countLess12++;
    //        }
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    //cout << "Number of elements with modul less then 12: " << countLess12 << endl;
    //task4
    /*srand(time(NULL));
    const int rows = 4;
    const int cols = 5;
    int array[rows][cols];
    int countPositive = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            array[i][j] = -20 + rand() % 40;
            cout << left << setw(5) << array[i][j] << " ";
            if (array[i][j] > 0){
                countPositive++;
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Number of positive elements: " << countPositive << endl;*/
    //task5
    srand(time(NULL));
    const int rows = 5;
    const int cols = 4;
    double array[rows][cols];
    double productPositive = 1;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            array[i][j] = -20 + rand() % 40;
            cout << left << setw(7) << array[i][j] << " ";
            if (array[i][j] > 0){
                productPositive *= array[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Product of positive elements: " << productPositive << endl;
    //task6
    srand(time(NULL));
    const int rows = 5;
    const int cols = 4;
    double array[rows][cols];

}