#include <cctype>
#include <string>

class IsPalindrome {
public:
    bool isValid(char a) {
        return isalpha(a) || isdigit(a);
    }
    bool isPalindrome(std::string s) {
        int i = 0, j = s.size()-1;

        while(i < j){
            if(!isValid(s[i])) i++;
            else if(!isValid(s[j])) j--;
            else if (tolower(s[i++]) != tolower(s[j--])) return false;
        }
        return true ;
    }
};
