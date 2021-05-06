#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin >> a >> b;
    
    string aprime = a;
    string bprime = b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    
    aprime[0] = b[0];
    bprime[0] = a[0];
    
    cout << aprime << " " << bprime;
    return 0;
}