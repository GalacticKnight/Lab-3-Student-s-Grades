#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

#include "RecordingAlgorithm.h";


int main() {
    
       
    string done = "Yes";
    RecordingAlgorithm records;
    
    cout << "Done" << endl;
    cout << endl;
    
    cout << "Would you like to update the information? ";
    cout << "Say Yes or anything else."
    cin >> continuing;
    while(done == "Yes") {
        entry newEntry; 
         
        cout << "Give me your EMPLID: ";
        cin >> newEntry.emplid;  

        cout << "Give me your course number: ";
        cin >> newEntry.courseno;  

        cout << "Give me your instructor's ID: ";
        cin >> newEntry.instructorid;  

        cout << "Give me your term ID: ";
        cin >> newEntry.termid;  

        cout << "give me your section ID: ";
        cin >> newEntry.sectionid;  

        cout << "Give me your grade: ";
        cin >> newEntry.grade;  

        records.addEntry(newEntry);

        cout << "Would you like to update the information? ";
        cout << "Say Yes or anything else."
        cin >> continuing;
    
    }

    records.printPassPerInstructor(); 
    records.printPassPerCourse();
    records.printWithRatePerInstructor();
    records.printWithRatePerCourse();
    records.printPassRateFall();
    records.printPassRateSpring();


    return 0;

}
