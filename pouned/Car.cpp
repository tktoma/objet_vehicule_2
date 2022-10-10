#include "Car.h"


Car::Car(int p , int nbroue, float nbpoids ) : Vehicule(nbroue, nbpoids)
{
	this->passager = p;
}

Car::~Car()
{
		delete poids_passagers;	
}

void Car::SetNbPassager(int Nb)
{
	this->passager = Nb;
	this->poids_passagers = new int[Nb];
	srand(time(NULL));
	for (size_t i = 0; i < Nb; i++)
	{
	 this->poids_passagers[i] = rand() % 120 + 15;
	}
}

int Car::Getnombre_passager()
{
	return this->passager;
}

float Car::GetPoidsMoyen()
{
	float poids_total = 0;
	for (size_t i = 0; i < passager; i++)
	{
	 poids_total += this->poids_passagers[i];
	}
	poids_total = poids_total / passager;
	return poids_total;
}
