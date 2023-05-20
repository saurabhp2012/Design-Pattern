#include "logger.hpp"
#include<iostream>
using namespace std;

Logger* Logger::loggerInstance = nullptr;
int Logger::count = 0;
mutex Logger::mtx;

Logger::Logger(){
    count++;
    cout<<"New instance created "<<count<<endl;
    
}

void Logger::Log(string msg){
    cout<<msg<<endl;
}

Logger* Logger::getInstance(){

    mtx.lock();
    if(loggerInstance==nullptr){
        loggerInstance = new Logger();
    }
    mtx.unlock();
    return loggerInstance;
}
