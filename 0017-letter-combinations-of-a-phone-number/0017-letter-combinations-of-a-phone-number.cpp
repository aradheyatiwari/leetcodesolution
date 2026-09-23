class Solution {
public:
    vector<string> result;

    string keypad[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(string &digits, int index, string current) {

        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        string letters = keypad[digits[index] - '0'];

        for (char ch : letters) {
            current.push_back(ch);

            solve(digits, index + 1, current);

            current.pop_back();  
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty())
            return {};

        solve(digits, 0, "");

        return result;
    }
};