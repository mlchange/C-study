// myfirst.cpp--displays a message

#include <iostream>                           // a PREPROCESSOR directive
void main()                                    // function header
{                                             // start of function body
                         // make definitions visible
    std::cout << "Come up and C++ me some time.";  // message
    std::cout << std::endl;                             // start a new line
    std::cout << "You won't regret it!" << std::endl;   // more output
// If the output window closes before you can read it,
// add the following code:
    // cout << "Press any key to continue." <<endl;
	std::cin.get();                                                   
                                    // terminate main()
}                                             // end of function body
