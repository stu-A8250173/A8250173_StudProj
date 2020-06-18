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
	cout << "梭哈單機雙人版" << endl;
	cout << "版本:正式版v1.0" << endl;
	cout << "作者:陳墨兮 林奕文" << endl;
	cout << "" << endl;
	cout << "版本說明:" << endl;
	cout << "" << endl;
	cout << "牌面為A最小，K最大" << endl;
	cout << "**請注意輸入提示說明，以免造成Bug**" << endl;
	cout << "目前未設置抽牌後獲得下注權的偵測，需手動輸入" << endl;
	cout << "目前遊戲沒有設置結束(即負債仍可玩)" << endl;
	cout << "" << endl;
	cout << "有其他Bug或建議請寄信至" << endl;
	cout << "moses0613@gmail.com" << endl;
	cout << "yiwung600@gmail.com" << endl;
	cout << "" << endl;
	cout << "祝您遊玩愉快!!" << endl;
	cout << "" << endl;




	cout << "按下Enter以繼續" << endl;
	_getch();
	system("cls");//清屏




	string player1, player2;
	cout << "請輸入玩家一的名稱" << endl;
	cin >> player1;
	cout << "請輸入玩家二的名稱" << endl;
	cin >> player2;
	PlayerName P1(player1, 1);
	PlayerName P2(player2, 2);
	Wallet START(P1,P2);//遊戲開始
		while (true)//要改成到破產
		{
			Extract E;//啟動牌組
			Deck D1(P1.name);
			Deck D2(P2.name);
			int key = 0;

			//Round1
			system("cls");//清屏
			cout << "按下Enter查看P1的底牌 P2請迴避" << endl;
			_getch();
			cout << "" << endl;
			D1.push(E.licensing());
			D1.print();
			cout << endl;
			cout << "按下Enter以結束查看(請記好底牌)";
			_getch();
			system("cls");//清屏
			cout << "按下Enter查看P2的底牌 P1請迴避" << endl;
			_getch();
			cout << "" << endl;
			D2.push(E.licensing());
			D2.print();
			cout << endl;
			cout << "按下Enter以結束查看(請記好底牌)";
			_getch();
			system("cls");//清屏
		
		
//Round2
		cout << "回合二 按下Enter發牌" << endl;
		_getch();
		START.print();
		D1.push(E.licensing());
		D2.push(E.licensing());
		D1.print();
		cout << "" << endl;
		D2.print();
		cout << endl;
		int R2;
		cout << "請輸入牌面較大者(1 or 2)" << endl;
		cin >> R2;
		cout << "" << endl;
		key=START.play(R2);

		if (key == 99)
		{
			cout << "按下Enter以繼續" << endl;
			_getch();
			system("cls");//清屏
			continue;
		}
		cout << endl;
			cout << "按下Enter以繼續" << endl;
			_getch();
			system("cls");//清屏
		
		
//Round3
			cout << "回合三 按下Enter發牌" << endl;
			_getch();
			START.print();
			D1.push(E.licensing());
			D2.push(E.licensing());
			D1.print();
			cout << "" << endl;
			D2.print();
			cout << endl;
			int R3 ;
			cout << "請輸入牌面較大者(1 or 2)" << endl;
			cin >> R3;
			cout << "" << endl;
			key = START.play(R3);

			if (key == 99)
			{
				cout << "按下Enter以繼續" << endl;
				_getch();
				system("cls");//清屏
				continue;
			}
			cout << endl;
			cout << "按下Enter以繼續" << endl;
			_getch();
			system("cls");//清屏
//Round4
			
			cout << "回合四 按下Enter發牌" << endl;
			_getch();
			START.print();
			D1.push(E.licensing());
			D2.push(E.licensing());
			D1.print();
			cout << "" << endl;
			D2.print();
			cout << endl;
			int R4 ;
			cout << "請輸入牌面較大者(1 or 2)" << endl;
			cin >> R4;
			cout << "" << endl;
			key = START.play(R4);

			if (key == 99)
			{
				cout << "按下Enter以繼續" << endl;
				_getch();
				system("cls");//清屏
				continue;
			}
			cout << endl;
			cout << "按下Enter以繼續" << endl;
			_getch();
			system("cls");//清屏

//Round5
			cout << "回合五 按下Enter發牌" << endl;
			_getch();
			START.print();
			D1.push(E.licensing());
			D2.push(E.licensing());
			D1.print();
			cout << "" << endl;
			D2.print();
			cout << endl;
			int R5 ;
			cout << "請輸入牌面較大者(1 or 2)" << endl;
			cin >> R5;
			cout << "" << endl;
			key = START.play(R5);

			if (key == 99)
			{
				cout << "按下Enter以繼續" << endl;
				_getch();
				system("cls");//清屏
				continue;
			}
			cout << endl;
			cout << "按下Enter以繼續" << endl;
			_getch();
			system("cls");//清屏

	//最終比大小

		
		D1.lastprint();
		D2.lastprint();
		Compare C(D1, D2);
		int winner=C.Play();
		cout << endl;
		if (winner == 1)
			cout << "勝者為:" << P1.name;
		else
			cout << "勝者為:" << P2.name;
		cout << endl;
		START.lastStep(winner);
		START.print();
		cout << "按下Enter以開始下一局" << endl;
		_getch();
		system("cls");//清屏
		
		}





	
		system("pause");
		return 0;

	
}
