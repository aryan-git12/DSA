class Solution {
public:
    bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while(i < j) {

        // Skip special characters from left
        if(!((s[i] >= 'a' && s[i] <= 'z') ||
             (s[i] >= 'A' && s[i] <= 'Z') ||
             (s[i] >= '0' && s[i] <= '9'))) {

            i++;
            continue;
        }

        // Skip special characters from right
        if(!((s[j] >= 'a' && s[j] <= 'z') ||
             (s[j] >= 'A' && s[j] <= 'Z') ||
             (s[j] >= '0' && s[j] <= '9'))) {

            j--;
            continue;
        }

        // Convert uppercase to lowercase
        char left = s[i];
        char right = s[j];

        if(left >= 'A' && left <= 'Z') {
            left = left + 32;
        }

        if(right >= 'A' && right <= 'Z') {
            right = right + 32;
        }

        // Compare
        if(left != right) {
            return false;
        }

        i++;
        j--;
    }

    return true;
    }
};