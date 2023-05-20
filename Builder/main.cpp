#include<iostream>
#include "hpdesktopBuilder.hpp"
#include "delldesktopBuilder.hpp"
#include "desktopDirector.hpp"

using namespace std;
 
int main()
{
    HpDesktopBuilder* hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector* dir1 = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector* dir2 = new DesktopDirector(dellDesktopBuilder);

    Desktop* desktop1 = dir1->BuildDesktop();
    Desktop* desktop2 = dir2->BuildDesktop();

    //desktop1->showSpecs();
    //desktop2->showSpecs();
}