#pragma once

// Path: Project_OOP\Proprietario.h

#include <string>
#include<iostream>
#include "Veiculo.h"



using namespace std;

class Motociclo : public Veiculo
{
	int n_rodas;
	
public:
	Motociclo(string marca_m, string modelo_m, string matricula_m, int ano_m, int n_rodas_m); // Constructor por	parametros

	void setNRodas(int n_rodas); // Set para  n_rodas 

	void print(); // mostrar os dados do Motociclo

};
