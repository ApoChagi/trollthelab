#DEFINE NUMBER 5

class pcs{
  private:
    pc* p[NUMBER];
    int top;
  public:
    pcs();
    int pcsinuse();
    string[] users();
    void registerpc();
};
