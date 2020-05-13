#include "Dealer.h"
#include "Card.h"

using namespace std;
Card card;
Dealer::Dealer(vector<int> cards):computerOneSum(0), computerTwoSum(0), computerThreeSum(0)
{

}

Dealer::Dealer() : computerOneSum(0), computerTwoSum(0), computerThreeSum(0)
{

}

Dealer::~Dealer()
{

}

void Dealer::setDealerFirstSum(int choosen_card) 
{
    this->computerOneSum += choosen_card;
}

void Dealer::setDealerSecondSum(int choosen_card) 
{
    this->computerTwoSum += choosen_card;
}

int Dealer::getDealerFirstSum()
{
        return computerOneSum;
}

int Dealer::getDealerSecondSum() 
{
        return computerTwoSum;
}

void Dealer::dealerTurn() {
    int choosen_card;

    choosen_card = cards.getLastVectorElement(card.cards);
    setDealerFirstSum(choosen_card);

    cards.deleteLastVectorElement(card.cards);
}
