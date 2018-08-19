#include<iostream>
using namespace std;
void f1(void);
void f2(void);


int main()                                    // function header
{ 
    f1();
    f1();
    f2();
    f2();
    cin.get();
}

void f1()
{
    cout << "Three blind mice"<<endl;
}

void f2()
{
    cout << "See how they run"<<endl;
}
