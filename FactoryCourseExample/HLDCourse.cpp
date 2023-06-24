#include "HLDCourse.h"

void HLDCourse::createCourse(){

    std::cout<<" creating HLD course ";
    modules.push_back(new IntroModule());
    modules.push_back(new DemoModule());
    modules.push_back(new SummaryModule());

}