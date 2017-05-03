#include "Company.h"


Company::Company(string nome, string fichCondutores, string fichLinhas){
	this->nome = nome;
	ifstream ficheirocondutores(fichCondutores);
	if (ficheirocondutores.is_open())
	{
		Driver newDriver;
		char lixo;
		int auxint;
		string auxstr;
		while (!ficheirocondutores.eof())
		{
			ficheirocondutores >> auxint;
			newDriver.setId(auxint);
			ficheirocondutores >> lixo;
			getline(ficheirocondutores, auxstr, ';');
			newDriver.setName(auxstr);
			ficheirocondutores >> auxint;
			newDriver.setMaxHours(auxint);
			ficheirocondutores >> lixo;
			ficheirocondutores >> auxint;
			newDriver.setMaxWeekWorkingTime(auxint);
			ficheirocondutores >> lixo;
			ficheirocondutores >> auxint;
			newDriver.setMinRestTime(auxint);
			drivers.push_back(newDriver);
		}

		ficheirocondutores.close();
	}
	else cout << "Unable to open file!";

	ifstream ficheirolinhas(fichLinhas);
	if (ficheirolinhas.is_open())
	{
		Line newLine;
		char lixo;
		string paragens;
		string paragemnome;
		int tempo;
		int auxint;
		string auxstr;
		while (!ficheirolinhas.eof())
		{
			ficheirolinhas >> auxint;
			newLine.setId(auxint);
			ficheirolinhas >> lixo;
			ficheirolinhas >> auxint;
			newLine.setFreq(auxint);
			ficheirolinhas >> lixo;
			getline(ficheirolinhas, paragens, ';');
			int nrparagens = 0;
			paragens = paragens + ",";
			int pos = paragens.find(",");
			size_t aux = pos + 1;
			int i = 1;
			do {
				paragemnome = paragens.substr(i, pos - i);
				newLine.setStop(paragemnome);
				nrparagens++;
				aux = pos + 1;
				i = pos + 2;
				pos = paragens.find(",", aux);

			} while (!(paragens.find(",", aux) == string::npos));

			for (int i = 0; i < nrparagens - 2; i++)
			{
				ficheirolinhas >> tempo;
				newLine.setTime(tempo);
				ficheirolinhas >> lixo;
			}
			string auxiliar2;
			ficheirolinhas >> tempo;
			newLine.setTime(tempo);
			lines.push_back(newLine);
		}

		ficheirolinhas.close();
	}
	else cout << "Unable to open file!";
}

////////////////////////////////
// metodos get
///////////////////////////////
string Company::getNome() const{
  return nome;
}

//////////////////////////////
// metodos set
/////////////////////////////


////////////////////////////
// outros metodos
///////////////////////////

void Company::displayDrivers() {
	for (int i = 0;i < drivers.size();i++)
	{
		cout << "ID: " << drivers[i].getId() << "; ";
		cout << "Name: " << drivers[i].getName() << ";" << endl;
		cout << "Turno: " << drivers[i].getShiftMaxDuration() << ";" << endl;
		cout << "Max Horas Semana : " << drivers[i].getMaxWeekWorkingTime() << ";" << endl;
		cout << "Descanso entre turnos : " << drivers[i].getMinRestTime() << ";" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
	}
}

void Company::displayLines() {
	for (int i = 0;i < lines.size();i++)
	{
		cout << "ID: " << lines[i].getId() << ";" << endl;
		cout << "PARAGENS:" << endl;
		for (int j = 0;j < lines[i].getBusStops().size();j++)
		{
			if (j != 0) cout << " || ";
			cout << lines[i].getBusStops()[j];
		}
	}
}

void Company::distribuiServico(){
}
