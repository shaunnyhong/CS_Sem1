// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here


int width;
cout << "Please enter box width: ";
cin >> width;

char sym;
cout << "Please enter char: ";
cin >> sym;

int height;
cout << "Please enter box height: ";
cin >> height;

int x;
cout << "Please enter x-coordinate: ";
cin >> x;

int y;
cout << "Please enter y-coordinate: ";
cin >> y;

int counter = 0;
int additional = 0;

	
while (true) {
	gotoxy (x, y);
	cout << sym;
	x = x + 1;
	counter = counter + 1;


	if (counter == width) {
		cout << endl;
		additional = additional + 1;
		counter = 0;
		


	}
	if (additional == height) {
		break;
	}
}
cout<<endl<<endl<<endl<<endl<<endl;
}
