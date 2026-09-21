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
