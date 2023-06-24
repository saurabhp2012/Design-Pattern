#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream> 
#include <tuple>
#include <sstream>
#include <memory> 
#include <cmath>
using namespace std;

class Point{
    friend class PointFactory;//this voilates OCP
    // or make cosntructor public
    // or make inner Factory
    Point(float x, float y):x(x),y(y){} //private constructor

    public:
        float x, y;

    friend ostream &operator<<(ostream &os,Point &point){
        os<<"x: "<<point.x<<" y: "<<point.y;
        return os;
    }
};

class PointFactory{
    public:
    static Point NewCartesian(float x, float y){
        return {x,y};//private point constructor called here
    }
    static Point NewPolar(float r, float theta){
        return {r*cos(theta),r*sin(theta)};//private point constructor called here
    }
  
};

int main(){
    //auto p = Point::NewCartesian(3,5);
    //auto p2 = Point::NewPolar(5,M_PI_4);
    
    auto p1 = PointFactory::NewCartesian(3,5);
    auto p2 = PointFactory::NewPolar(5,M_PI_4);

    cout<<p1<<endl;
    cout<<p2<<endl;
}