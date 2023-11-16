#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "base" << endl;
    }
    virtual ~Base()
    {
        cout << "~base" << endl;
    }
};

class A : public Base
{
public:
    A()
    {
        cout << "a" << endl;
    }
    ~A()
    {
        cout << "~a" << endl;
    }
};

class B : public Base
{
public:
    B()
    {
        cout << "B" << endl;
    }
    ~B()
    {
        cout << "~B" << endl;
    }
};

int main()
{
    A *a = new A;
    delete a;
    cout << endl
         << " --- " << endl;
    Base *b = new B;
    delete b;
    return 0;
}