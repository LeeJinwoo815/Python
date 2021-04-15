#include <iostream>

using namespace std;

class Point {
 private:
  double m_x;

 public:
  Point(double x = 0.0) : m_x(x) {}

  Point& operator++() {
    m_x += 1;

    return *this;
  }

  Point operator++(int) {
    Point temp(m_x);

    m_x += 2;

    return temp;
  }

  friend ostream& operator<<(ostream& out, const Point& point) {
    out << point.m_x << " ";
    return out;
  }
};

class Animal {
 public:
  virtual void Cry() = 0;
  virtual void Other() = 0;
};

class Dog : public Animal {
 public:
  void Other() {
    cout << "IQ60\n";
    cout << "four legs\n";
    return;
  }
  void Cry() {
    cout << "港港\n" << endl;
    return;
  }
};

class Bird : public Animal {
 public:
  void Other() {
    cout << "IQ30\n";
    cout << "Two legs\n";
    return;
  }
  void Cry() {
    cout << "卤卤\n" << endl;
    return;
  };
};

class Cat : public Animal {
 public:
  void Other() {
    cout << "IQ50\n";
    cout << "four legs\n";
    return;
  }
  void Cry() {
    cout << "具克\n" << endl;
    return;
  };
};

int main() {
  Point p1(1);

  Animal* pa = new Dog;
  Animal* pb = new Bird;
  Animal* pc = new Cat;

  cout << ++p1 << endl; 
  pa->Other();
  pa->Cry();

  cout << p1++ << endl; 
  pb->Other();
  pb->Cry();

  cout << p1 << endl;
  pc->Other();
  pc->Cry();

  Dog* pd = (Dog*)pa;
  pd->Cry();

  Bird* pe = (Bird*)pb;
  pb->Cry();

  Cat* pf = (Cat*)pc;
  pc->Cry();
  return 0;
}