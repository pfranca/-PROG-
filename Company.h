#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Line.h"
#include "Driver.h"


using namespace std;

class Company{
 private:
  string nome;
  vector<Driver> drivers;
  vector<Line> lines;
 public:
	 Company(string nome, string fichCondutores, string fichLinhas);
  // metodos get
  string getNome() const;
  // metodos set
  // outros metodos
  void displayDrivers();
  void displayLines();
  void distribuiServico(); // funcao que implementa a afectacao de servico
};
