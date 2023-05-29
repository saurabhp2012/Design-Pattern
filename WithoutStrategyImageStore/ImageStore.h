#include <iostream>
#include <string>
using namespace std;

class ImageStore{
    public:
        string compression;
        string filter;
    
    public:
        ImageStore(string compression,string filter){
            this->compression = compression;
            this->filter = filter;
        }
    
    void store(string fileName){

        if(compression=="JPEG"){
            std::cout<<"Compressing using jpeg algo\n";
        }
        else if (compression=="PNG"){
            std::cout<<"Compressing using png algo\n";
        }

        if(filter=="B&W"){
            std::cout<<"Applying b&w filter\n";
        }
        else if (filter=="HIGHCONTRAST"){
            std::cout<<"Applying high contrast filter\n";
        }
    }
    //two main issues->
    //1. violets single responsibility principle, as class is performing two seprate functions
    //2. violets openclosed principle, if new compression/ filter algo comes in future then need to incorporate in same class
    
};
