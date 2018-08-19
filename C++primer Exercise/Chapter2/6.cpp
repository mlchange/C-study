#include<iostream>
using namespace std;
double convert(double);

int main()                                    // function header
{ 
    double year;
    cout<<"Enter the number of light years: ";
    cin>> year;
    cout<< year<<" light years = "<< convert(year) << " astronomical units.";
}

double convert(double year)
{
    return 63240*year;
}