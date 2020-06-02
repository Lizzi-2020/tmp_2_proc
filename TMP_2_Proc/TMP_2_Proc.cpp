#include <iostream>
#include <fstream>

//#include "bus.h"
//#include "truck.h"
#include "list.h"
//#include "node.h"
//#include "transport.h"
//#include "ina.h"
//#include "busin.h"
//#include "truck.h"
#include "inall.h"
//#include "busout.h"
#include "outall.h"
#include "clear.h"
using namespace std;

int main(int argc, char* argv[]) {
	cout << argc << endl;
	setlocale(LC_CTYPE, "rus");
	if (argc != 3)
	{
		cout << "Wrong command line arguments\n";
		return 1;
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	List c;
	In(c, ifst);
	Out(c, ofst);
	Clear(c);
	//system("pause");
	return 0;
}