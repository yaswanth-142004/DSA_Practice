class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        // Initialize a vector to store shift values
        vector<int> vec(s.size() + 1, 0);

        // Apply the shifts to the vec array
        for (auto& v : shifts) {
            int start = v[0];
            int end = v[1] + 1;
            int value = v[2] == 1 ? 1 : -1;

            vec[start] += value;
            if (end < s.size())
                vec[end] -= value;
        }

        // Compute the prefix sum for cumulative shifts
        int cumulativeShift = 0;
        for (int i = 0; i < s.size(); i++) {
            cumulativeShift += vec[i];
            // Ensure the shift stays within the range of 0-25
            int shift = (cumulativeShift % 26 + 26) % 26;
            s[i] = (s[i] - 'a' + shift) % 26 + 'a';
        }

        return s;
    }
};
