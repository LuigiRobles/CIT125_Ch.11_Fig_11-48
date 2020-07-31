// CIT125 Intro to C++ Luigi Robles
// 07-31-2020 Summer Term
// Ch.11 Pg.409 Figure 11-48 
// 5K race program
// stores finish times in an array

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{
	//declare and initialize array
	double finishTimes[5] = { 0.0 };

	//declare and initialize variables
	double avgTime = 0.0;
	double lowestTime = 0.0;

	//enter finish times
	for (int x = 0; x < 5; x += 1)
	{
		cout << "Time for race " << x + 1 << ": ";
		cin >> finishTimes[x]; //input for finish times
	}  //end for

	avgTime = getAverage(finishTimes, 5); //function call
	lowestTime = getLowest(finishTimes, 5); //function call

	cout << fixed << setprecision(1) << endl;
	cout << "Average 5K finish time: " << avgTime << endl; //output for average time
	cout << "Lowest 5K finish time: " << lowestTime << endl; //output for lowest time
	return 0;
}	//end of main function

//******Function definitions*****
double getAverage(double times[], int numElements)
{
	double total = 0.0;

	for (int x = 0; x < numElements; x += 1)
		total += times[x];
	//end for
	return total / numElements;
}	//end of getAverage function

double getLowest(double times[], int numElements)
{
	double lowest = times[0];
	for (int x = 1; x < numElements; x += 1)
		if (times[x] < lowest)
			lowest = times[x];
		//end if
	//end for
	return lowest;
}	//end of getLowest function



