#include <iostream>
#include <string>
#include <math.h>


using namespace std;


void matrixMultiplicationInstructions() {

	cout << "The multiplication of two matrices is only possible if the matrice A row quantity and the matrice B coloumn quantity are the same." << endl;
	cout << "Ex:" << endl;

	float fRowsMatrixA = 2, fColumnsMatrixA = 3;
	int iAMatrixEX[] = { 1, 2, 3 };
	int iBMatrixEX[] = { 4, 5, 6 };
	int* iMatrixEX[] = { iAMatrixEX, iBMatrixEX };

	for (int i = 0; i < fRowsMatrixA; i++)
	{
		for (int j = 0; j < fColumnsMatrixA; j++) {
			cout << iMatrixEX[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "This is a " << fRowsMatrixA << " x [" << fColumnsMatrixA << "] matrice." << endl << endl;

	int iRowsMatrixB = 3, iColumnsMatrixB = 3;
	int iAMatrixBEX[] = { 6, 5, 4 };
	int iBMatrixBEX[] = { 1, 2, 3 };
	int iCMatrixBEX[] = { 2, 4, 6 };
	int* iMatrixBEX[] = { iAMatrixBEX, iBMatrixBEX };

	for (int i = 0; i < iRowsMatrixB; i++)
	{
		for (int j = 0; j < iColumnsMatrixB; j++) {
			cout << iMatrixBEX[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "This is a [" << iRowsMatrixB << "] x " << iColumnsMatrixB << " matrice." << endl << endl << endl;
	cout << "As you can see. The matrices A (2x[3]) and B ([3]x3)" << "can be multiplificated." << endl;
	cout << "Press ENTER to continue you multiplifications of matrices." << endl;
	cin.get();

}


double ** matrixMultiplication() {
	
	//Pointers
	double* dPointerdRowsMatrixA = NULL;
	//double* dPointerdColumnMatrixA = NULL;
	double* dPointerdRowsMatrixB = NULL;
	//double* dPointerdColumnMatrixB = NULL;

	//user inputs
	double dRowsMatrixA, dColumnMatrixA;
	double dRowsMatrixB, dColumnMatrixB;

	//store memory pointers
	dPointerdRowsMatrixA = new double[dRowsMatrixA];
	//dPointerdColumnMatrixA = new double[dColumnMatrixA];
	dPointerdRowsMatrixB = new double[dRowsMatrixB];
	//dPointerdColumnMatrixB = new double[dColumnMatrixB];
	
	//Temp variables
	//Maybe I can change it with: double sLen = sizeof(dPointerdRowsMatrixA)/sizeof(dPointerdRowsMatrixA[0])  
	double dTempdRowsMatrixA[10]; 
	//double dTempdColumnMatrixA[10]; 
	double dTempdRowsMatrixB[10]; 
	//double dTempdColumnMatrixB[10];

	//float fRowsMatrixAValuers[fRowsMatrixA], fColumnMatrixAValuers[fColumnMatrixA];
	//float fRowsMatrixBValuers[fRowsMatrixB], fColumnMatrixBValuers[fColumnMatrixB];

	char cInstructions;
	cout << "Do you want to see the instructions for a multiplications of matrices? (y/n)" << endl;
	
	cin >> cInstructions;
	if (cInstructions == 'y')
	{
		matrixMultiplicationInstructions();
	}

	cout << "Put down  the nescessary valouers..." << endl;
	cout << "Put here how many rows there is in the first matrix (Matrix A):  ";
	cin >> dRowsMatrixA;
	cout << endl;
	cout << "Put here how many columns there is in the matrix A:  ";
	cin >> dColumnMatrixA;
	cout << endl << endl;
	cout << "Put here all numbers of Matrice A" << endl << "Ex: " << endl;
	cout << "1 2 3	 [ENTER]" << endl;
	cout << "4 5 6	 [ENTER]" << endl;
	cout << "7 8 9	 [ENTER]" << endl << endl;
	cout << "Now your turn: " << endl;
	for (int i = 0; i < dRowsMatrixA; i++)
	{
		cout << "Enter the itens for the line nummber " << i + 1 << endl;
		cin >> dTempdRowsMatrixA[i];
		*(dPointerdRowsMatrixA + i) = dTempdRowsMatrixA[i];
	}

	for (int i = 0; i < dRowsMatrixA; i++)
	{
		cout << " " << *(dPointerdRowsMatrixA + i)<< " " << endl;

	}
	
	
	
	cout << "Put here how many rows there is in the secound matrix (Matrix B):  ";
	cin >> dRowsMatrixB;
	cout << endl;
	cout << "Put here how many columns there is in the matrix B:  ";
	cin >> dColumnMatrixB;
	cout << endl << endl;

	if (dColumnMatrixA != dRowsMatrixB)
	{

		cout << "I'm sorry but this matrices can't be multiplicated" << endl;

	}
	else
	{
		cout << "Please put the numbers of the first row (first line) of matrice A. Separeted by a SPACE between them" << endl; 
		for (int i = 0; i < dRowsMatrixA; i++)
		{

		}
	}
}

double ** matrixSum() {

}

double ** matrixSubtraction() {

}

void matrixSumInstructions() {

}

void instructions() {

	cout << " A matrix is made of two valuers..." << endl << endl;
	cout << "Rows --->" << endl;
	cout << "Columns |" << endl;
	cout << "        |" << endl;
	cout << "        |" << endl;
	cout << "       \\/" << endl << endl << endl;

}

int main(int arg, char * argv[]){

	

	float fMatrixOperation;
	char sInstructions;
	cout << "Do you want to see the instructions ? (y/n)";
	cin >> sInstructions;
	
	if (sInstructions == 'y')
	{
		instructions();
	}
	

	
	cout << "Please select the option you want to do..." << endl;
	cout << "(1) for Multiplication of matrices" << endl;
	cout << "(2) for sum of matrices" << endl;
	cout << "(3) for subtraction of matrices" << endl << endl;
	cin >> fMatrixOperation;



	if (fMatrixOperation == 1)
	{
		cout << "matrixMultiplication";
		//matrixMultiplication();
	}
	if (fMatrixOperation == 2)
	{
		cout << "matrixSum";
		//matrixSum();
	}
	if (fMatrixOperation == 3)
	{
		cout << "matrixSubtraction";
		//matrixSubtraction();
	}
	else
	{
		"Ups... something wrong! please restart the program and select a option between 1 and 3";
		exit(4);
	}

	
	return 0;
}