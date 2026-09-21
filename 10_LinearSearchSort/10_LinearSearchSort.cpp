#include <iostream>
using namespace std;
//void InitArray(int arr[], int size){
//    for (int i = 0; i < size; i++){
//        arr[i] = rand() % 100;
//    }
//}
//void ShowArray(int arr[], int size){
//    for (int i = 0; i < size; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//void SelectSort(int arr[], int size, int order = 1){
//    int temp, index;
//    for (int i = 0; i < size - 1; i++){
//        index = i;
//        temp = arr[i];
//        for (int j = i + 1; j < size; j++){
//            if (order == 0){
//                if (arr[j] < temp){
//                    temp = arr[j];
//                    index = j;
//                }
//            }
//            else {
//                if (arr[j] > temp){
//                    temp = arr[j];
//                    index = j;
//                }
//            }
//        }
//        if (index != i){
//            arr[index] = arr[i];
//            arr[i] = temp;
//        }
//    }
//}
//int main(){
//    srand(time(0));
//    const int size = 10;
//    int arr[size];
//    InitArray(arr, size);
//    cout << "Original array: ";
//    ShowArray(arr, size);
//    SelectSort(arr, size, 0);
//    cout << "Ascending: ";
//    ShowArray(arr, size);
//    SelectSort(arr, size);
//    cout << "Descending: ";
//    ShowArray(arr, size);
//}
void InitArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20; 
	} 
}
void ShowArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " "; 
	} 
	cout << endl; 
}
void SortBetweenNegatives(int arr[], int size) {
    int firstNeg = -1;
    int lastNeg = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            firstNeg = i;
            break;
        }
    }
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] < 0) {
            lastNeg = i;
            break;
        }
    }
    if (firstNeg == -1) {
        cout << "There is no negative elements in array" << endl;
        return;
    }
    if (firstNeg == lastNeg) {
        cout << "There is onle one negative element (index " << firstNeg << ")" << endl;
        return;
    }
    if (lastNeg - firstNeg <= 1) {
        cout << "There are no other numbers between the first and last negative elements." << endl;
        return;
    }
    cout << "The leftmost negative one [index " << firstNeg << "]: " << arr[firstNeg] << endl;
    cout << "The rightmost negative one [index " << lastNeg << "]: " << arr[lastNeg] << endl;
    for (int i = firstNeg + 1; i < lastNeg; i++) {
        int temp = arr[i];
        int j;
        for (j = i - 1; j > firstNeg && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}
int main() {
    srand(time(0));
    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    cout << "Array before changes:" << endl;
    ShowArray(arr, size);
    cout << endl;
    SortBetweenNegatives(arr, size);
    cout << "\nArray after sorting:" << endl;
    ShowArray(arr, size);
}
