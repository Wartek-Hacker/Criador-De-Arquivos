#include <iostream>
#include <fstream>

using namespace std;

/*

Criado Por Sweet Mods.

Função do codigo: Criar arquivos cpp com base ou txt vazio.

*Nome Personalizado
*Dominio n personalizado
*/


int cpp(string name);
int txt(string oname);
string nome;
string toc;

int main(){
	
	int resp;
	
	cout << "-------------------------\n";
	cout << "Creator Ofts\n";
	cout << "-------------------------\n\n";
	
	cout << "1-Criar Arquivo Cpp Base.\n2-Criar arquivo txt (vazio).\n3-Creditos.\n4-exit.\n->";
	cin >> resp;
	
	switch (resp){
		case 1:
			system("cls");
			cout << "Digite o nome do arquivo: ";
			cin >> nome;
			cpp(nome);
			break;
		case 2:
			system("cls");
			cout << "Digite o nome do arquivo: ";
			cin >> nome;
			txt(nome);
			break;
		case 3:
			system("cls");
			cout << "Criado por iSweet.\n\n";
			cout << "Digite g para voltar.\n->";
			cin >> toc;
			if(toc == "g" or toc == "G"){
				system("cls");
				return main();
			}else{
				system("cls");
				return 0;
			}
			break;
		case 4:
			system("cls");
			return 0;
			break;
	}
	
	return 0;
}

int cpp(string name){
	int reap;
	nome=name;
	ofstream arquivo;
	arquivo.open(nome+".cpp",ios::app);
	arquivo << "#include <iostream>\n\nusing namespace std;\n//code by Creator Ofts\n\nint main(){\n\n\nreturn 0;\n}";
	arquivo.close();
	system("cls");
	cout << "Arquivo cpp Criado Com Sucesso.\n\n";
	cout << "Deseja Voltar? [s=1/n=2]";
	cin >> reap;
	if(reap == 1){
		system("cls");
		return main();
	}else if(reap == 2){
		return 0;
	}
}

int txt(string oname){
	int reap;
	nome=oname;
	ofstream arquivo;
	arquivo.open(nome+".txt",ios::app);
	arquivo << "txt by Creator Ofts";
	arquivo.close();
	system("cls");
	cout << "Arquivo txt Criado Com Sucesso.\n\n";
	cout << "Deseja Voltar? [s=1/n=2]";
	cin >> reap;
	if(reap == 1){
		system("cls");
		return main();
	}else if(reap == 2){
		return 0;
	}
}
