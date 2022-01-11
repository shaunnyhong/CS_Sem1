// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

char s;
cout << "Please enter the symbol: ";
cin >> s;

int m = 0;
cout << "Please enter the line length: ";
cin >> m;

char which;
cout << "Horizontal, vertical, or diagonal? (H, V, D): ";
cin >> which;

int mem = 0;
int counter = 0;

//while (true) {

while (which =='H') {
	cout << s ;
		counter = counter + 1;
	if (counter == m) {
		break;
	}
}

while (which == 'V') {
		cout << s << endl;
		counter = counter + 1;
	if (counter == m) {
		break;
	}
	}
	

	while (which == 'D') {
	gotoxy (counter, counter);
	cout << s << endl;
	counter = counter + 1;
	
		if (counter == m) {
		break;
	}
}
//}
}