#include "product.h"

Product::Product(string nam, double price)
:name(nam), unitPrice(price) {

}

Product::~Product() {

}

double Product::getPrice() const {
    return unitPrice;
}