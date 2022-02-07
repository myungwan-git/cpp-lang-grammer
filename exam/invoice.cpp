#include "invoice.h"

Invoice::Invoice(int in)
:invoiceNumber(in), invoiceTotal(0.0) {

}
Invoice::~Invoice() {

}
void Invoice::add(int quantity, Product product) {
    invoiceTotal += quantity * product.getPrice();
}

void Invoice::print() const {
    cout << "invoice Num = " << invoiceNumber << endl;
    cout << "invoice Total = " << invoiceTotal << endl;
}

