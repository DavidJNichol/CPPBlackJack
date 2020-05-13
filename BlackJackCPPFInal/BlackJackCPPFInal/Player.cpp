#include "Player.h"
#include "Dealer.h"

Card cards;

Player::Player():playerSum(0)
{
}

Player::~Player()
{

}

//IT WORKS BUT SHIT DOESNT GET INITIATED
void Player::playerTurn() 
{
    int choosen_card;

    choosen_card = cards.getLastVectorElement(cards.cards);
    setPlayerSum(choosen_card);

    cards.deleteLastVectorElement(cards.cards);
}

void Player::setPlayerSum(int choosen_card) 
{
    this-> playerSum += choosen_card;
}

int Player::getPlayerSum() 
{
    return playerSum;
}
