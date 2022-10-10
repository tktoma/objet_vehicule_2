#pragma once
class Vehicule 
{
private:
	int roue;
	float poids;
	float * chargeVideParEssieu;
public:
	Vehicule(int nbroue, float nbpoids);
	~Vehicule();
	int Getroue();
	float GetPoids();
	float ChargeParRoue();
};

