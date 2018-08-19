#include<iostream>

int main()                                    // function header
{                                             // start of function body
    using namespace std;
    char name;
    char address;                      // make definitions visible
    cout << "Please input your name:";  // message
    cin>>name;
    cin.get();   

    cout << "Please input you address:"; 
    cin>>address;
    cin.get(); 
    cout<<"your name: "<<name<< endl <<"you address: "<<address<<endl; 
    cout<< endl;   
	cin.get();                                                   
    return 0;                                 // terminate main()
}         