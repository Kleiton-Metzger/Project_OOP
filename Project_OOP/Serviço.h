#pragma once

// Path: Project_OOP\Proprietario.h
#include<iostream>
#include <string>

using namespace std;

class Servico
{
	int id;
	string tipo;
	string anotacao;
	string data;
	double custo;
	
public:
 
	Servico(int id, string tipo, string anotacao, string data, double custo);

	void print();

};
	
	
	
