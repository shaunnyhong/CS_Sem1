// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
char var;
int num;

gotoxy (10, 10);
cout << "Hello, enter your favorite symbol: ";
cin >> var;

gotoxy (10, 10);
cout << "                                       ";


gotoxy (0, 24);
cout << "______________________________________________________________________________";

for (int y = 0; y < 18; y++) {
	for (int x = 0; x < 45; x++) {
		gotoxy (18 + x, 5 + y);
		cout << var;
	}
}
for (int y = 0; y < 14; y ++) {
	for (int x = 0; x < 37; x++) {
		gotoxy (22 + x, 7 + y);
		cout << " ";
	}
}

gotoxy (24, 13);
cout << "I have a gift, enter a number: ";
cin >> num;

for (int y = 0; y <50; y ++) {
	for (int x = 0; x < 100; x++) {
		gotoxy ( x, 0 + y);
		cout << " ";
	}
}

int counter = 0;

for (int y = 0; y < 30; y ++) {
	gotoxy (43 - y, 3);
	cout << var;
	counter = counter + 1;
}


counter = 0;

while (true) {
	if (num < counter) {
		cout << var;
		gotoxy (13, 1 + counter);
		sleep (1);
		counter = counter + 1;
	}
}
while (true) {
	if (num < counter) {
		cout << var;
		gotoxy (10, 1 + counter);
		sleep (1);
		counter = counter + 1;
	}
}
while (true) {
	if (num < counter) {
		cout << var;
		gotoxy (16, 1 + counter);
		sleep (1);
		counter = counter + 1;
	}
}

gotoxy (15, 5);
cout <<"/--------/---\\----------\\" << endl;
gotoxy (15, 6);
cout <<"|        | 0 |            |" << endl;
gotoxy (0,7);
cout << "______________________________________" << endl;

gotoxy (15, 12);
cout << "Happy Holidays, enjoy the snow"<< endl;
}

