/* PizzaV1 made by Austin Craven on 11/16/26
 * no ai was used
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    constexpr double TAX = 0.05;
    constexpr double SLICES = 8.0;

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

    const int totalSlices = slicesPerGuest * numGuests;
    const double totalPizza = ceil(totalSlices / SLICES);
    const double subtotal = (totalPizza * priceOfPizza);
    const double total = (subtotal * TAX) + subtotal;
    const double costPerPerson = total / numGuests;

    cout << "==============================" << endl;
    cout << "     PIZZA PARTY PLANNER" << endl;
    cout << "==============================" << endl;
    cout << "Party: " << partyName << endl;
    cout << "Guests: " << numGuests << endl;
    cout << "Slices needed: " << totalSlices << endl;
    cout << "Pizzas to order: " << totalPizza << endl;
    cout << "==============================" << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Total: $" << total << endl;
    cout << "Per guest: $" << costPerPerson << endl;
}