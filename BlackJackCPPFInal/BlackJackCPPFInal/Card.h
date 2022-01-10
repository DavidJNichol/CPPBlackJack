#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <numeric>

#include <string>       //std::string
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

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
    std::vector<int> cards = std::vector<int>(52);

    Card();
   
    ~Card();  
  
    int getLastVectorElement(std::vector<int> cards);

    void deleteLastVectorElement(std::vector<int> cards);

    void shuffleVector();

    int askContinueGame();

    void Play();       
       
    void showRecord();

    void printVector();

    void hitOrStand();

}; 
#endif