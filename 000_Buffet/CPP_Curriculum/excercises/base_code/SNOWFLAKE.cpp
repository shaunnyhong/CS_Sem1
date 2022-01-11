// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

char sym;
cout << "Please enter char: ";
cin >> sym;

int d;
cout << "Please enter duration: ";
cin >> d;

int counter = 0;

while (true) {
	if (counter%2 == 0) {
		gotoxy (10, 5 + counter);
		cout << sym<<endl;
		sleep (1);
			gotoxy (10, 5 + counter);
			cout << " "<<endl;
		counter = counter + 1;
	}
	else {
		gotoxy (10 - 1, 5 + counter);
		cout << sym<<endl;
		sleep (1);
			gotoxy (10 - 1, 5 + counter);
			cout << " " << endl;
		counter = 1 + counter;
	}
	if (counter == d) {
		break;
	}
}
}