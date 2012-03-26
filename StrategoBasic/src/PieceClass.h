/*
 * PieceClass.h
 *
 *  Created on: Mar 25, 2012
 *      Author: halfpeaw
 */

#ifndef PIECECLASS_H_
#define PIECECLASS_H_

#include <string>

namespace std {

class PieceClass {
public:
	PieceClass();
	virtual ~PieceClass();
	int getScore();
	string getName();
	void setCoord(int x, int y) {mapX = x; mapY = y;};

protected:
	int score;
	string name;
	int owner;
	int mapX;
	int mapY;


};

} /* namespace std */
#endif /* PIECECLASS_H_ */
