#include<iostream>
using namespace std;
#include "hpdesktopBuilder.hpp"

void HpDesktopBuilder::buildMonitor()
{
    desktop->setMonitor(" HP Monitor");
}
void HpDesktopBuilder::buildCPU()
{
    desktop->setCPU(" HP CPU");

}
Desktop* HpDesktopBuilder::getDesktop(){
    return desktop;
}
