#include "ResearchStations.h"
#include <iostream>

ResearchStations::ResearchStations() : stations(6) {
}
int ResearchStations::getStations(){
	return stations;
}
void ResearchStations::decreaseStations(){
	stations = stations - 1;
	Notify();
}
ResearchStations::~ResearchStations(){
}