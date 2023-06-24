#include<iostream>
#include "CourseFactory.h"
#include "Course.h"
 
int main()
{
    CourseFactory* factory = new CourseFactory();
    Course* hldCourse = factory->getCourse("HLD");
    Course* lldCourse = factory->getCourse("LLD");

    std::cout<<"HLD Modules->"<<std::endl;
    hldCourse->getModules();

    std::cout<<"LLD Modules->"<<std::endl;
    lldCourse->getModules();


}