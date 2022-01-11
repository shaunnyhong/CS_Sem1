// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	int length;
	cout << "Please enter line length: ";
	cin >> length;

	char sym;
	cout << "Please enter line symbol: ";
	cin >> sym;
	
	int x;
	cout << "Please enter x-coordinate: ";
	cin >> x;
	
	int y;
	cout << "Please enter y-coordinate: ";
	cin >> y;
	
int counter = 0;

while (counter <= length) {
	gotoxy (x, y);
	cout << sym;
	counter = counter + 1;
	x = x + 1;
}
}
