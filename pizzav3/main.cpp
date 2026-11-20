/* PizzaV3 made by Austin Craven on 11/20/26
* no ai was used
*/


#include <iostream>
#include <iomanip>
#include "pizzaFunctions.h"
using namespace std;

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