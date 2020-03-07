#inlcude <iostream>
#inlcude <string>
#DEFINE NUMBER 5

using namespace std;

pcs::pcs(){
  top=0;
}

int pcs::pcsinuse(){
  return top;
}
int pcs::getuserid(string name){
  string s="DEAD";
  for(int i=0; i<NUMBER; i++){
    if(p[i]->getname()==name){return i;}
  }
  return NUMBER+1;;
}
string[] pcs::users(){
  string u[top];
  int ind=0;
  for(int i=0; i<NUMBER; i++){
    if(p[i]->getname()!="DEAD")
      u[ind++]=p[i]->getname();
  }
  return u;
}
bool pcs::registerpc(int n, string name){
  if(p[n]->getname()=="DEAD")return true;
  p[n]=new pc(n, name);
  return false;
}
bool pcs::unregisterpc(int n){
  if(p[n]->getname()=="DEAD")return true;
  p[n]->getname()="DEAD";
  return false;
}

