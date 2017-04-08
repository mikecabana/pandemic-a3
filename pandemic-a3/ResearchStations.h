#pragma once
#include "Subject.h"
class ResearchStations : public Subject {
public:
	ResearchStations();
	int getStations();
	void decreaseStations();
	~ResearchStations();
private:
	int stations;
};