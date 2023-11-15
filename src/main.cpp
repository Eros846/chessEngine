#include <iostream>
#include <string>

using namespace std;

int main()
{
  
    char userOption = 0;
    bool userValid = false;


    cout << "Hello, welcome to our chess game" << endl << endl;
    while(userValid == false)                                                                   //while user input is invalid, keep asking for valid input
    {
        cout << "1. Chess rules. \n2. Create profile. \n3. Play a two player match. \n4. Exit program." << endl;
        cout << "Select an option:" << endl;
        cin >> userOption;                                                                      //Get user input
        cin.ignore(256,'\n');
        if (userOption != '1' && userOption != '2' && userOption != '3' && userOption != '4')                                             //Validate user input
        {
            cout << "Please enter a valid input" << endl;
        }
        else                                                                                    //If invalid, repeat while loop, if valid continue
        {
            if (userOption == '1')
            {
                cout << "You entered option 1." << endl;
            }

            if (userOption == '2')
            {
                cout << "You entered option 2." << endl;
            }

            if (userOption == '3')
            {
                cout << "You entered option 3." << endl;
            }

            if (userOption == '4')
            {
                cout << "You entered option 4." << endl;
                userValid = true;
            }
        }
    }
    
    return 0;
}