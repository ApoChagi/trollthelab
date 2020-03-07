#define NUMBER 5
#include "pc.hpp"
#include <cstring>
using namespace std;

class pcs{
  private:
    pca *p[NUMBER];
    int top;
  public:
    pcs();
    int pcsinuse();
    char** users();
    bool registerpc(int n, char * name);
    bool uregisterpc(int n);
    int getuserid(string name);
};
