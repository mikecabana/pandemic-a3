#pragma once
#include "Subject.h"
#include <string>
#include <iostream>

class Statistics : public Subject {
public:
	Statistics();
	~Statistics();
	//get cube count for each virus
	int getRedCubes();
	int getBlueCubes();
	int getYellowCubes();
	int getBlackCubes();
	//total count of cubes
	int getCubes();
	//get number of research stations available
	int getStations();
	//get number of infected cities
	int getCitiesInfected();
	//get number of viruses cured
	int getCured();
	//get number of virsues eradicatied
	int getEradicated();

	//modifiers
	void useCube(std::string color);
	void useStations();
	void incrementInfecetd();
	void incrementCure();
	void incrementEradicated();
private:
	int redCubes;
	int blueCubes;
	int blackCubes;
	int yellowCubes;
	int stations;
	int infected;
	int cured;
	int eradicated;
};