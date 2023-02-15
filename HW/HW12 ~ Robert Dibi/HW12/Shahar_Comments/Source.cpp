#include <iostream>
#include <unordered_set>
#include <vector>

void PrintSumPairs(std::vector<int> vec, int num) { //-10 missing first implementation 
    std::unordered_set<int> complements;
    for (int i : vec) {
        int complement = num - i;
        if (complements.count(i) != 0) {
            std::cout << complement << "," << i << std::endl;
        }
        else {
            complements.insert(complement);
        }
    }
}