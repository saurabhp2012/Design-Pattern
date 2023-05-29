#include <iostream>
#include <string>

class Compression{
    public:
        virtual void compress(std::string fileName) = 0;
};

class JPEGCompression : public Compression{
    public:
        void compress(std::string fileName){
            std::cout<<"Compressing using jpeg algo\n";
        }
};

class PNGCompression : public Compression{
    public:
        void compress(std::string fileName){
            std::cout<<"Compressing using png algo\n";
        }
};