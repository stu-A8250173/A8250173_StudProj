#ifndef WALLET_H
#define WALLET_H
#include"Bet.h"
#include"PlayerName.h"
using namespace std;
class Wallet
{
private:
	
public:
	Wallet(PlayerName, PlayerName);//遊戲開始時打開
	int play(int);//玩一輪(起手玩家(1or2))
	Bet P1;
	Bet P2;

	int getCommands1();
	int commandExe1(char);
	int getCommands2();
	int commandExe2(char);
	PlayerName N1;
	PlayerName N2;

	int quant;//下注量
	int stake1 = 500, stake2 = 500;

	void lastStep(int);//輸贏錢(贏家1or2)

	void print();




};
#endif // !WALLET_H

