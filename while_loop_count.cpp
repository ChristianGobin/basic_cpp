#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    int count {0};
    int indexer {0};
    while (indexer+1 <= vec.size() && vec.at(indexer) != -99  ) {
        count++;
        indexer++;
    }
    return count;
}
