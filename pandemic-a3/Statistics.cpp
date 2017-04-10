#include "Statistics.h"

Statistics::Statistics() :redCubes(24), blueCubes(24), yellowCubes(24), blackCubes(24), stations(5), infected(13), cured(3), eradicated(1) {}

Statistics::~Statistics() {}

int Statistics::getBlackCubes() {
	return blackCubes;
}

int Statistics::getBlueCubes() {
	return blueCubes;
}

int Statistics::getRedCubes() {
	return redCubes;
}

int Statistics::getYellowCubes() {
	return yellowCubes;
}

int Statistics::getStations() {
	return stations;
}

int Statistics::getCitiesInfected() {
	return infected;
}

int Statistics::getCured() {
	return cured;
}

int Statistics::getEradicated() {
	return eradicated;
}

void Statistics::useCube(std::string color) {
	if (color == "red") {
		redCubes -= 1;
		Notify();
	}
	else if (color == "blue") {
		blueCubes -= 1;
		Notify();
	}
	else if (color == "yellow") {
		yellowCubes -= 1;
		Notify();
	}
	else if (color == "black") {
		blackCubes -= 1;
		Notify();
	}
	else
		std::cout << "No cube of that color" << std::endl;
}

void Statistics::useStations() {
	stations -= 1;
	Notify();
}

void Statistics::incrementInfecetd() {
	infected += 1;
	Notify();
}

void Statistics::incrementCure() {
	cured += 1;
	Notify();
}

void Statistics::incrementEradicated() {
	eradicated += 1;
	Notify();
}