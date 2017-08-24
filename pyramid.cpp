#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************
* This program prints a pyramid to the console
* Prints two different styles of pyramids of a
* user-inputted width
*
* TODO:
*	- fix printTraditionalPyramid()
*   - add user-input checks to getStyle() and 
*     	getWidth()
**********************************************/


/**********************************
* Prompts user for pyramid width
**********************************/
int getWidth() {
	cout << " \nEnter an integer to generate the pyramid: ";	
	int width = 0;		
	cin >> width;
	return width;
}

/**********************************
* Prompts user for pyramid style
**********************************/
int getPyramidStyle() {
	int style = 2;	
	cout << "\nSelect the style of pyramid you would like: "
		 << "\n\n(1) Mario-inspired "
         << "\n(2) Traditional "
         << "\n\nStyle: ";

	cin >> style;
	return style;
}

/**********************************
* Prints mario-style pyramid
**********************************/
void printMarioPyramid(int baseWidth) {
	cout << "\n";	
	// prints pyramid one layer at a time
	for (int currentLayer = 1; currentLayer <= baseWidth; currentLayer++) {
		cout << setw(baseWidth - currentLayer + 1);  // centers each layer		
		for (int i = 1; i <= currentLayer; i++) {
			cout << "#";
		}
		cout << "  ";                                // adds gap down middle of
		for (int i = 1; i <= currentLayer; i++) {    // 	of pyramid
			cout << "#";
		}
		cout << endl;		
	}	
}

/**********************************
* Prints traditional-style pyramid
**********************************/
void printTraditionalPyramid(int baseWidth) {
	cout << "\n";	
	for (int currentLayer = 1; currentLayer <= baseWidth; currentLayer+=2) {
		cout << setw(baseWidth - currentLayer);		
		for (int i = 1; i <= currentLayer; i++) {
			cout << "#";
		}
		cout << endl;
	}
}

/**********************************
* Gives intro, runs prompts, selects
* 	appropriate function to print 
* 	pyramid
**********************************/
int main() {
	cout << "\nThis program puts a pyramid on the screen! ";
	
	int pyramidStyle = getPyramidStyle();
	int pyramidWidth = getWidth();	

	if (pyramidStyle == 1) {
		printMarioPyramid(pyramidWidth);
	}
	else {
		printTraditionalPyramid(pyramidWidth);
	}

	return 0;
}
