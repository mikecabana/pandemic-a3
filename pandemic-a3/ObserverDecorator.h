#pragma once
#include "Observer.h"
class ObserverDecorator : public Observer {
protected:
	Observer *decoratedObserver;
public:
	ObserverDecorator(Observer *decoratedObserver) {
		this->decoratedObserver = decoratedObserver;
	}

	std::string Update() {
		return decoratedObserver->Update();
	}
};