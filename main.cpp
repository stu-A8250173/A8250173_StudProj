#include "Card.h"
#include"Extract.h"
#include "Deck.h"
#include "Compare.h"
#include"Bet.h"
#include"PlayerName.h"
#include"Wallet.h"
#include"Preprocess.h"

#include<string>
#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "����������H��" << endl;
	cout << "����:������v1.0" << endl;
	cout << "�@��:������ �L����" << endl;
	cout << "" << endl;
	cout << "��������:" << endl;
	cout << "" << endl;
	cout << "�P����A�̤p�AK�̤j" << endl;
	cout << "**�Ъ`�N��J���ܻ����A�H�K�y��Bug**" << endl;
	cout << "�ثe���]�m��P����o�U�`�v�������A�ݤ�ʿ�J" << endl;
	cout << "�ثe�C���S���]�m����(�Y�t�Ť��i��)" << endl;
	cout << "" << endl;
	cout << "����LBug�Ϋ�ĳ�бH�H��" << endl;
	cout << "moses0613@gmail.com" << endl;
	cout << "yiwung600@gmail.com" << endl;
	cout << "" << endl;
	cout << "���z�C���r��!!" << endl;
	cout << "" << endl;




	cout << "���UEnter�H�~��" << endl;
	_getch();
	system("cls");//�M��




	string player1, player2;
	cout << "�п�J���a�@���W��" << endl;
	cin >> player1;
	cout << "�п�J���a�G���W��" << endl;
	cin >> player2;
	PlayerName P1(player1, 1);
	PlayerName P2(player2, 2);
	Wallet START(P1,P2);//�C���}�l
		while (true)//�n�令��}��
		{
			Extract E;//�ҰʵP��
			Deck D1(P1.name);
			Deck D2(P2.name);
			int key = 0;

			//Round1
			system("cls");//�M��
			cout << "���UEnter�d��P1�����P P2�аj��" << endl;
			_getch();
			cout << "" << endl;
			D1.push(E.licensing());
			D1.print();
			cout << endl;
			cout << "���UEnter�H�����d��(�аO�n���P)";
			_getch();
			system("cls");//�M��
			cout << "���UEnter�d��P2�����P P1�аj��" << endl;
			_getch();
			cout << "" << endl;
			D2.push(E.licensing());
			D2.print();
			cout << endl;
			cout << "���UEnter�H�����d��(�аO�n���P)";
			_getch();
			system("cls");//�M��
		
		
//Round2
		cout << "�^�X�G ���UEnter�o�P" << endl;
		_getch();
		START.print();
		D1.push(E.licensing());
		D2.push(E.licensing());
		D1.print();
		cout << "" << endl;
		D2.print();
		cout << endl;
		int R2;
		cout << "�п�J�P�����j��(1 or 2)" << endl;
		cin >> R2;
		cout << "" << endl;
		key=START.play(R2);

		if (key == 99)
		{
			cout << "���UEnter�H�~��" << endl;
			_getch();
			system("cls");//�M��
			continue;
		}
		cout << endl;
			cout << "���UEnter�H�~��" << endl;
			_getch();
			system("cls");//�M��
		
		
//Round3
			cout << "�^�X�T ���UEnter�o�P" << endl;
			_getch();
			START.print();
			D1.push(E.licensing());
			D2.push(E.licensing());
			D1.print();
			cout << "" << endl;
			D2.print();
			cout << endl;
			int R3 ;
			cout << "�п�J�P�����j��(1 or 2)" << endl;
			cin >> R3;
			cout << "" << endl;
			key = START.play(R3);

			if (key == 99)
			{
				cout << "���UEnter�H�~��" << endl;
				_getch();
				system("cls");//�M��
				continue;
			}
			cout << endl;
			cout << "���UEnter�H�~��" << endl;
			_getch();
			system("cls");//�M��
//Round4
			
			cout << "�^�X�| ���UEnter�o�P" << endl;
			_getch();
			START.print();
			D1.push(E.licensing());
			D2.push(E.licensing());
			D1.print();
			cout << "" << endl;
			D2.print();
			cout << endl;
			int R4 ;
			cout << "�п�J�P�����j��(1 or 2)" << endl;
			cin >> R4;
			cout << "" << endl;
			key = START.play(R4);

			if (key == 99)
			{
				cout << "���UEnter�H�~��" << endl;
				_getch();
				system("cls");//�M��
				continue;
			}
			cout << endl;
			cout << "���UEnter�H�~��" << endl;
			_getch();
			system("cls");//�M��

//Round5
			cout << "�^�X�� ���UEnter�o�P" << endl;
			_getch();
			START.print();
			D1.push(E.licensing());
			D2.push(E.licensing());
			D1.print();
			cout << "" << endl;
			D2.print();
			cout << endl;
			int R5 ;
			cout << "�п�J�P�����j��(1 or 2)" << endl;
			cin >> R5;
			cout << "" << endl;
			key = START.play(R5);

			if (key == 99)
			{
				cout << "���UEnter�H�~��" << endl;
				_getch();
				system("cls");//�M��
				continue;
			}
			cout << endl;
			cout << "���UEnter�H�~��" << endl;
			_getch();
			system("cls");//�M��

	//�̲פ�j�p

		
		D1.lastprint();
		D2.lastprint();
		Compare C(D1, D2);
		int winner=C.Play();
		cout << endl;
		if (winner == 1)
			cout << "�Ӫ̬�:" << P1.name;
		else
			cout << "�Ӫ̬�:" << P2.name;
		cout << endl;
		START.lastStep(winner);
		START.print();
		cout << "���UEnter�H�}�l�U�@��" << endl;
		_getch();
		system("cls");//�M��
		
		}





	
		system("pause");
		return 0;

	
}
