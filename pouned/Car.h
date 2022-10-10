#pragma once
#include <iostream>
#include <time.h> 
#include "Vehicule.h"
class Car : public Vehicule
{
private: 
	int passager;
	int* poids_passagers;
	float poids_moyen;
public:
	Car(int p = 0, int nbroue = 4, float nbpoids = 1000);
	~Car();
	void SetNbPassager(int Nb);
	int Getnombre_passager();
	float GetPoidsMoyen();
};

