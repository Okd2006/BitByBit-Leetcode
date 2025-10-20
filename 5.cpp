class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // Corrected special case
        int count = 1; // Start with prime 2
        for (int i = 3; i < n; i += 2) { // Skip even numbers
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) { // Check up to sqrt(i)
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) count++;
        }
        return count;
    }
};
