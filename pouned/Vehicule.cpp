#include "Vehicule.h"

Vehicule::Vehicule(int nbroue, float nbpoids) 
{
	this->roue = nbroue;
	this->poids = nbpoids;
	if (nbroue %2  == 0)
	{
		this->chargeVideParEssieu = new float[nbroue / 2];
		for (size_t i = 0; i < nbroue/2; i++)
		{
			chargeVideParEssieu[i] = ((nbpoids / 2) / nbroue / 2);
		}
	}
	else
	{
		this->chargeVideParEssieu = new float[nbroue / 2 + 1];
	}
}

Vehicule::~Vehicule()
{
	delete chargeVideParEssieu;
}

int Vehicule::Getroue()
{
	return this->roue;
}

float Vehicule::GetPoids()
{
	return this->poids;
}

float Vehicule::ChargeParRoue()
{
	return this->poids / roue;
}
