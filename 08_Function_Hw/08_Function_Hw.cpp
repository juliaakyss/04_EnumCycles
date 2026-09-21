#include <iostream>
using namespace std;
bool IsLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int GetDaysInMonth(int month, int year)
{
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return IsLeapYear(year) ? 29 : 28;
    default:
        return 0;
    }
}

int main()
{
    
}
