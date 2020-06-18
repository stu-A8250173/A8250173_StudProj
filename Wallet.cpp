#include "Wallet.h"
#include<iostream>
#include"PlayerName.h"
using namespace std;

Wallet::Wallet(PlayerName n1, PlayerName n2)
{
	N1 = n1;
	N2 = n2;
}

int Wallet::play(int player)
{
	if (player == 1)
	{
		cout << N1.name;
		P1.playerCover(P2);

		return getCommands2();//輪到p2
	}
	else if (player == 2)
	{
		cout << N2.name;
		P2.playerCover(P1);

		return getCommands1();//輪到p1

	}
}

int Wallet::getCommands2() {
	char commandKey;
	cout << "" << endl;
	cout << "跟注 / 加注 / 棄牌?(F/C/D)" << endl;
	cin >> commandKey;
	return commandExe2(commandKey);
}

int Wallet::commandExe2(char command) {
	switch (command) {
		case 'F':
		case 'f':
			cout << "--------跟注--------" << endl;
			P2.follow(P1);
			return 0;
			break;
		case 'C':
		case 'c':
			cout << "--------加注--------" << endl;
			cout << N2.name;
			P2.playerCover(P1);
	
			for (;;) {
				cout << "跟注 / 棄牌?(F/D)" << endl;//輪到P1
				cin >> command;
				if ((command != 'f') || (command != 'F') || (command != 'd') || (command != 'D')) {
					cout << "不好好輸入的話...會被玩壞的呦~ >/////<" << endl;
					cout << "請再輸入一次" << endl;
				}
				else {
					break;
				}
			}
			commandExe1(command);

			break;
		case 'D':
		case 'd':
			cout << "--------棄牌--------" << endl;
			lastStep(P2.drop2());
			return 99;
			break;
		default:
			cout << "不好好輸入的話...會被玩壞的呦~ >/////<" << endl;
			cout << "請再輸入一次" << endl;
			getCommands2();
	}
}

int Wallet::getCommands1() {
	char commandKey;
	cout << "跟注 / 加注 / 棄牌?(F/C/D)" << endl;
	cin >> commandKey;
	return commandExe1(commandKey);
}

int Wallet::commandExe1(char command) {
	switch (command) {
		case 'F':
		case 'f':
			cout << "--------跟注--------" << endl;
			P1.follow(P2);
			return 0;
			break;
		case 'C':
		case 'c':
			cout << "--------加注--------" << endl;
			cout << N1.name;
			P1.playerCover(P2);
			for (;;) {
				cout << "跟注 / 棄牌?(F/D)" << endl;//輪到P1
				cin >> command;
				if ((command != 'f') || (command != 'F') || (command != 'd') || (command != 'D')) {
					cout << "不好好輸入的話...會被玩壞的呦~ >/////<" << endl;
					cout << "請再輸入一次" << endl;
				}
				else {
					break;
				}
			}
			commandExe2(command);

			break;
		case 'D':
		case 'd':
			cout << "--------棄牌--------" << endl;
			lastStep(P1.drop1());
			return 99;
		default:
			cout << "不好好輸入的話...會被玩壞的呦~ >/////<" << endl;
			cout << "請再輸入一次" << endl;
			getCommands1();
	}
}

void Wallet::lastStep(int player) {
	if (player == 1) {
		stake1 += P2.getQuant();
		stake2 -= P2.getQuant();
	}

	if (player == 2) {
		stake2 += P1.getQuant();
		stake1 -= P1.getQuant();
	}
}

void Wallet::print() {
	cout << endl;
	cout << "雙方剩餘金額" << endl;
	cout << endl;
	cout << N1.name << "$" << stake1 << " " << N2.name << "$" << stake2 << endl;
	cout << endl;
}