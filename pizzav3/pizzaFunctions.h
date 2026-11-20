//
// Created by AudreyKCr28 on 11/20/2026.
//

#pragma once
#include <iostream>
using namespace std;

#ifndef PIZZAV3_PIZZAFUNCTIONS_H
#define PIZZAV3_PIZZAFUNCTIONS_H

void printBanner();
int calcSlicesNeeded(int guests, int slicesPerGuest);
int calcPizzasNeeded(int slicesNeeded);
double calcSubTotal(int pizzas, double pricePerPizza);
double calcGST(double subTotal);
double calcCostPerGuest(double total, int guests);
void printMoneyLine(const string& label, double amount);

#endif //PIZZAV3_PIZZAFUNCTIONS_H
