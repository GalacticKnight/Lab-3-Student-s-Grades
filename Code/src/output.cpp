#include <iostream>
#include <stdio.h>   
#include <time.h>   
#include <cstring> 
#include <fstream>

using namespace std;
FILE* createFile(string name){

const char* directory = "../Output/";
const char* reportType = name.data();
const char* fileName = strcat(date_string,reportType);
const char* fileType = ".csv";
 
char name_buffer[512];
FILE* f = NULL;
    //Print to character buffer
    sprintf(name_buffer,"%s%s%s",directory,fileName,fileType);
    
    f = fopen(name_buffer,"w");

    cout << "Created " << reportType << endl;
    return f;
}