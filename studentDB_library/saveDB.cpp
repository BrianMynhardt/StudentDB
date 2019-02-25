#include "saveDB.h"
#include "addStudent.h"
#include <fstream>  // Needed for file stream objects
#include <iostream> // Needed for console stream objects
#include <sstream>
#include <vector>
#include <string>
#include <iterator>
#include "print.h"
using namespace std;
namespace MYNBRI003{
void saveDB(vector<MYNBRI003::StudentRecord> records){
    ofstream myfile ("students.txt");
                    if (myfile.is_open())
                      {
                        for( int a =0; a < records.size(); a = a + 1 )
                            {
                                myfile << print(records.at(a))<<endl;
                            }
                        myfile.close();
                      }
                    else cout << "Unable to open file";

}}
