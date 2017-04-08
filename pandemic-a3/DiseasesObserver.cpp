
#include "DiseasesObserver.h"
#include "Diseases.h"
#include <iostream>

DiseasesObserver::DiseasesObserver(){
}

DiseasesObserver::DiseasesObserver(Diseases* s){
	_subject = s;
	_subject->Attach(this);
}

void DiseasesObserver::Update() {
	display();
}

void DiseasesObserver::display(){
	int cubes = _subject->getCubes();
	std::cout << "Red cubes : " << cubes << std::endl;
}