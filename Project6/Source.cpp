#include<iostream>
#include "Header.h"
#include "stringWorker.h"



using namespace std;
//#define CLEAR system("cls")
//#define PI 3.14

int main() {
	
	/*cout << "hello 1" << endl;
	CLEAR;
	cout << "hello 2" << endl;
    CLEAR;
	cout << "hello 3" << endl;
	cout << PI << endl;*/
	int result = Calc :: sum(10,5);
	cout << result << endl;
	imageWorker::sum("IT", "STEP");
	system("pause");
	return 0;
}