/*
 * MapClass.cpp
 *
 *  Created on: Mar 25, 2012
 *      Author: halfpeaw
 */

#include <iostream>
#include "MapClass.h"


using namespace std;


MapClass::MapClass() {

}

MapClass::~MapClass() {
	// TODO Auto-generated destructor stub
}

void MapClass::setPiece(PieceClass piece, int x, int y) {
	if (x < MAPSIZE && y < MAPSIZE) {
		piece.setCoord(x,y);
		mapArray[x][y] = piece;
	} else {
		cout << "Constraint violated for setPiece Method";
	}
}

void MapClass::generateTextMap() {
	int i = 0;
	int j = 0;
	for (i = 0; i < MAPSIZE; i++) {
		for (j = 0; j < MAPSIZE*4+1; j++) {
			cout << "-";
		}
		cout << endl;
		for (j = 0; j < MAPSIZE; j++) {
			cout << '|' << mapArray[i][j].getName();
		}
		cout << '|' << endl;
	}
	for (j = 0; j < MAPSIZE*4+1; j++) {
				cout << "-";
	}
	cout << endl;
}
