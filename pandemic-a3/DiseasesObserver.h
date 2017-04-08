#pragma once
#include "Observer.h"
#include "Diseases.h"
class DiseasesObserver : public Observer {
public:
	DiseasesObserver();
	DiseasesObserver(Diseases* s);
	~DiseasesObserver();
	void Update();
	void display();
private:
	Diseases *_subject;
};