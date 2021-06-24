#include <iostream>

float calc_eth_profits(float entry_price, float amount_held);

int main(){
    calc_eth_profits(11295, 200.1);
}

float calc_eth_profits(float entry_price, float amount_held){
    float current_price;
    float current_ether_price = 2014.24;

    float total_entry = entry_price * amount_held;
    current_price = current_ether_price * amount_held;
    cout << "You entered at: $" << entry_price << endl;
    cout << "You accumulated a total of " << amount_held <<" Ether."<< endl;
    cout << "Your initial investment: $" << total_entry << endl;

    cout << "Current Ethereum Price: $" << current_ether_price << endl;
    cout << "Current Total Dollar Holdings: $" << current_price << endl;
    return current_price;
}
