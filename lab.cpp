#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int h,a,i,j;
	ifstream file("f1.txt");
	file >> h;
	file >> a;
	file.close();
	for (i=0;i<a;i++) {
		cout << "*";
	}
	cout << "\n";
	for (i=1;i<(h-1);i++) {
		cout << "*";
		for (j=1;j<(a-i-1);j++) {
			cout << " ";
		}
		cout << "*\n";
	}
	cout << "*\n";
}

// zapis zherez ofstream file("f2.txt");
