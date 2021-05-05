#include <vector>
#include <iostream>

using namespace std;

int main(){
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << vector1.at(0) << vector1.at(1) << endl;
	cout << "Vector1 Size: " << vector1.size() << endl;
	
	cout << vector2.at(0) << vector2.at(1) << endl;
	cout << "Vector2 Size: " << vector2.size() << endl;
	
	
	//Empty 2d Vector
	vector <vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;
	
	vector1.at(0) = 1000;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;
	
	cout << vector1.at(0) << endl << vector1.at(1);
	
	
	
	
}

/*	
	Vector Section Challenge:
	1. Declare 2 empty Vectors of ints named vector1 and vector 2.
	2. Add 100 and 200 the vector 2 dynamically using push_back()
		- Display Elements using at() as well as its size using size()
	3. Add 10 and 20 to Vector 1 dynamically using push_back()
		- Display Elements using at() as well as its size using size()
	
	4. Declare an empty 2d Vector called vector_2d
		-Add both original vectors to 2d vector using push_back().
		-Display elements of vector_2d using at()
		
	5. Change vector 1 at index 0 to 1000
		
	6. Display elements of vector_2d again
	
	7. Display Elements in Vector 1.
	
*/