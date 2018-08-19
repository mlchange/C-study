#include<iostream>
using namespace std;
void time_display(int, int);

int main()                                    // function header
{ 
    int h;int m;
    cout<<"Enter the number of hours: ";
    cin>> h;
    cout<<"Enter the number of minutes: ";
    cin>> m;
    time_display(h, m);
}

void time_display(int h, int m)
{
    cout<< "Time: "<<h<<" : "<<m;
}