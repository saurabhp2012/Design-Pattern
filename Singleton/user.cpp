#include<iostream>
#include"logger.hpp"
#include<thread>
using namespace std;

 void user1log(){
    Logger* logger1 = Logger::getInstance();
    logger1->Log("this msg is from user 1");
 }
 void user2log(){
    Logger* logger2 = Logger::getInstance();
    logger2->Log("this msg is from user 2");
 }
int main()
{
    thread t1(user1log);
    thread t2(user2log);

    t1.join();
    t2.join();
    


    return 0;
}