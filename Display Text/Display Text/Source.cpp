/* Aaron Pandain - 9/21/17
Assignment name: Display text
In this project we print text to the console in a readble foremat, 
where the screen pauses so the user is able to read what is displayed.*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

void main() {
	cout << "Hello World!" << endl;
	pause();
}