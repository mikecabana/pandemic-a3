#pragma once
#include "Observer.h"
class ObserverDecorator : public Observer {
protected:
	Observer *decoratedObserver;
	Statistics *s;
public:
	ObserverDecorator(Observer *decoratedObserver, Statistics *s) {
		this->decoratedObserver = decoratedObserver;
		this->s = s;
	}

	std::string Update() {
		return decoratedObserver->Update();
	}
};