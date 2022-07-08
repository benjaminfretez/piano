// piano for windows by benjaminfretez (b3njamïn)
// join https://discord.gg/FgZYVKwTN4

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <windows.h>
#include <fstream> // Required for files

using namespace std;
#pragma warning(disable:4996)

int main() {
	char key = 0;
	SetConsoleTitle(TEXT("piano"));
	cout << "piano by benjaminfretez\n";
	cout << "    | G | | |  \n";
	cout << "    | | | | |  \n";
	cout << "    | | | | |  \n";
	while (TRUE) {
		
		char key = getch();
		switch (key) {
		case '1':
			cout << "    | | | | |  \n";
			cout << "  * | | | | |  \n";
			cout << "    | | | | |  \n";
			Beep(261.63, 100);			
			break;
		case '2':
			cout << "    | | | | |  \n";
			cout << "   *| | | | |  \n";
			cout << "    | | | | |  \n";
			Beep(293.66, 100);
			break;
		case '3':
			cout << "    | | | | |  \n";
			cout << "    * | | | |  \n";
			cout << "    | | | | |  \n";
			Beep(329.63, 100);
			break;
		case '4':
			cout << "    | | | | |  \n";
			cout << "    |*| | | |  \n";
			cout << "    | | | | |  \n";
			Beep(349.23, 100);
			break;
		case '5': //g
			cout << "    | | | | |  \n";
			cout << "    | * | | |  \n";
			cout << "    | | | | |  \n";
			Beep(392, 100);
			break;
		case '6':
			cout << "    | | | | |  \n";
			cout << "    | |*| | |  \n";
			cout << "    | | | | |  \n";
			Beep(440, 100);
			break;
		case '7':
			cout << "    | | | | |  \n";
			cout << "    | | * | |  \n";
			cout << "    | | | | |  \n";
			Beep(493.88, 100);
			break;
		case '8':
			cout << "    | | | | |  \n";
			cout << "    | | |*| |  \n";
			cout << "    | | | | |  \n";
			Beep(523.25, 100);
			break;
		case '9':
			cout << "    | | | | |  \n";
			cout << "    | | | * |  \n";
			cout << "    | | | | |  \n";
			Beep(587.33, 100);
			break;
		case '0':
			cout << "    | | | | |  \n";
			cout << "    | | | |*|  \n";
			cout << "    | | | | |  \n";
			Beep(659.26, 100);
			break;
		case '-':
			cout << "    | | | | |  \n";
			cout << "    | | | | *  \n";
			cout << "    | | | | |  \n";
			Beep(698.46, 100);
			break;
		case '\u0027': // Latin American keyboard
			cout << "    | | | | |  \n";
			cout << "    | | | | *  \n";
			cout << "    | | | | |  \n";
			Beep(698.46, 100);
			break;
		case '¿': // Latin American keyboard
			cout << "    | | | | |  \n";
			cout << "    | | | | |*  \n";
			cout << "    | | | | |  \n";
			Beep(783.99, 100);
			break;
		case '=':
			cout << "    | | | | |  \n";
			cout << "    | | | | |*  \n";
			cout << "    | | | | |  \n";
			Beep(783.99, 100);
			break;
		}
	}
	
	return EXIT_SUCCESS;
}

// docs https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/getch-getwch?view=msvc-170
