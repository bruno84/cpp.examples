#include <iostream>
#include <fstream>

using namespace std;

// Adicionar esse trecho para permitir , em vez de .
template <typename T>
struct comma_separator : numpunct<T> {
    typename numpunct<T>::char_type do_decimal_point() const {
        return ',';
    }
};
// Para streams de out
template <typename T>
basic_ostream<T>& commaSep(basic_ostream<T>& os) {
    os.imbue(locale(locale(""), new comma_separator<T>));
    return os;
}
// Para streams de in
template <typename T>
basic_istream<T>& commaSep(basic_istream<T>& os) {
    os.imbue(locale(locale(""), new comma_separator<T>));
    return os;
}

int main() 
{
	ifstream fin;				// Objeto do arquivo
	fin.open("arquivo.tsv");   	// Associa objeto com o arquivo
		
	if(fin.is_open() == false) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }

	string produto;
	float valor;
	
	// Defina quais streams terao mudanca de pontuacao
 	cout << commaSep; 
 	fin >> commaSep;

	// Loop de leitura do arquivo
	while( fin.eof() == false )
	{
		fin >> produto >> valor;
		cout << " produto: " << produto << " valor: " << valor << "\n";
	}

	fin.close(); // Libera o arquivo
	
    system("pause");
	return 0;
}
