// BASIC TEMPLATE  PROGRAM
#include <iostream>
using namespace std;
template <class t1>
class temp
{
public:
    t1 data1;
    temp(t1 a)
    {
        data1 = a;
    }
    void display();
};
template <class t1>
void temp<t1>::display()
{
    cout << data1 << endl;
}

void func(int a)
{
    cout << "i am in func without template" << endl;
}
template <class t1>
void func(t1 a)
{
    cout << "i am in func with template" << endl;
}

template <class t1>
void func1(t1 a)
{
    cout << "i am in func1 with template" << endl;
}
int main()
{
    temp<int> h(45);
    h.display();
    func(56);
    func(98.87);
    func1('o');
}