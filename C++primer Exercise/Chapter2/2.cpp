//Convert long into yards
#include<iostream>
using namespace std;
double convert(double);


int main()                                    // function header
{ 
  
    double l;
    cout << "Please input a long: ";
cin>>l;
cin.get();
cout<<l<<" long = "<<convert(l)<<" yards";
cin.get();

}

double convert(double l)
{return l*220;

}