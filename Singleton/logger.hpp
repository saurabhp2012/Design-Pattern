#ifndef logger_h
#define logger_h
#include<string>
#include<mutex>
using namespace std;
class Logger{

    static Logger* loggerInstance;
    static int count;
    static mutex mtx;
    Logger(); //constructor private
    Logger (const Logger &);
    Logger operator=(const Logger &);
    

    public:
    static Logger* getInstance();
    void Log(string msg);
};

#endif