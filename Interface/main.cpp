#include<iostream>
#include "implement.cpp"

using namespace std;
int main()
{
    implement* imp = new implement();
    imp->setValue();
    cout<<imp->getValue()<<endl;
    cin.get();



}