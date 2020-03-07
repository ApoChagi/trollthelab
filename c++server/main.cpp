#include <iostream>
#include <stdlib.h>

int main() {
  int n;
  char c;
  pcs pcadmin();
  while(true){
    cin >>n;
    if(n==1)break;
    switch(c){
      case 'r':
        pcadmin.registerpc(0, "kostas"); break;
      case 'u':
        pcadmin.unregisterpc(0); break;
      default:
        

    }
    
  }
}
