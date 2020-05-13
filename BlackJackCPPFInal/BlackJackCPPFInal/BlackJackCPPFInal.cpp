#include <iostream>
#include <random>
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

int main() {

    Card card;
    int choice;
    bool exitGame = true;

    while (exitGame != false)
    {
        cout << "*******************************\n";
        cout << " 1 - Play BlackJack.\n";
        cout << " 2 - Exit.\n";
        cout << " Enter your choice: ";
        cin >> choice;
        cout << endl;


        switch (choice)
        {
        case 1:
            cout << "Welcome to Blackjack!\n";
            card.shuffleVector(card.cards);
            card.Play();
            cout << endl;
            break;
        case 2:
            cout << "End of Program.\n";
            exitGame = false;
            break;
        default:
            cout << "Not a Valid Choice. \n";
            cout << "Choose again.\n";
            cin >> choice;
            break;
        }
    }

    return 0;
}