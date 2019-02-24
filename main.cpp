#include <fstream>  // Needed for file stream objects
#include <iostream> // Needed for console stream objects
#include <sstream>  // Needed for string stream objects
#include <string>   // Needed for strings
#include <vector>   // Needed for the vector container
#include <iterator>
#include <cstdlib>
using namespace std;

int main()
{
    string answer;



    for(;;){
        cout << "1. Add student"<< endl;
        cout << "2. Read database" << endl;
        cout << "3. Save database"<< endl;
        cout << "4. Display given student data"<< endl;
        cout << "5. Grade student"<< endl;
        cout << "Enter a number or \"q\" to quit:"<< endl;

        cin >> answer;

        if(answer == "1"){
            system("CLS");
            cout << "call AddStudent()"<< endl;

        }else if(answer == "2"){
            system("CLS");
            cout << "call ReadDB()"<< endl;

        }else if(answer == "3"){
            system("CLS");
            cout << "call SaveDB"<< endl;

        }else if(answer == "4"){
            system("CLS");
            cout << "call DisplayStudent()" << endl;

        }else if(answer == "5"){
            system("CLS");
            cout << "call GradeStudent()"<< endl;

        }else if(answer == "q" || answer == "Q"){
            break;
        }else{
            system("CLS");
            continue;
        }


    }


}

