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

		return getCommands2();//����p2
	}
	else if (player == 2)
	{
		cout << N2.name;
		P2.playerCover(P1);

		return getCommands1();//����p1

	}
}

int Wallet::getCommands2() {
	char commandKey;
	cout << "" << endl;
	cout << "��` / �[�` / ��P?(F/C/D)" << endl;
	cin >> commandKey;
	return commandExe2(commandKey);
}

int Wallet::commandExe2(char command) {
	switch (command) {
		case 'F':
		case 'f':
			cout << "--------��`--------" << endl;
			P2.follow(P1);
			return 0;
			break;
		case 'C':
		case 'c':
			cout << "--------�[�`--------" << endl;
			cout << N2.name;
			P2.playerCover(P1);
	
			for (;;) {
				cout << "��` / ��P?(F/D)" << endl;//����P1
				cin >> command;
				if ((command != 'f') || (command != 'F') || (command != 'd') || (command != 'D')) {
					cout << "���n�n��J����...�|�Q���a����~ >/////<" << endl;
					cout << "�ЦA��J�@��" << endl;
				}
				else {
					break;
				}
			}
			commandExe1(command);

			break;
		case 'D':
		case 'd':
			cout << "--------��P--------" << endl;
			lastStep(P2.drop2());
			return 99;
			break;
		default:
			cout << "���n�n��J����...�|�Q���a����~ >/////<" << endl;
			cout << "�ЦA��J�@��" << endl;
			getCommands2();
	}
}

int Wallet::getCommands1() {
	char commandKey;
	cout << "��` / �[�` / ��P?(F/C/D)" << endl;
	cin >> commandKey;
	return commandExe1(commandKey);
}

int Wallet::commandExe1(char command) {
	switch (command) {
		case 'F':
		case 'f':
			cout << "--------��`--------" << endl;
			P1.follow(P2);
			return 0;
			break;
		case 'C':
		case 'c':
			cout << "--------�[�`--------" << endl;
			cout << N1.name;
			P1.playerCover(P2);
			for (;;) {
				cout << "��` / ��P?(F/D)" << endl;//����P1
				cin >> command;
				if ((command != 'f') || (command != 'F') || (command != 'd') || (command != 'D')) {
					cout << "���n�n��J����...�|�Q���a����~ >/////<" << endl;
					cout << "�ЦA��J�@��" << endl;
				}
				else {
					break;
				}
			}
			commandExe2(command);

			break;
		case 'D':
		case 'd':
			cout << "--------��P--------" << endl;
			lastStep(P1.drop1());
			return 99;
		default:
			cout << "���n�n��J����...�|�Q���a����~ >/////<" << endl;
			cout << "�ЦA��J�@��" << endl;
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
	cout << "����Ѿl���B" << endl;
	cout << endl;
	cout << N1.name << "$" << stake1 << " " << N2.name << "$" << stake2 << endl;
	cout << endl;
}