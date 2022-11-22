#include <iostream>
using namespace std;
class A{
public:
  void display ()
  {
    cout << "La méthode display de la classe A est exécutée\n";
  }
};
class B : public A{
public:
  void display ()
  {
    cout << "La méthode display de la classe B est exécutée\n";
  }
};
int main ()
{
  B b;
  b.display();
  return 0;
}

