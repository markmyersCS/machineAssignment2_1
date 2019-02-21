/**
* @file machineAssg2_1.cpp
* @author Mark Myers
*
*
* @section DESCRIPTION
* 
*Program takes an arbitrary decimal in base 10 and arbitrary base
*and converts the base 10 decimal into the new base.
*
*/

#include <iostream>

using namespace std;


void printDisplay(int base, double carryBit);
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

		//print display information
		printDisplay(base, carryBit);

		//function call of calculation
		calculation (base, carryBit, binaryResult);

		//lines for formatting
		cout<<endl;

	}//end of else statement

	return 0;
}

/**
*
* Preforms the conversion/calculation
*
* @param base - the base wanted
* @param carryBit - the decimal being converted
* @param binaryResult - the resulting decimal after conversion
*
*/
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

	}//end of while loop
}

/**
*
* Displays the information given and format for the results
*
* @param base - the base wanted
* @param carryBit - the decimal being converted
*
*/
void printDisplay(int base, double carryBit)
{
	//print original
	cout<< "\nOriginial:\t" << carryBit << endl;

	//print binaryresult (the number in its new base)
	cout<< "Base " <<base<< " result:\t";

	//adds leading ones place and decimal
	cout<< "0.";

}
