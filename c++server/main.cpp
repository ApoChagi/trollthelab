#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "pc.hpp"
#include "pcs.hpp"

using namespace std;

int main() {
  int n;
  char c;
  pcs pcadmin();
  while(true){
    cin >>n;
    char* name;
    cin>>name;
    if(n==1)break;
    switch(c){
      case 'r':
        pcadmin.registerpc(5, name); break;
      case 'u':
        pcadmin.unregisterpc(0); break;
      default: 
    }
    cout<<pcadmin.getuserid(name);
  }
  return  0;
}
