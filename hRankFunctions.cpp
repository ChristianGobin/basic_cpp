#include <iostream>
#include <vector>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    vector <int> inputs {a,b,c,d};
    int greatest = a;
    for(int i = 0; i <= inputs.size(); i++){
        if(greatest < inputs[i]){
            greatest = inputs[i];
        }
    }
    cout << greatest;
    return greatest;
}

int main() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    max_of_four(a, b, c, d);
}
