#include "Product.h"

// Abstract Factory class
class Factory {
public:
    virtual Product* createProduct() = 0;
};

// Concrete Factory A
class ConcreteFactoryA : public Factory {
public:
    Product* createProduct() override {
        return new ConcreteProductA();
    }
};

// Concrete Factory B
class ConcreteFactoryB : public Factory {
public:
    Product* createProduct() override {
        return new ConcreteProductB();
    }
};