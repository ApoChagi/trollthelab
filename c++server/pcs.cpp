#inlcude <iostream>
#inlcude <cstring>
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
char** pcs::users(){
  char *u[top];
  int ind=0;
  for(int i=0; i<NUMBER; i++){
    if(p[i]->getname()!="DEAD")
      u[ind++]=p[i]->getname();
  }
  return u;
}
bool pcs::registerpc(int n, char *name){
  if(p[n]->getname()=="DEAD")return true;
  p[n]=new pca(n, name);
  return false;
}
bool pcs::unregisterpc(int n){
  if(p[n]->getname()=="DEAD")return true;
  p[n]->getname()="DEAD";
  return false;
}

