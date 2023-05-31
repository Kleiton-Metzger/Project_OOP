#pragma once

// Path: Project_OOP\Proprietario.h
#include<iostream>
#include <string>

using namespace std;

class Veiculo
{ 
private :
	string marca;
	string modelo;
	string matricula;
	int ano;
	
public:
	Veiculo(string marca_v, string modelo_v, string matricula_v, int ano_v); // Constructor por	parametros
    
	void setMarca(string marca);
	void setModelo(string modelo);
	void setMatricula(string matricula);
	void setAno(int ano);

	void print();

};
	
 