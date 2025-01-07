#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void dfs(vector<vector<int>>& image, int chk, int color, int sr, int sc) {
        // Base case: Out of bounds
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
            return;

        // Base case: If the current cell is not the target color or is already the new color
        if (image[sr][sc] != chk )
            return;

        // Change the color of the current cell
        image[sr][sc] = color;

        // Explore all 4 neighbors (up, down, left, right)
        dfs(image, chk, color, sr, sc + 1);
        dfs(image, chk, color, sr, sc - 1);
        dfs(image, chk, color, sr - 1, sc);
        dfs(image, chk, color, sr + 1, sc);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // Get the original color of the starting pixel
        int chk = image[sr][sc];

        // If the starting pixel is already the target color, return the image
        if (chk == color)
            return image;

        // Call the DFS helper function
        dfs(image, chk, color, sr, sc);

        return image;
    }
};
