#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanValues;
        romanValues['I'] = 1;
        romanValues['V'] = 5;
        romanValues['X'] = 10;
        romanValues['L'] = 50;
        romanValues['C'] = 100;
        romanValues['D'] = 500;
        romanValues['M'] = 1000;

        int total = 0;
        for (int i = 0; i < s.length(); ++i) {
            int current = romanValues[s[i]];

            // Check if there's a next character and if the current value is less than the next
            if (i + 1 < s.length() && current < romanValues[s[i + 1]]) {
                total -= current; // Subtract if the current numeral is smaller than the next
            } else {
                total += current; // Add otherwise
            }
        }
        return total;
    }
};
