/* PizzaV2 made by Austin Craven on 11/18/26
* no ai was used
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

static void printBanner();
static int calcSlicesNeeded(int guests, int slicesPerGuest);
static int calcPizzasNeeded(int slicesNeeded);
static double calcSubTotal(int pizzas, double pricePerPizza);
static double calcGST(double subTotal);
static double calcCostPerGuest(double total, int guests);
static void printMoneyLine(const string& label, double amount);

int main () {
    string partyName;
    int numGuests;
    int slicesPerGuest;
    double priceOfPizza;

    cout << fixed << setprecision(2);
    cout << "Name your party: " << endl;
    getline(cin, partyName);
    cout << "How many people are in your party?" << endl;
    cin >> numGuests;
    cout << "How many slices is each person eating?" << endl;
    cin >> slicesPerGuest;
    cout << "How much does pizza cost?" << endl;
    cin >> priceOfPizza;

    int slicesNeeded = calcSlicesNeeded(numGuests, slicesPerGuest);
    int pizzasNeeded = calcPizzasNeeded(slicesNeeded);
    double subtotal = calcSubTotal(pizzasNeeded, priceOfPizza);
    double gst = calcGST(subtotal);
    double total = subtotal += gst;
    double pricePerGuest = calcCostPerGuest(total, numGuests);

    printBanner();
    cout << "Party: " << partyName << endl;
    cout << "Guests: " << numGuests << endl;
    cout << "Slices needed: " << slicesNeeded << endl;
    cout << "Pizzas to order: " << pizzasNeeded << endl;
    cout << "==============================" << endl;
    printMoneyLine("Subtotal", subtotal);
    printMoneyLine("Total", total);
    printMoneyLine("Per Guest", pricePerGuest);
}

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