#include <iostream>
using namespace std;
class A{
public:
  void display ()
  {
    cout << "La m�thode display de la classe A est ex�cut�e\n";
  }
};
class B : public A{
public:
  void display ()
  {
    cout << "La m�thode display de la classe B est ex�cut�e\n";
  }
};
int main ()
{
  B b;
  b.display();
  return 0;
}

