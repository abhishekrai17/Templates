// BASIC TEMPLATE  PROGRAM
#include <iostream>
using namespace std;
template <class t1, class t2>
class myclass
{
public:
  t1 data1;
  t2 data2;
  myclass(t1 a, t2 b)
  {
    data1 = a;
    data2 = b;
  }
  void display()
  {
    cout << "the datas are" << endl;
    cout << data1 << endl;
    cout << data2 << endl;
  }
};
int main()
{
  cout << "creating myclass object with int and char  value" << endl;
  myclass<int, char> p(78, 'y');
  cout << "calling the display function" << endl;
  p.display();
}