#include <iostream>
#include <fstream>

using namespace std;

// Adicionar esse trecho para permitir , em vez de .
template <typename T>
struct comma_separator : std::numpunct<T> {
    typename std::numpunct<T>::char_type do_decimal_point() const {
        return ',';
    }
};
// Para streams de out
template <typename T>
std::basic_ostream<T>& comma_sep(std::basic_ostream<T>& os) {
    os.imbue(std::locale(std::locale(""), new comma_separator<T>));
    return os;
}
// Para streams de in
template <typename T>
std::basic_istream<T>& comma_sep(std::basic_istream<T>& os) {
    os.imbue(std::locale(std::locale(""), new comma_separator<T>));
    return os;
}

int main() 
{
	ifstream fin;				// Objeto do arquivo
	fin.open("arquivo.tsv");   	// Associa objeto com o arquivo
	
	string produto;
	float valor;
	
	// Defina quais streams terao mudanca de pontuacao
 	cout << comma_sep; 
 	fin >> comma_sep;
	
	if(fin.is_open() == false) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }

	// Loop de leitura do arquivo
	do {
		fin >> produto >> valor;
		cout << " produto: " << produto << " valor: " << valor << "\n";
	}
    while( fin.good() );	// enquanto a entrada for boa e não EOF (end of file)

	fin.close(); // Libera o arquivo
	
    system("pause");
	return 0;
}
