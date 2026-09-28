class Solution {
public:
    int longestPalindrome(string s) {

        int lower[26] = {0};
        int upper[26] = {0};

        for(int i = 0; i < s.length(); i++) {

            if(s[i] >= 'a' && s[i] <= 'z') {
                lower[s[i] - 'a']++;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z') {
                upper[s[i] - 'A']++;
            }
        }

        int answer = 0;
        bool odd = false;

        // Lowercase
        for(int i = 0; i < 26; i++) {

            if(lower[i] % 2 == 0) {
                answer += lower[i];
            }
            else {
                answer += lower[i] - 1;
                odd = true;
            }
        }

        // Uppercase
        for(int i = 0; i < 26; i++) {

            if(upper[i] % 2 == 0) {
                answer += upper[i];
            }
            else {
                answer += upper[i] - 1;
                odd = true;
            }
        }

        if(odd) {
            answer++;
        }

        return answer;
    }
};