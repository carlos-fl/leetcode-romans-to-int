#include <string>

class Solution {
public:
  int romanToInt(std::string s) {
    int c = 0;
    for(int i = 0; i < s.size(); i++) {
      switch (s[i]) {
        case 'I': c++;
          break;
        case 'V': c += 5;
          break;
        case 'X': c += 10;
          break;
        case 'L': c += 50;
          break;
        case 'C': c += 100;
          break;
        case 'D': c += 500;
          break;
        case 'M': c += 1000;
          break;
        default: c = 0;
          break;                          
      }
    }

    for(int i = 0; i < s.size(); i++) {
      if((s[i] == 'I' && s[i + 1] == 'V') || (s[i] == 'I' && s[i + 1] == 'X'))
        c -= 2; 
      else if((s[i] == 'X' && s[i + 1] == 'L') || (s[i] == 'X' && s[i + 1] == 'C')) 
        c -= 20;
      else if((s[i] == 'C' && s[i + 1] == 'D') || (s[i] == 'C' && s[i + 1] == 'M'))
        c -= 200;     
      }
      return c;
    }
};