#include "Card.h"
#include "Player.h"
#include "Dealer.h"
using namespace std;


Dealer dealer;
Player player;

Card::Card()
{
    *cards = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,11,11,11,11,12,12,12,12,13,13,13,13 };

    playerSum = player.getPlayerSum();
    dealerFirstSum = dealer.getDealerFirstSum();
    dealerSecondSum = dealer.getDealerSecondSum();
    dealerThirdSum = dealer.getDealerSecondSum();
}

Card::~Card()
{

}
   

void Card::shuffleVector(std::vector<int> *cards)
{
    std::random_device random;
    std::mt19937 g(random());
    shuffle(this->cards->begin(), this->cards->end(), random);
}

int Card::askContinueGame() {
    int answer;
    cout << "Continue ? (1-Yes/2-No)" << endl;
    cout << "Option: ";
    cin >> answer;
    cout << endl;

    return answer;
    }

void Card::Play()
{   
    while (playerSum < 21)
    {
        if (playerSum == 0)
        {
            //Grabs two cards from the deck for player, one for dealer
            player.playerTurn();
            player.playerTurn();
            dealer.dealerTurn();
        }
        else if (playerSum > 0 && playerSum < 21)
        {
            hitOrStand();
        }

    }
        

    if (playerSum > 21)
    {
       cout << "You lost !" << endl;
    }
    else if (playerSum == 21)
    {
        cout << "Player WON !" << endl;
    }
    else if (dealerSecondSum > 21 && dealerThirdSum > 21 && playerSum)
    {
        cout << "Player WON !" << endl;
    }


//if second turn is more than 21, dealer loses
if (dealerSecondSum > 21)
{
    cout << "Dealer lost !" << endl;
}
// if dealer is at 21 or dealer is under 21 and player is over, dealer wins
else if (dealerSecondSum == 21 || dealerSecondSum < 21 && playerSum > 21)
{
    cout << "Dealer WON !" << endl;
}
//if third turn is more than 21, dealer loses
if (dealerThirdSum > 21)
{
    cout << "Dealer lost !" << endl;
}
// if dealer is at 21 or dealer is under 21 and player is over, dealer wins
else if (dealerThirdSum == 21 || dealerThirdSum < 21 && playerSum > 21)
{
    cout << "Dealer WON !" << endl;
}

    printVector();
    cout << endl;
    showRecord();   
}
   

void Card::showRecord() 
{
    cout << "Player Sum: " << playerSum << endl;
    cout << "Dealer First Turn Sum : " << dealerFirstSum << endl;
    cout << "Dealer Second Turn Sum: " << dealerSecondSum << endl;
    cout << "Dealer Third Turn Sum: " << dealerThirdSum << endl;
}

void Card::printVector()
{ 
    for (int i = 0; i < 52; i++) {
        cout << this->cards->at(i) << ' ';
    }
}


int Card::getLastVectorElement(std::vector<int>* cardVector)
{
    int& ref = this->cards->back();
    return ref;
}

void Card::deleteLastVectorElement(std::vector<int>* cardVector)
{
    this->cards->pop_back();
}

void Card::hitOrStand()
{
    int choice;

    cout << "Would you like to:" << endl;
    cout << "1 - Hit" << endl;
    cout << "2 - Stand" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        player.playerTurn();
    case 2:
        dealer.dealerTurn();

    default:
        break;
    }
}

  