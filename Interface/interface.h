#include<iostream>
using namespace std;
 
class interface{
    protected:
        int m_value;
    public:
        virtual void setValue() = 0;
        virtual int getValue() = 0;
};