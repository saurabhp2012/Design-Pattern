#include<iostream>
#include "Subject.cpp"
using namespace std;

class DataSource: public Subjet{
    int value;
    public:
    void setValue(int val){
        value = val;
        notify();
    }

    int getvalue(){
        return value;
    }

};
 
