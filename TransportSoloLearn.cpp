#include <iostream>
using namespace std;

int main(){
   int total_people_waiting;

   cin >> total_people_waiting;

   if((total_people_waiting <= 50) && (total_people_waiting > 0)){
      cout << 50 - total_people_waiting << endl;
   } else {
      while(total_people_waiting > 50){
         total_people_waiting -= 50;
         
      }
      cout << 50 - total_people_waiting << endl;
   }
   return 0;
}
