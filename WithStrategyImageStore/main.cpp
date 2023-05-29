#include<iostream>
#include <string>
#include "ImageStore.h"
 
int main()
{
    ImageStore* imagestore = new ImageStore(new JPEGCompression(),new BWFilter());
    imagestore->store("filename");

    ImageStore* imagestore2 = new ImageStore(new PNGCompression(), new HIGHCONTRASTFilter());
     imagestore2->store("filename");

}