#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i <= n ; i++){
        cin >> arr[i];
    }
    
    int x = n - 1;
    while(x >= 0){
        cout << arr[x] << " ";
        x--;
    }
    return 0;
}