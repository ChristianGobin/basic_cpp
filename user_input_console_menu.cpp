#include <iostream>
#include <vector>


void Menu();


int main(){
	Menu();
	
	
	return 0;
}

void Menu(){
	char user_input;
	int user_number;
	std::vector <int> nums {};
	//create menu
	std::cout << "Welcome User!: Select an Option: \n" << std::endl;
	std::cout << "Add, Print, Mean, Smallest, Largest, Quit\n" << std::endl;
	std::cin >> user_input; 
	
	switch (user_input) {
		case 'a':
		case 'A':
			std::cout << "You Chose To Add Something.\nWhat number would you like to add? " << std::endl;
			std::cin >> user_number;
			nums.push_back(user_number);
			break;
		case 'p':
		case 'P':
			for(auto i : nums){
				std::cout << i;
			}
			
	}
	
	
	
}