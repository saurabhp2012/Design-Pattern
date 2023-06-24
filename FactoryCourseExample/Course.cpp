#include <iostream>
#include "Course.h"

void Course::createCourse(){}

void Course::getModules(){
for(auto it:modules) it->display();
}


