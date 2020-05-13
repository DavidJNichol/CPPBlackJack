#pragma once
#ifndef DEALER_H
#define DEALER_H
#include <vector>
#include "Card.h"

using namespace std;
class Dealer
{
public:
    Dealer(vector<int> cards);
    Dealer();
    ~Dealer();

    Card cards;

    void setDealerFirstSum(int choosen_card);

    void setDealerSecondSum(int choosen_card);

    int getDealerFirstSum();

    int getDealerSecondSum();

    void dealerTurn();

    int computerOneSum;
    int computerTwoSum;
    int computerThreeSum;

};
#endif
