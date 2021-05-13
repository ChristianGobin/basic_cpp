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
		    case 'L':
    case 'l':
      int l {0};
      for(auto i: nums){
        if(l < i){
          l = i;
        }
      } 
      std::cout << l << std::endl;
    case 'S':
    case 's':
      int s {0};
      for(auto si : nums){
        if(s < si){
          s = si;
        }
      }
      std::cout << s << std::endl;
    case 'M':
    case 'm':
      int mean {0};
      //find average and cout
			
	}
}
