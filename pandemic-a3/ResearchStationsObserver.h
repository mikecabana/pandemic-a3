#pragma once
#include "Observer.h"
#include "ResearchStations.h"

class ResearchStationsObserver : public Observer {
public:
	ResearchStationsObserver();
	ResearchStationsObserver(ResearchStations* s);
	~ResearchStationsObserver();
	void Update();
	void display();
private:
	ResearchStations *_subject;
};