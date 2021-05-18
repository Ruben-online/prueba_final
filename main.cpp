#include <iostream>
#include <string>

using namespace std;

int main() {
	string palabra;
	cout << "ingrese una palabra" << endl;
	cin >> palabra;
	for (int i = 0; i < palabra.length(); i++) {
		if (palabra[i] == 'a') palabra[i] = 'd';
		if (palabra[i] == 'b') palabra[i] = 'e';
		if (palabra[i] == 'c') palabra[i] = 'f';
		if (palabra[i] == 'd') palabra[i] = 'g';
		if (palabra[i] == 'e') palabra[i] = 'h';
		if (palabra[i] == 'f') palabra[i] = 'i';
		if (palabra[i] == 'g') palabra[i] = 'j';
		if (palabra[i] == 'h') palabra[i] = 'k';
		if (palabra[i] == 'i') palabra[i] = 'l';
		if (palabra[i] == 'j') palabra[i] = 'm';
		if (palabra[i] == 'k') palabra[i] = 'n';
		if (palabra[i] == 'l') palabra[i] = 'o';
		if (palabra[i] == 'm') palabra[i] = 'p';
		if (palabra[i] == 'n') palabra[i] = 'q';
		if (palabra[i] == 'o') palabra[i] = 'r';
		if (palabra[i] == 'p') palabra[i] = 's';
		if (palabra[i] == 'q') palabra[i] = 't';
		if (palabra[i] == 'r') palabra[i] = 'u';
		if (palabra[i] == 's') palabra[i] = 'v';
		if (palabra[i] == 't') palabra[i] = 'w';
		if (palabra[i] == 'u') palabra[i] = 'x';
		if (palabra[i] == 'v') palabra[i] = 'y';
		if (palabra[i] == 'w') palabra[i] = 'z';
		if (palabra[i] == 'x') palabra[i] = 'a';
		if (palabra[i] == 'y') palabra[i] = 'b';
		if (palabra[i] == 'z') palabra[i] = 'c';

		cout << palabra[i];

		cout << "ALJSLDKFJSALDJFLASJKDFASDJFLASDJFLASDJFLADSJF"<<endl<<endl;
	}

	return 0;
}