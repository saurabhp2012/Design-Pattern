#include<iostream>
#include "Observer.h"
#include <vector>
using namespace std;
 
class Subjet{
    private:
        vector<Observer*> observerlist;
    public:
        void addObservver(Observer* observer){
            observerlist.push_back(observer);
        }

        void removeObserver(){
            observerlist.pop_back();
        }

        void notify(){
            for(auto observer:observerlist){
                observer->update();
            }
        }

};