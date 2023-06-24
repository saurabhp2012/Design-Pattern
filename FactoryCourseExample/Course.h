#pragma once
#include<iostream>
#include<vector>
#include "Modules.h"

class Course{
    protected:
        std::vector<Modules*> modules;

    public:

    Course(){
        createCourse();
    }

    void getModules();

    virtual void createCourse();
        
};



