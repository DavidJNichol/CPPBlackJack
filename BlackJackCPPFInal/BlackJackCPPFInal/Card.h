#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <numeric>
#include "Player.h"
#pragma once
#ifndef CARD_H
#define CARD_H
using namespace std;
class Card 
{

public:
   
    int playerSum;
    int dealerFirstSum;
    int dealerSecondSum;
    int dealerThirdSum;
    std::vector<int> *cards;

    Card();
   
    ~Card();  
  
    int getLastVectorElement(std::vector<int> *cards);

    void deleteLastVectorElement(std::vector<int> *cards);

    void shuffleVector(std::vector<int> *cards);

    int askContinueGame();

    void Play();       
       
    void showRecord();

    void printVector();

    void hitOrStand();

}; 
#endif