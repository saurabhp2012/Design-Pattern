#include <iostream>
#include <string>
#include "CompressionInterface.h"
#include "FilterInterface.h"
using namespace std;

class ImageStore{
    public:
        Compression* compression;
        Filter* filter;
    
    public:
        ImageStore(Compression* cmprobj,Filter* filter){
            this->compression = cmprobj;
            this->filter = filter;
        }

        void store(string fileName){
            compression->compress(fileName);
            filter->applyFilter(fileName);
        }
    

    
};
