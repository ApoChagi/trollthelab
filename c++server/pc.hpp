#include <string>
using namespace std;

class pca {
private:
  string name;
  int pc_number;
public:
  pca ();
  string getname ();
  void setname (string new_name);
};