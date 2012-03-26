//============================================================================
// Name        : StrategoBasic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "MapClass.h"
#include "PieceClass.h"
#include "PieceMarshal.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	MapClass map;
	PieceMarshal marPiece;
	map.setPiece(marPiece,0,0);
	map.generateTextMap();
	cout << "End Program" << endl;
	return 0;
}
