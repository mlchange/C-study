#include<iostream>
using namespace std;

int main()                                    // function header
{ 
    int Celsius;
    cout<<"Please enter a Celsius value: ";
    cin>>Celsius;
    cin.get();
    cout<<Celsius<<" degrees Celsius is "<<Celsius*1.8+32<<" degrees Fahrenheit";
    cin.get();

}