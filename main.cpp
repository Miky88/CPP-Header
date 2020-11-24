#include <iostream>
using namespace std;
int main () {
	const int R = 10;
	const int C = 40;
	string TEXT[] = {"Hello World!", "Hello everybody!", "Hello World! Hello World! Hello World!"};
	int size = sizeof(TEXT)/sizeof(TEXT[0]);

	cout << char (201);
	for (int i=1; i<=C; i++)
		cout << char (205);
	cout << char (187) << endl;
	
	for (int i=0; i<size; i++) {
		cout << char (186);
		for (int j=0; j <=(C-2)/2-TEXT[i].length()/2; j++)
			cout << char(32);
		cout << TEXT[i];
		for (int j=0; j <=(C-2)/2-TEXT[i].length()/2; j++)
			cout << char(32);
		cout << char (186) << endl;
	}
		
	cout << char (200);
	for (int j=1; j<=C; j++)
		cout << char (205);
	cout << char (188) << endl;
}
