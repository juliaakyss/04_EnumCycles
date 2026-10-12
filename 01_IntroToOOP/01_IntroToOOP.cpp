#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string birthDate;
    string phone;
    string city;
    string country;
    string universityName;
    string universityCity;
    string universityCountry;
    string groupNumber;
public:
    void setName(string name)
    {
        this->name = name;
    }
    void setBirthDate(string birthDate)
    {
        this->birthDate = birthDate;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    void setCountry(string country)
    {
        this->country = country;
    }
    void setUniversityName(string universityName)
    {
        this->universityName = universityName;
    }
    void setUniversityCity(string universityCity)
    {
        this->universityCity = universityCity;
    }
    void setUniversityCountry(string universityCountry)
    {
        this->universityCountry = universityCountry;
    }
    void setGroupNumber(string groupNumber)
    {
        this->groupNumber = groupNumber;
    }
    string getName()
    {
        return name;
    }
    string getBirthDate()
    {
        return birthDate;
    }
    string getPhone()
    {
        return phone;
    }
    string getCity()
    {
        return city;
    }
    string getCountry()
    {
        return country;
    }
    string getUniversityName()
    {
        return universityName;
    }
    string getUniversityCity()
    {
        return universityCity;
    }
    string getUniversityCountry()
    {
        return universityCountry;
    }
    string getGroupNumber()
    {
        return groupNumber;
    }
    void Init()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter birth date : "; cin >> birthDate;
        cout << "Enter phone : "; cin >> phone;
        cout << "Enter city : "; cin >> city;
        cout << "Enter country : "; cin >> country;
        cout << "Enter university name : "; cin >> universityName;
        cout << "Enter university city : "; cin >> universityCity;
        cout << "Enter university country : "; cin >> universityCountry;
        cout << "Enter group number : "; cin >> groupNumber;
    }
    void Print()
    {
        cout << "Name : " << name << endl;
        cout << "Birth date : " << birthDate << endl;
        cout << "Phone : " << phone << endl;
        cout << "City : " << city << endl;
        cout << "Country : " << country << endl;
        cout << "University name : " << universityName << endl;
        cout << "University city : " << universityCity << endl;
        cout << "University country : " << universityCountry << endl;
        cout << "Group number : " << groupNumber << endl;
    }
};
int main()
{
    Student st;
    st.Init();
    st.Print();
}