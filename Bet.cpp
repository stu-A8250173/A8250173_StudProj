#include"Bet.h"

Bet::Bet() {

}



//下注量
void Bet::setQuant(int q) {
	quant = q;
}
int Bet::getQuant() {
	return quant;
}

//投注
void Bet::follow(Bet& b2) {
	int q = b2.getQuant();
	setQuant(q);
}

void Bet::playerCover(Bet& b2) {
	int q = b2.getQuant();
	int q2;
	cout << "加注多少籌碼?(最少$10)" << endl;
	cin >> q2;
	setQuant(q + q2);
}
int Bet::drop1() {
	return 2;
}
int Bet::drop2() {
	return 1;
}

