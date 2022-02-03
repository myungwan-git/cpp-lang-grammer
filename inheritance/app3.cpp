#include "invoice.h"

int main() {
    
    Product product1("ItemA", 150000.0);
    Product product2("ItemB", 5000.5);

    Invoice invoice(1);
    invoice.add(1, product1);
    invoice.print();
    invoice.add(2, product2);
    invoice.print();

    return 0;
}