//
//  main.cpp
//  c-data
//
//  Created by Lawrence Herman on 3/1/19.
//  Copyright © 2019 Lawrence Herman. All rights reserved.
//

#include <iostream>


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
  
  
  
  
  //  for (i=0; i<10; i++) {
  //
  //  }
  



}
