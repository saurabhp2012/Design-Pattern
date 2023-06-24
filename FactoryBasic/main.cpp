#include <iostream>
#include "Factory.h"
#include "Product.h"

int main() {
    // Create a factory object
    Factory* factory = new ConcreteFactoryA();

    // Use the factory to create a product
    Product* product = factory->createProduct();

    // Use the product
    product->use();
}
