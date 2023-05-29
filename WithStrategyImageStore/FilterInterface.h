#include <iostream>
#include <string>

class Filter{
    public:
        virtual void applyFilter(std::string fileName) = 0;
};

class BWFilter : public Filter{
    public:
        void applyFilter(std::string fileName){
          std::cout<<"Applying b&w filter\n";
        }
};

class HIGHCONTRASTFilter : public Filter{
    public:
        void applyFilter(std::string fileName){
         std::cout<<"Applying high contrast filter\n";
        }
};