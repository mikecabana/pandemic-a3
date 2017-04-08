#include "ResearchStationsObserver.h"
#include <iostream>

ResearchStationsObserver::ResearchStationsObserver(){
}

ResearchStationsObserver::ResearchStationsObserver(ResearchStations* s){
	_subject = s;
	_subject->Attach(this);
}

void ResearchStationsObserver::Update() {
	display();
}

void ResearchStationsObserver::display(){
	int sta = _subject->getStations();
	if (sta > 0){
		std::cout << "Stations available : " << sta << std::endl;
	}
	else{
		std::cout << "No stations available." << std::endl;
	}

}