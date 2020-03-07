#include <iostream>
#include <string>
using namespace std;

/*class pc {
private:
  string name;
  int pc_number;
public:
  pc ();
  string getname ();
  void setname (string new_name);
};*/

pca::pca () {
  name = "EMPTY";
}

string pca::getname () {
  return name;
}

void pca::setname (string new_name) {
  name = new_name;
}
