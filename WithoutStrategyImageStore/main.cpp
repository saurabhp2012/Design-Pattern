#include<iostream>
#include <string>
#include "ImageStore.h"
 
int main()
{
    ImageStore* imagestore = new ImageStore("JPEG","B&W");
    imagestore->store("filename");

    ImageStore* imagestore2 = new ImageStore("PNG","HIGHCONTRAST");
    imagestore2->store("filename");

}