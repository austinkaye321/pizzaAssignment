#include <iostream>
#include <iomanip>
#include <cmath>
#include "pizzaFunctions.h"
using namespace std;

/* printBanner prints the header for the receipt
 * no inputs and no outputs
*/
void printBanner() {
    cout << "==============================" << endl;
    cout << "     PIZZA PARTY PLANNER" << endl;
    cout << "==============================" << endl;
}

/* calcSlicesNeeded calculates the total number of slices required
 * takes in the number of guests and the slices eaten per guest
 * outputs total slices
*/
int calcSlicesNeeded(const int guests, const int slicesPerGuest) {
    const int totalSlices = slicesPerGuest * guests;
    return totalSlices;
}

/* calcPizzasNeeded calculates the total number of pizzas needed
 * takes in the number of slices
 * outputs total pizzas
*/
int calcPizzasNeeded(const int slicesNeeded) {
    constexpr double SLICES = 8.0;
    const double totalPizza = ceil(slicesNeeded / SLICES);
    return static_cast<int>(totalPizza);
}

/* calcSubTotal calculates the subtotal(before tax) of the pizzas
 * takes in the number of pizzas and the price per pizza
 * outputs the subtotal
*/
double calcSubTotal(const int pizzas, const double pricePerPizza) {
    const double subtotal = (pizzas * pricePerPizza);
    return subtotal;
}

/* calcGST calculates the tax
 * takes in the total
 * outputs the dollar amount of tax
*/
double calcGST(const double subTotal) {
    constexpr double TAX = 0.05;
    double GST = subTotal * TAX;
    return GST;
}

/* calcCostPerGuest calculates the cost per each person there
 * it takes in the total and the number of guests
 * outputs the cost per person
*/
double calcCostPerGuest(const double total, const int guests) {
    const double costPerPerson = total / guests;
    return costPerPerson;
}

/* printMoneyLine prints the cost lines of the receipt
 * no inputs and no outputs
*/
void printMoneyLine(const string& label, const double amount) {
    cout << label << ": $" << amount << endl;
}