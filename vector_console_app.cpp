#include <iostream>
#include <vector>
#include <string>

/*
	Console Menu Application.
	The user is given a menu of inputs that perform different tasks on a vector of ints.
*/

using namespace std;
void options();
string get_choice();
int main(){
	vector <int> inputArray;
	string choice;
	int largest = 0;
	int smallest;
	int add;
	int mean;
	options();
	choice = get_choice();
	while(choice != "Q" || choice != "q"){ // Keep looping as long as the user does not quit.
		if(choice == "A" || choice == "a"){ //Add to end of vector.
			cout << "What number would you like to add? (ints only!!)" << endl;
			cin >> add;
			cout << add << " added." << endl;
			inputArray.push_back(add);
			options();
			choice = get_choice();
			
		} else if(choice == "P" || choice == "p"){ //Print all values in vector.
			//print
			for(int i : inputArray){
				cout << i << ", ";
			}
			cout << endl;
			options();
			choice = get_choice();
		} else if(choice == "L" || choice == "l"){ //Print largest int in vector.
			for (int i : inputArray){
				if(largest < i){
					largest = i;
				};
			}
			cout << "Largest number = " << largest << endl;
			options();
			choice = get_choice();
			
		} else if (choice == "S" || choice == "s"){ //Print smallest int in vector.
			smallest = inputArray[0];
			for (int i : inputArray){
				if(smallest > i){
					smallest = i;
				};
			}
			cout << "Smallest number = " << smallest << endl;
			options();
			choice = get_choice();
		} else if(choice == "M" || choice == "m"){ //Calculate and print mean of vector.
			int total;
			for(int i : inputArray){
				total += i;
			}
			mean = total/inputArray.size();
			
			cout << mean << " mean" << endl;
			options();
			choice = get_choice();
		} else if(choice == "Q" || choice == "q"){ //Quit + break out of loop.
			cout << "See you next time" << endl;
			break;
		} else { //Request valid input.
			cout << "Enter a valid input." << endl;
			options();
			choice = get_choice();
		}
	}
	
		
	return 0;
}

void options(){ //Display input choices to user.
	cout << "Options: " << endl;
	cout << "P - Print Array" << endl;
	cout << "A - Add Number" << endl;
	cout << "L - Largest Number" << endl;
	cout << "S - Smallest Number" << endl;
	cout << "M - Mean" << endl;
	cout << "Q - Quit program" << endl;
	cout << endl;
};

string get_choice(){ //Cin the actual choice selected by user in a string.
	string choice;
	cin >> choice;
	return choice;
}

