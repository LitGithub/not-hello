#include <iostream>
using namespace std;

namespace MubbleWhomp {
	int flerple = 300;
};

namespace Nom {
	int Nom = 12;
	bool bom = true;
	string som = "PAUSE";
};

int flerple = 200;

int main() {
	cout << flerple << endl;
	cout << MubbleWhomp::flerple << endl;
	for (;Nom::bom;) {
		cout << Nom::Nom << endl;
		system(Nom::som.c_str());
	}
}