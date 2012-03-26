/*
 * PieceClass.cpp
 *
 *  Created on: Mar 25, 2012
 *      Author: halfpeaw
 */

#include <iostream>
#include "PieceClass.h"

namespace std {

PieceClass::PieceClass() {
	score = 0;
	name = "   ";
	mapX = 0;
	mapY = 0;
}

PieceClass::~PieceClass() {
	// TODO Auto-generated destructor stub
}


int PieceClass::getScore() {
	return score;
}

string PieceClass::getName() {
	return name;
}



} /* namespace std */
