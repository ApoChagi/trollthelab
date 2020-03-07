class processor{
  private:
    int dthres;
    int info[10];
    double mean;
    int count;
  public:
    processor();
    void newinfo(int x);
    bool danger();
    double getmean();
};