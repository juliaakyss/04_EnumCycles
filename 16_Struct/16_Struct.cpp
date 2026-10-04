#include <iostream>
using namespace std;
struct WashingMachine
{
  string brand;
  string color;
  double width;
  double length;
  double height;
  double power;
  double spin_speed;
  double max_temperature;
};
void ShowWashingMachine(const WashingMachine& machine)
{
  cout << "Washing machine specification:" << endl;
  cout << "Brand: " << machine.brand << endl;
  cout << "Colour: " << machine.color << endl;
  cout << "Dimensions: " << machine.width << " x "<< machine.length << " x " << machine.height << endl;
  cout << "Power: " << machine.power << endl;
  cout << "Spin speed: " << machine.spin_speed << endl;
  cout << "Heating temrature: " << machine.max_temperature << " C" << endl;
}
int main()
{
    WashingMachine my_washer;
    my_washer.brand = "Bosch";
    my_washer.color = "White";
    my_washer.width = 59.8;
    my_washer.length = 55.0;
    my_washer.height = 84.8;
    my_washer.power = 2300.0;
    my_washer.spin_speed = 1200;
    my_washer.max_temperature = 90;
    ShowWashingMachine(my_washer);
}

