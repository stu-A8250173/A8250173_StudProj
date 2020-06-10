#include "Card.h"
#include"Extract.h"
#include<string>
#include<iostream>


using namespace std;

int main()
{
	/*Card C1(1);
	Card C2(52);

	C1.print();
	cout << endl;
	C2.print();
	*/
	Extract E1;
	for(int i=1;i<53;i++)
	cout << i << " " << E1.licensing() << endl;




	system("pause");
	return 0;

}