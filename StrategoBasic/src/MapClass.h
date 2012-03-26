/*
 * MapClass.h
 *
 *  Created on: Mar 25, 2012
 *      Author: halfpeaw
 */

#ifndef MAPCLASS_H_
#define MAPCLASS_H_
#include "PieceClass.h"


using namespace std;

class MapClass {

public:
	MapClass();
	virtual ~MapClass();
	void generateTextMap();
	void setPiece(PieceClass piece, int x, int y);
private:
	static const int MAPSIZE = 3;
	PieceClass mapArray[MAPSIZE][MAPSIZE];
};

#endif /* MAPCLASS_H_ */
