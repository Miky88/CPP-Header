#include <iostream>
using namespace std;
enum chars : char {
	topLeft = char(201),
	horizontal = char(205),
	topRight = char(187),
	vertical = char(186),
	space = char(32),
	bottomLeft = char(200),
	bottomRight = char(188)
};
	
int header(string array[], int size) {

	int columns = 10;
	for (int i=0; i<size; i++) {
		if(columns < array[i].length() + 5 && array[i].length() % 2 == 1) columns = array[i].length() + 5;
		else if (columns < array[i].length() + 5 && array[i].length() % 2 == 0) columns = array[i].length() + 6;
	}
	
	cout << (char) topLeft;
	for (int i=1; i<=columns; i++) cout << (char) horizontal;
	cout << (char) topRight << endl;
	for (int i=0; i<size; i++) {
		if(array[i].length() % 2 == 1) array[i] += " ";
		cout << (char) vertical;
		for (int j=0; j <=(columns-2)/2-array[i].length()/2; j++) cout << (char) space;
		cout << array[i];
		for (int j=0; j <=(columns-2)/2-array[i].length()/2; j++) cout << (char) space;
		cout << (char) vertical << endl;
	}
	cout << (char) bottomLeft;
	for (int j=1; j<=columns; j++) cout << (char) horizontal;
	cout << (char) bottomRight << endl;
	return 0;
}

int main () {
	string head[] = {
		"Hello World!",
		"Hello everybody!",
		"Hello World! This is a sample text!"
	};
	
	header(head, sizeof(head)/sizeof(head[0]));
}
