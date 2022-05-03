#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

#include "RecordingAlgorithm.h";
#include "student.h";
#include "instructor.h";
#include "term.h";

int main() {
    
       
    string done = "Yes";
    RecordingAlgorithm records;
    
    cout << "Done" << endl;
    cout << endl;
    
    cout << "Would you like to update the information? ";
    cout << "Say Yes or anything else."
    cin >> continuing;
    while(done == "Yes") {
        recording util; 
         
        cout << "Give me your EMPLID: ";
        cin >> util.emplid;  

        cout << "Give me your course number: ";
        cin >> util.courseno;  

        cout << "Give me your instructor's ID: ";
        cin >> util.instructorid;  

        cout << "Give me your term ID: ";
        cin >> util.termid;  

        cout << "give me your section ID: ";
        cin >> util.sectionid;  

        cout << "Give me your grade: ";
        cin >> util.grade;  

        records.addEntry(util);

        cout << "Would you like to update the information? ";
        cout << "Say Yes or anything else."
        cin >> continuing;
    
    }


    return 0;

}
