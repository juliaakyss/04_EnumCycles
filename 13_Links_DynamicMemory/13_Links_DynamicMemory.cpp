#include <iostream>
using namespace std;
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
}
