#include <iostream>
using namespace std;


/*Program for taking glovebox dimensions and elevator/doorway dimensions to determine what needs to be removed, if anything*/

//Ask for and store user input of glovebox dimensions and elevator dimensions

int gloveboxLength;
int gloveboxWidth;
int elevatorDepth;
int elevatorDoorWidth;

void gloveboxQuestions() {

	cout << "Please enter Glovebox length" << endl;
	cin >> gloveboxLength;

	cout << "Please enter Glovebox width" << endl;
	cin >> gloveboxWidth;
}

void elevatorQuestions() {

	cout << "Please enter Elevator depth" << endl;
	cin >> elevatorDepth;

	cout << "Please enter Elevator door width" << endl;
	cin >> elevatorDoorWidth;
}

/* Glovebox lengths
1250 without freezer: 79.25
1250 with freezer: 89.75
1500 without freezer: 89.25
1500 with freezer: 99.75
1800 without freezer: 101.25
1800 with freezer: 111.75
1950 without freezer: 107.25
1950 with freezer: 117.75
*/
void gloveboxLength() { 

	int standard1250 = 96;
	int standard1500 = 110;
	int standard1800 = 120;
	int standard1950 = 120;

}

/* Glovebox width
780 no pipes or gloveport: 33
780 with pipes no gloveport: 38.5
780 with pipes and gloveport: 39.5
1000 single sided no pipes or gloveport: 42
1000 single sided with pipes no gloveport: 44
1000 single sided with pipes and gloveport: 49.5
1000 double sided no pipes or gloveport: 42
1000 double sided with pipes no gloveport: 44
1000 double sided with pipes and gloveport: 45
1200 no pipes or gloveport: 33
1200 with pipes no gloveport: 38.5
1200 with pipes and gloveport: 39.5
*/

void gloveboxWidth() {

	int standard780 = 39.5;
	int stnadard1000 = 49.5;
	int standard1250 = 59.5;
}

int main(){

	gloveboxQuestions();

	elevatorQuestions();

}

//For loop to compare glovebox dimensions and elevator dimensions. Possibly different loops for width and length? 

