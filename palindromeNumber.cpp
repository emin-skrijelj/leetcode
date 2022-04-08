#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int reversed_num = 0,remainder;
        while(x!=0){
            remainder = x % 10;
            reversed_num = reversed_num * 10 + remainder;
            x /= 10;
        };
     
       return x == reversed_num ? false : true; 
    }
};
