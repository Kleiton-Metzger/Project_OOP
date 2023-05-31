#pragma once

// Path: Project_OOP\Automovel.h

#include <string>
#include<iostream>
#include "Veiculo.h"
#include "Proprietario.h"

using namespace std;

class Automovel : public Veiculo
{
private:
	int n_portas;
	
public:
	Automovel(string marca_a, string modelo_a, string matricula_a, int ano_a, int n_portas_a); // Constructor por	parametros

	void setNPortas(int n_portas); // Set para  n_portas
	
	void print(); // mostrar os dados do Automovel

};
	