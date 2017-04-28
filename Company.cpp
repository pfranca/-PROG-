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
