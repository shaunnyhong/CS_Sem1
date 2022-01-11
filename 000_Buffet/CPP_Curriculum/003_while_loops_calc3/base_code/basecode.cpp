// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

while (true) {
cout << "Enter your first number: ";
int y = 0;
cin >> y;
cout << "Enter your second number: ";
int z = 0;
cin >> z;

cout << "Please enter a operation: ";
char s;
cin >> s;
	

	if (s == '*') {
		cout << y * z << endl;
	}
	
	if (s == '+') {
		cout << y + z << endl;
	}
	
	if (s == '-') {
		cout << y - z << endl;
	}
	if (s == '/') {
		cout << y / z << endl;
	}
	
	cout << "Would you like to continue? (Y/N): ";
	char answer;
	cin >> answer;
	
	if (answer == 'Y') {
		cout << "Got it, time to redo" << endl;
		
	}
	if (answer == 'N') {
		cout << "Thank you, you have ended" << endl;
		break;
	}
}
}