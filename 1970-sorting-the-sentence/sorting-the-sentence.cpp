class Solution {
public:
    string sortSentence(string s) {

        vector<string> ans(10);
        string word = "";

        for(int i = 0; i <= s.length(); i++) {

            if(i == s.length() || s[i] == ' ') {

                if(word != "") {

                    int pos = word[word.length() - 1] - '0';

                    word.pop_back();

                    ans[pos] = word;

                    word = "";
                }
            }
            else {
                word = word + s[i];
            }
        }

        string result = "";

        for(int i = 1; i <= 9; i++) {

            if(ans[i] != "") {

                if(result != "") {
                    result = result + " ";
                }

                result = result + ans[i];
            }
        }

        return result;
    }
};