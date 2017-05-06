#include <iostream>
#include "Company.h"

string nomeempresa, ficheirocond, ficheirolinhas;
Company firma;
void menuficheiros();
void mainmenu();
void menugerircondutores();

int main(){

	menuficheiros();
	firma.setNome(nomeempresa);
	firma.setFichCondutores(ficheirocond);
	firma.setFichLinhas(ficheirolinhas);
	mainmenu();
	

  return 0;
}

void menuficheiros() {
	system("CLS");
	cout << "-------------------------EMPRESA DE TRANSPORTES \"SEMPRARROLAR\"-------------------------" << endl << endl;
	cout << "\t\t\tIntroduza nome para a empresa:" << endl << "\t\t\t";
	getline(cin, nomeempresa);
	cout << endl << "\t\t\tIntroduza nome do ficheiro de condutores:" << endl << "\t\t\t";
	getline(cin, ficheirocond);
	cout << endl << "\t\t\tIntroduza nome do ficheiro de linhas:" << endl << "\t\t\t";
	getline(cin, ficheirolinhas);
	system("CLS");
}

void mainmenu() {
	//system("CLS");
	cout << "-------------------------EMPRESA DE TRANSPORTES \"" << nomeempresa << "\"-------------------------" << endl << endl;
	cout << "\t\t\t1-Gerir Condutores" << endl;
	cout << "\t\t\t2-Ver Horario de Paragem" << endl;
	cout << "\t\t\t3-Ver trabalho atribuido a condutor" << endl;
	cout << "\t\t\t4-Ver informacao de Bus" << endl;
	cout << "\t\t\t5-Ver informacao de linha" << endl;
	cout << "\t\t\t6-Que linhas incluem esta Paragem?" << endl;
	cout << "\t\t\t7-Calcular Percurso" << endl;
	cout << "\t\t\t8-Periodos de autocarros sem condutor?" << endl;
	cout << "\t\t\t9-Condutores sem servico completo" << endl;
	cout << "\t\t\t10-Atribuir servico" << endl;
	cout << "\t\t\t0-Sair" << endl;
	int opcao;
	cout << "\t\t\t"; cin >> opcao;
	if (!cin) {
		system("CLS");
		cout << "Input Invalido! Tente outra vez." << endl;
		cin.clear();
		cin.ignore();
		mainmenu();
	}
	else if (opcao == 1) {
		system("CLS");
		menugerircondutores();
	}
	else if (opcao == 2) {
		
	}
	else if (opcao == 3) {
		
	}
	else if (opcao == 4) {
		
	}
	else if (opcao == 5) {
		
	}
	else if (opcao == 6) {
		
	}
	else if (opcao == 7) {
		
	}
	else if (opcao == 8) {
		
	}
	else if (opcao == 9) {
		
	}
	else if (opcao == 10) {
		
	}
	else if (opcao == 0) {

	}
	else {
		system("CLS");
		cout << "Input Invalido! Tente outra vez." << endl;
		cin.clear();
		cin.ignore();
		mainmenu();
	}

}

void menugerircondutores() {
	//system("CLS");
	cout << "-------------------------EMPRESA DE TRANSPORTES \"" << nomeempresa << "\"-------------------------" << endl << endl;
	cout << "\t\t\t\tGERIR CONDUTORES" << endl << endl;
	cout << "\t\t\t\t1-Adicionar Condutor" << endl;
	cout << "\t\t\t\t2-Editar Condutor" << endl;
	cout << "\t\t\t\t3-Eliminar Condutor" << endl;
	cout << "\t\t\t\t4-Display Condutores" << endl;
	cout << "\t\t\t\t0-Voltar" << endl;
	int opcao;
	cout << "\t\t\t"; cin >> opcao;
	if (!cin) {
		system("CLS");
		cout << "Input Invalido! Tente outra vez." << endl;
		cin.clear();
		cin.ignore();
		menugerircondutores();
	}
	else if (opcao == 1) {
		firma.adicionaCondutor();
		system("CLS");
		cout << "Condutor Adicionado Com Sucesso!!" << endl;
		menugerircondutores();
	}
	else if (opcao == 2) {

	}
	else if (opcao == 3) {

	}
	else if (opcao == 4) {
		system("CLS");
		firma.displayDrivers();
		system("PAUSE");
		system("CLS");
		menugerircondutores();
	}
	else if (opcao == 0) {
		system("CLS");
		mainmenu();
	}
	else {
		system("CLS");
		cout << "Input Invalido! Tente outra vez." << endl;
		cin.clear();
		cin.ignore();
		menugerircondutores();
	}
}