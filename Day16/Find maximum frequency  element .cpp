#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findMaxFrequencyElement(const vector<int>& arr) {
    unordered_map<int, int> freqMap;
    int maxFreq = 0;
    int maxEle = -1;

    for (int num : arr) {
        freqMap[num]++;
        if (freqMap[num] > maxFreq) {
            maxFreq = freqMap[num];
            maxEle = num;
        }
    }
    return maxEle;
}

int main() {
    vector<int> arr = {4, 5, 2, 5, 4, 5, 1};
    int result = findMaxFrequencyElement(arr);
    
    cout << "Maximum frequency element: " << result << endl;
    return 0;
}
