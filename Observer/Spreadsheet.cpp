#include<iostream>
#include "Observer.h"
using namespace std;
 
class Spreadsheet:public Observer{
    public:
        void update(){
            cout<<"SpreadSheet got notified"<<endl;
        }
};