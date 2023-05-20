#include<iostream>
#include "Observer.h"
using namespace std;
 
class Chart:public Observer{
    public:
        void update(){
            cout<<"Chart got notified"<<endl;
        }
};