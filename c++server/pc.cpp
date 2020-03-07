#include <iostream>
#include <string>
using namespace std;

class pc {
private:
  string name;
  int pc_number;
public:
  pc ();
  string getname ();
  void setname (string new_name);
};

pc::pc () {
  name = "EMPTY";
}

string pc::getname () {
  return name;
}

void pc::setname (string new_name) {
  name = new_name;
}
