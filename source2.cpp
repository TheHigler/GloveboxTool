//Glovebox questions
int gloveboxLength;
int gloveboxWidth;
int freezerQuestion;
int elevatorDepth;
int elevatorDoorWidth;
int elevatorDoorheight;

int main () {
Cout << "enter glovebox length (i.e 1250)";
Cin >> gloveboxLength >> endl;
Cout << "enter glovebox width (i.e 780)"
Cin >> gloveboxWidth >> endl;
Cout << "does glovebox have a freezer?"
Cin >> freezerQuestion >> endl;
    If (freezerQuestion == yes) {
    	gloveboxLength + 10.5;
    }
    If (freezerQuestion == no) {
    	Return gloveboxLength;
    }
    
    If (gloveboxLength == 1250) {
    	gloveboxLength == 79.25
    }
    If (gloveboxLength == 1800) {
    	gloveboxLength == 101.25
    }
    If (gloveboxLength == 1950) {
    	gloveboxLength == 107.25
    }
    
    Else If (gloveboxWidth == 780) {
    	gloveboxWidth ==  38.5
    }
    Else If (gloveboxWidth == 1000) {
    	gloveboxWidth ==  49.5
    }
    
    Else If (gloveboxWidth == 1200) {
    	gloveboxWidth ==  51.25
    
    }

//Elevator questions
Cout << Please enter elevator depth << endl;
Cin >> elevatorDepth;
Cout << Please enter elevator width << endl;
Cin >> elevatorWidth;
Cout << Please enter elevator door width << endl;
Cin >> elevatorDoorWidth;
Cout << elevator door height << endl;
Cin >> elevatorDoorHeight;

    If (gloveboxLength < elevatorDepth && gloveboxWidth < elevatorDoorWidth) {
      Cout << Nothing needs to be removed;
    }
    If (gloveboxLength – 17 < elevatorDepth) {
      Cout << Remove large antechamber;
    }
    If (gloveboxLength – 30 < elevatorDepth) {
      Cout << remove both antechambers;
    }
    If (gloveboxLength – 40.5 < elevatorDepth) {
      Cout << Freezer panel needs silicone removed and reattached to box with four pieces of hardware;
    }
    If (gloveboxLength – 40.5 > elevatorDepth) {
      Cout << Glovebox needs to be removed from stand;
    }
    If (gloveboxWidth – 4.5 < elvatorDoorWidth) {
      Cout << remove pipes from rear of box;
    }
    If (gloveboxWidth – 5.5 < elevatorDoorWidth) {
      Cout << remove pipes from rear of box and flip window;
    }
    If (gloveboxWidth – 5.5 > elveatorDoorWidth) {
      Cout << boxtop needs to ship off of stand;
    }
}
