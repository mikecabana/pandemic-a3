#pragma once
#include <string>
class Observer {
public:
	~Observer();
	virtual std::string Update() = 0;
protected:Observer();
};