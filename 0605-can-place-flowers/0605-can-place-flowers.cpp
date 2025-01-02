class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        // Handle the first plot
        if (flowerbed.size() == 1) { 
            if (flowerbed[0] == 0) n--;
            return n <= 0;
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            n--;
        }

        // Handle the last plot
        if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0) {
            flowerbed[flowerbed.size() - 1] = 1;
            n--;
        }

        // Handle the middle plots
        for (int i = 1; i < flowerbed.size() - 1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
                if (n == 0) return true;
            }
        }

        return n <= 0;
    }
};
