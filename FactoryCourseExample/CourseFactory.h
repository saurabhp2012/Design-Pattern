#include<iostream>
#include "HLDCourse.h"
#include "LLDCourse.h"
#include<string>

class CourseFactory{
    public:
        Course* getCourse(std::string str){
            if(str=="HLD"){
                return new HLDCourse();
            }
            else if(str=="LLD"){
                return new LLDCourse();
            }
            return NULL;
        }
};