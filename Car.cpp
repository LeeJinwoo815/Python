#include <iostream>
#include <string>
using namespace std;

class Car {
  const string model;
  bool power;
  double speed;

 public:
  Car(string m, bool p = false, double s=0.0):model(m), power(p), speed(s){};
  void set_power();
  void set_speed(bool);
  double get_speed() const;
};
void Car::set_power() 
{ 
	power = !power;
	return;
}
void Car::set_speed(bool a) {
  if (!power) return;
  if (a)
    speed += 100;
  else
    speed -= 10;
  return;
}
double Car::get_speed()const
{
  return speed;
}
int main() {
  Car car1("소나타");
  car1.set_power();
  car1.set_speed(false);
  cout << car1.get_speed() << endl;

  Car car2("제네시스");
  car2.set_power();
  car2.set_speed(true);
  cout << car2.get_speed() << endl;

  Car car3("벤츠");
  car3.set_power();
  car3.set_speed(true);
  cout << car3.get_speed() << endl;

  Car car4("코란도");
  car4.set_power();
  car4.set_speed(false);
  cout << car4.get_speed() << endl;

  return 0;
}