#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	std::string S;
	std::string S0;
	std::string SF;
	ifstream file("f.txt");
	getline(file,S0);
	cout << "Vvedite stroky S" << '\n';
	getline(std::cin,S);
	SF=S0;
	SF+="C";
	while (S.find("C")!=-1) {
		S.replace(S.find("C"),1,"zam_simvol");
	}
	while (S.find("zam_simvol")!=-1) {
                S.replace(S.find("zam_simvol"),9,SF);
        }
	std::cout << "stroka S: " << S << '\n' << "stroka S0: "  << S0 << '\n';
	ofstream file2("t.txt");
	file2 << S0 << '\n' << S << '\n';
	file.close();
	file2.close();
}
