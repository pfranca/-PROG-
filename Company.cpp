#include "Company.h"


Company::Company(string nome, string fichCondutores, string fichLinhas){
  
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
void readFiles(string nome) {
	ifstream ficheirocondutores(nome + "condutores");
	if (ficheirocondutores.is_open())
	{	
		Driver newDriver();
		char lixo;
		while (!ficheirocondutores.eof())
		{
			ficheirocondutores >> ncon.id;
			ficheirocondutores >> lixo;
			getline(ficheirocondutores, ncon.nome, ';');
			ficheirocondutores >> ncon.turno;
			ficheirocondutores >> lixo;
			ficheirocondutores >> ncon.maxHorasSemana;
			ficheirocondutores >> lixo;
			//string auxiliar; //por causo do problema da ultima linah do ficheiro em branco
			ficheirocondutores >> ncon.minHorasDescanso;
			condutores.push_back(ncon);
		}

		ficheirocondutores.close();
	}
	else cout << "Unable to open file!";

	ifstream ficheirolinhas(nome + "linhas");
	if (ficheirolinhas.is_open())
	{
		Linha nlinha;
		char lixo;
		string paragens;
		string paragemnome;
		int tempo;
		while (!ficheirolinhas.eof())
		{
			nlinha.paragens.resize(0);
			nlinha.tempos.resize(0);
			ficheirolinhas >> nlinha.id;
			ficheirolinhas >> lixo;
			ficheirolinhas >> nlinha.freq;
			ficheirolinhas >> lixo;
			getline(ficheirolinhas, paragens, ';');
			int nrparagens = 0;
			paragens = paragens + ",";
			int pos = paragens.find(",");
			size_t aux = pos + 1;
			int i = 1;
			do {
				paragemnome = paragens.substr(i, pos - i);
				nlinha.paragens.push_back(paragemnome);
				nrparagens++;
				aux = pos + 1;
				i = pos + 2;
				pos = paragens.find(",", aux);

			} while (!(paragens.find(",", aux) == string::npos));

			for (int i = 0; i < nrparagens - 2; i++)
			{
				ficheirolinhas >> tempo;
				nlinha.tempos.push_back(tempo);
				ficheirolinhas >> lixo;
			}
			string auxiliar2;
			ficheirolinhas >> tempo;
			nlinha.tempos.push_back(tempo);
			linhas.push_back(nlinha);
		}

		ficheirolinhas.close();
	}
	else cout << "Unable to open file!";
}
}


void Company::displayDrivers() {
	for (int i = 0;i < drivers.size();i++)
	{
		cout << "ID: " << drivers[i].getId << "; ";
		cout << "Name: " << drivers[i].getName() << ";" << endl;
		cout << "Turno: " << drivers[i].getShiftMaxDuration << ";" << endl;
		cout << "Max Horas Semana : " << drivers[i].getMaxWeekWorkingTime << ";" << endl;
		cout << "Descanso entre turnos : " << drivers[i].getMinRestTime << ";" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
	}
}

void Company::displayLines() {
	for (int i = 0;i < lines.size();i++)
	{
		cout << "ID: " << lines[i].getId << ";" << endl;
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
