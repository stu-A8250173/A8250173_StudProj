#include"Bet.h"

Bet::Bet() {

}



//�U�`�q
void Bet::setQuant(int q) {
	quant = q;
}
int Bet::getQuant() {
	return quant;
}

//��`
void Bet::follow(Bet& b2) {
	int q = b2.getQuant();
	setQuant(q);
}

void Bet::playerCover(Bet& b2) {
	int q = b2.getQuant();
	int q2;
	cout << "�[�`�h���w�X?(�̤�$10)" << endl;
	cin >> q2;
	setQuant(q + q2);
}
int Bet::drop1() {
	return 2;
}
int Bet::drop2() {
	return 1;
}

