#ifndef DesktopBuilder_H
#define DesktopBuilder_H
 
#include"desktop.hpp"
class DesktopBuilder{
    protected:
        Desktop* desktop;
    public: 
        virtual void buildMonitor() =0;
        virtual void buildCPU() = 0;
        virtual Desktop* getDesktop(){
            return desktop;
        }

};
 
 
 
 
 
 
 
 
 
 
 
#endif
