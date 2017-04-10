#include "Statistics.h"
#include "StatisticObserver.h"

//decorators
#include "CubeRatio.h"
#include "StationRatio.h"
#include "InfectedRatio.h"
#include "VirusRatio.h"
#include "EradicatedRatio.h"

int main() {
	//statistic object
	Statistics *stat = new Statistics();
	
	start:
	
	//observers
	Observer *sOb = new StatisticObserver();
	
	std::cout << "Options" << std::endl;
	std::cout << "1 - Use a colored virus cube" << std::endl;
	std::cout << "2 - Use a research station" << std::endl;
	std::cout << "3 - Increment number of cities infected" << std::endl;
	std::cout << "4 - Increment number of viruses cured" << std::endl;
	std::cout << "5 - Increment number of viruses eradicated" << std::endl;
	std::cout << "0 - exit" << std::endl;
	
	int option;
	std::string color;
	std::cin >> option;
	switch (option) {
	case 1: 
		//decorator
		sOb = new CubeRatio(sOb, stat);
		stat->Attach(sOb);

		std::cout << "Type the color of cube to use (red/blue/black/yellow)" << std::endl;
		std::cin >> color;
		stat->useCube(color);
		
		stat->Detach(sOb);
		goto start;
	case 2: 
		//decorator
		
		sOb = new StationRatio(sOb, stat);
		stat->Attach(sOb);

		std::cout << "Research station used" << std::endl;
		stat->useStations();

		stat->Detach(sOb);
		goto start;
	case 3:
		//decorator
		sOb = new InfectedRatio(sOb, stat);
		stat->Attach(sOb);

		std::cout << "City infected" << std::endl;
		stat->incrementInfecetd();

		stat->Detach(sOb);
		goto start;
	case 4:
		//decorator
		sOb = new VirusRatio(sOb, stat);
		stat->Attach(sOb);

		std::cout << "Virus cured" << std::endl;
		stat->incrementCure();

		stat->Detach(sOb);
		goto start;
	case 5:
		//decorator
		sOb = new EradicatedRatio(sOb, stat);
		stat->Attach(sOb);

		std::cout << "Virus eradicated" << std::endl;
		stat->incrementEradicated();

		stat->Detach(sOb);
		goto start;
	case 0:
		std::cout << "Thanks for palying" << std::endl;
		//decorator
		sOb = new CubeRatio(new StationRatio(new InfectedRatio(new VirusRatio(new EradicatedRatio(sOb,stat),stat),stat),stat),stat);
		stat->Attach(sOb);
		stat->Notify();
		system("pause");
	}

}