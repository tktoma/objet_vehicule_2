#include "Car.h"
int main()
{
	int gens;
	int nbojet;
	std::cout << "nb de car : " << std::endl;
	std::cin >> nbojet;
	Car* C = new Car[nbojet];
	for (size_t i = 0; i < nbojet; i++)
	{
		std::cout << "nb de gens : " << std::endl;
		std::cin >> gens;
		C[i].SetNbPassager(gens);
		std::cout << "moyenne objet" << i << ": " << C[i].GetPoidsMoyen() << std::endl;
	}
}