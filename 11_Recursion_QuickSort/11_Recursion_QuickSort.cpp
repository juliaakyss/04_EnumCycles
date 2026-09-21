#include <iostream>
using namespace std;
double PowerRecursion(double base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * PowerRecursion(base, exp - 1);
}
void PrintStarsRecursion(int N){
    if (N <= 0){
        return;
    }
    cout << "* ";
    PrintStarsRecursion(N - 1);
}
int RangeSumRecursion(int a, int b){
    if (a == b){
        return a;
    }
    return a + RangeSumRecursion(a + 1, b);
}
int main()
{
    double base = 3;
    int exp = 3;
    cout << base << " ^ " << exp << " = " << PowerRecursion(base, exp) << endl << endl;
    int starsCount;
    cout << "Enter number of the stars: ";
    cin >> starsCount;
    cout << "Result: ";
    PrintStarsRecursion(starsCount);
    cout << endl;
    int a, b;
    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "Sum of numbers in this range: " << RangeSumRecursion(a, b) << endl;
}
