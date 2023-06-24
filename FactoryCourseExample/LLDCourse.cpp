#include "LLDCourse.h"

void LLDCourse::createCourse(){
    modules.push_back(new IntroModule());
    modules.push_back(new ExerciseModule());
    modules.push_back(new SummaryModule());

}