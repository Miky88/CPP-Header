#include <iostream>
using namespace std;

int header(string array[], int size, int columns = 40) {
	cout << char (201);
	for (int i=1; i<=columns; i++) cout << char (205);
	cout << char (187) << endl;
	for (int i=0; i<size; i++) {
		if(array[i].length() % 2 == 1) array[i] += " ";
		cout << char (186);
		for (int j=0; j <=(columns-2)/2-array[i].length()/2; j++) cout << char(32);
		cout << array[i];
		for (int j=0; j <=(columns-2)/2-array[i].length()/2; j++) cout << char(32);
		cout << char (186) << endl;
	}
	cout << char (200);
	for (int j=1; j<=columns; j++) cout << char (205);
	cout << char (188) << endl;
	return 0;
}

int main () {
	string head[] = {
		"Hello World!",
		"Hello everybody!",
		"Hello World! Hello World! Hello World"
	};
	
	header(head, 3);
}