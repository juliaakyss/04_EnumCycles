#include <iostream>
using namespace std;
struct WashingMachine
{
    char brand[30];
    char color[20];
    float width;          
    float length;         
    float height;         
    int power;            
    int spin_speed;      
    int max_temperature;  
}; 
void ShowWashingMachine(const WashingMachine& wm)
{
    cout << "Washing machine" << endl;
    cout << "Brand: " << wm.brand << endl;
    cout << "Color: " << wm.color << endl;
    cout << "Dimensions (WxLxH): " << wm.width << " x " << wm.length << " x " << wm.height << " cm" << endl;
    cout << "Power: " << wm.power << " W" << endl;
    cout << "Spin speed: " << wm.spin_speed<< endl;
    cout << "Max temperature: " << wm.max_temperature << endl;
}
WashingMachine InputWashingMachine()
{
    WashingMachine wm;
    cout << "Input Washing Machine Data" << endl;
    cout << "Enter brand: "; cin >> wm.brand;
    cout << "Enter color: "; cin >> wm.color;
    cout << "Enter width : "; cin >> wm.width;
    cout << "Enter length: "; cin >> wm.length;
    cout << "Enter height: "; cin >> wm.height;
    cout << "Enter power: "; cin >> wm.power;
    cout << "Enter spin speed: "; cin >> wm.spin_speed;
    cout << "Enter max temperature: "; cin >> wm.max_temperature;
    return wm;
}
struct Iron
{
    char brand[30];
    char model[30];
    char color[20];
    int min_temperature;  
    int max_temperature; 
    bool steam_supply;    
    int power;            
};
void ShowIron(const Iron& iron)
{
    cout << "IRON" << endl;
    cout << "Brand: " << iron.brand << endl;
    cout << "Model: " << iron.model << endl;
    cout << "Color: " << iron.color << endl;
    cout << "Temperature range: from " << iron.min_temperature << " to " << iron.max_temperature<< endl;
    cout << "Steam supply: " << (iron.steam_supply ? "Yes" : "No") << endl;
    cout << "Power: " << iron.power << endl;
}
Iron InputIron()
{
    Iron iron;
    cout << "Input Iron Data" << endl;
    cout << "Enter brand: "; cin >> iron.brand;
    cout << "Enter model: "; cin >> iron.model;
    cout << "Enter color: "; cin >> iron.color;
    cout << "Enter min temperature (°C): "; cin >> iron.min_temperature;
    cout << "Enter max temperature (°C): "; cin >> iron.max_temperature;
    cout << "Steam supply (1 - Yes, 0 - No): "; cin >> iron.steam_supply;
    cout << "Enter power (W): "; cin >> iron.power;
    return iron;
}
struct Boiler
{
    char brand[30];
    char color[20];
    int power;           
    float volume;         
    int max_temperature;  
};
void ShowBoiler(const Boiler& boiler)
{
    cout << "BOILER" << endl;
    cout << "Brand: " << boiler.brand << endl;
    cout << "Color: " << boiler.color << endl;
    cout << "Power: " << boiler.power << endl;
    cout << "Capacity: " << boiler.volume << endl;
    cout << "Max temperature: " << boiler.max_temperature << endl;
}
Boiler InputBoiler()
{
    Boiler boiler;
    cout << "Input Boiler Data" << endl;
    cout << "Enter brand: "; cin >> boiler.brand;
    cout << "Enter color: "; cin >> boiler.color;
    cout << "Enter power: "; cin >> boiler.power;
    cout << "Enter capacity: "; cin >> boiler.volume;
    cout << "Enter max temperature: "; cin >> boiler.max_temperature;
    return boiler;
}
int main()
{
    WashingMachine washer1 = { "Bosch", "White", 60, 55, 85, 2200, 1200, 90 };
    ShowWashingMachine(washer1);
    Iron iron1 = { "Philips", "Azur-7000", "Blue", 70, 220, true, 2800 };
    ShowIron(iron1);
    Boiler boiler1 = InputBoiler();
    ShowBoiler(boiler1);
}

