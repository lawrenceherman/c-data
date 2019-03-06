//
//  main.cpp
//  c-ll
//
//  Created by Lawrence Herman on 3/6/19.
//  Copyright © 2019 Lawrence Herman. All rights reserved.
//

#include <iostream>

using namespace std;

struct Node {
  int value;
  struct Node *next;
};


class SinglyLL {
  
public:
  
  Node *head;
  
  void prepend (int value) {
    Node* node = new Node();
    node->value = value;
    
    
    if (head != NULL) {
      
    } else {
      head->node;
    };
    
  }
  
};


int main(int argc, const char * argv[]) {
  
  SinglyLL list;
  
  
  cout << list.head;
  
  
  
  
  
  
  return 0;
}
