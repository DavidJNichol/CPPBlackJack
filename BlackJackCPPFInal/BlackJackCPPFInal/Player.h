#pragma once
#ifndef PLAYER_H
#define PLAYER_H
class Player
{
public:
	Player();
	~Player();

	int playerSum;

	void setPlayerSum(int choosen_card);
	int getPlayerSum();
	void playerTurn();
};
#endif 