#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Line.h"
#include "Driver.h"
#include <fstream>


using namespace std;

class Company{
 private:
  string nome;
  vector<Driver> drivers;
  vector<Line> lines;
 public:
	 Company();
	 Company(string nome, string fichCondutores, string fichLinhas);
  // metodos get
  string getNome() const;
  // metodos set
  void setNome(string nome);
  void setFichCondutores(string fichCondutores);
  void setFichLinhas(string fichLinhas);
  //outros metodos
  void displayDrivers();
  void displayLines();
  void adicionaCondutor();
  void distribuiServico(); // funcao que implementa a afectacao de servico
};
