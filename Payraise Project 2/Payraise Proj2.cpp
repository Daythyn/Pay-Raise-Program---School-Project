/*
Give employees from a data file a pay raise, output to another data file.
9/25/2022
Daythyn Price
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

main(){
	
	//Setup in/out files
	ifstream indata;
	ofstream outdata;

	indata.open("Input.txt");
	outdata.open("Output.dat");

	//Set expected variables
	string firstn, lastn;
	double wage, pInc;
	
	//Set the output format 
	outdata << fixed << showpoint << setprecision(2);

	//Begin file read
	// I used the end-of-file check to also pull the data i needed, so that any input failure cancels the while loop.
while(indata >> lastn >> firstn >> wage >> pInc){

	// Do the math
	pInc += 100;
	pInc /= 100;
	wage *= pInc;
	
	//Output data to output file
	outdata  << firstn << " " << lastn << " " << setw(12) << right << wage << endl;
}
	//Close files
	indata.close();
	outdata.close();
	
	cout << "Done!";
	
	return 0;
}
