#include <iostream>

using namespace std;

void calculation (int base, double carryBit, int binaryResult);

int main (int argc, char *argv[])
{

	//base number being converted into
	int base = 0;

	//carryBit number before and during transformation
	double carryBit = 0.0; 

	//transform arg into variable for carryBit
	carryBit = atof(argv[1]);

	//transform arg into variable for base
	base = atof(argv[2]); 

	//variable for result of binary transformation
	int binaryResult = 0;


	//if the number given is not a decimal output error.
	if (carryBit > 1){

		cout<<"Make a valid entry.";
	}

	//if the number given is a decimal preform the calculation. 
	else{

		//print original
		cout<< "\nOriginial:\t" << carryBit << endl;

		//print binaryresult (the number in its new base)
		cout<< "Base " <<base<< " result:\t";

		//adds leading ones place and decimal
		cout<< "0.";

		//function call of calculation
		calculation (base,carryBit,binaryResult);

		//lines for formatting
		cout<<endl;

	}//end of else statement

	return 0;
}

/* Preforms the conversion/calculation */
void calculation (int base, double carryBit, int binaryResult)
{
	//int counter for whileloop
	int i = 0;

	while (i<8 && carryBit != 0){
		//increment counter 
		i = i+1;

		carryBit = base * carryBit;

		//binary result is transform carryBit to integer
		binaryResult = (int) carryBit;

		//carrybit is binary result subtracted from transformed carryBit to float
		carryBit = ((double) carryBit ) - binaryResult;

		//cerr << "\ncarryBit" << carryBit << endl;

		//output result with ';' required for assignment
		//';' allows the base 10 representation to be used 
		//in leiu of the hex representation.
		cout << binaryResult << ";";
	}

}






