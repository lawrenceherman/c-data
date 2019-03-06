//
//  main.cpp
//  c-data
//
//  Created by Lawrence Herman on 3/1/19.
//  Copyright © 2019 Lawrence Herman. All rights reserved.
//

//#include <iostream>
//// used this for setw(x) on output
//#include <iomanip>
//// directives for reading and writing files
//#include <fstream>

#include "main.h"



int main(int argc, const char * argv[]) {
  
  using namespace std;
  
  //   insert code here...
  cout << "Hello, World!\n";
  //  return 0;
  
  int test = 100;
  cout<<"The value of test is "<<test<<"\n";
  
  test = 200;
  
  cout<<"Test "<<sizeof(test)<<"\n";
  
  //endl can replace "\n".  sometimes they are different
  cout<<"int size = "<<sizeof(int)<<"\n";
  
  
  cout<<"The size of int is "<<sizeof(int)<<"\n";
  cout<<"The size of short is "<<sizeof(short)<<"\n";
  cout<<"The size of long is "<<sizeof(long)<<"\n";
  cout<<"The size of char is "<<sizeof(char)<<"\n";
  cout<<"The size of float is "<<sizeof(float)<<"\n";
  cout<<"The size of double is "<<sizeof(double)<<"\n";
  cout<<"The size of bool is "<<sizeof(bool)<<"\n";
  
  enum Month {
    Jan,
    Feb,
    March,
    April,
  };
  
  Month testMonth;
  
  testMonth = Jan;
  
  cout<<"Test"<<std::setw(15)<<"Test2\n";
  
//  - Include the <fstream> library
//  - Create a stream (input, output, both)
//  - ofstream myfile; (for writing to a file)
//  - ifstream myfile; (for reading a file)
//  - fstream myfile; (for reading and writing a file)
//  - Open the file  myfile.open(“filename”);
//  - Write or read the file
//  - Close the file myfile.close();

  ofstream testFile ("cTestFile.txt", ios::app);
  
  if (testFile.is_open()) {
    testFile << "\nI am adding a line.\n";
  } else cout << "Unable to write to file";
  
//  You can determine that directory inside your program via GetCurrentDirectory(), and change it to something else via SetCurrentDirectory().
  
  testFile.close();
  // didnt work check later
  
  
  int a = 54;
  
  cout << &a << "\n";
  
  int * pointToA = &a;
  
  cout << "pointerToA stores " << pointToA << "\n";
  
  cout << "pointerToA points to " << * pointToA << "\n";





}
