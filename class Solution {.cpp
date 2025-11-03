class Solution {
private:
    bool isBalance(int num) {
        int count[10] = {0};
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            
            if (digit == 0) {
                return false;
            }
            
            count[digit]++;
            temp /= 10;
        }

        for (int d = 1; d <= 9; ++d) {
            int frequency = count[d];
            
            if (frequency > 0 && frequency != d) {
                return false;
            }
        }

        return true;
    }

public:
    int nextBeautifulNumber(int n) {
        for (int candidate = n + 1; ; ++candidate) {
            if (isBalance(candidate)) {
                return candidate;
            }
        }
    }
};