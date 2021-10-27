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
	ofstream fout;				// Objeto do arquivo
	fout.open("arquivo.tsv");   // Associa objeto com o arquivo
	
	if(fout.is_open() == false) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }
 
 	// Defina quais streams terao mudanca de pontuacao
 	cout << comma_sep; 
 	fout << comma_sep;
 	
 	float v1 = 11.50;
	float v2 = 12.50;
	string p1 = "arroz";
	string p2 = "feijao";
	
	cout << v1; // so pra testar
	
	fout << p1<<"\t"<<v1<<"\n";
	fout << p2<<"\t"<<v2<<"\n";

    // Libera o arquivo
	fout.close();
	
    system("pause");
	return 0;
}
