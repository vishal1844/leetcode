#include <string>

class Solution {
public:
    // Helper function to calculate GCD (Greatest Common Divisor)
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    std::string fractionAddition(std::string e) {
        long long n = 0;  // Numerator of the result
        long long d = 1;  // Denominator of the result
        long long curn = 1;  // Current fraction numerator
        long long curd = 1;  // Current fraction denominator
        char exp = '+';  // Current sign

        // Prepend '+' if the expression doesn't start with a sign
        if (e[0] != '-') e = '+' + e;

        int i = 0;
        while (i < e.size()) {
            exp = e[i];  // Current operation ('+' or '-')
            i++;

            // Read the numerator
            curn = 0;
            while (i < e.size() && e[i] != '/') {
                curn = curn * 10 + (e[i] - '0');
                i++;
            }
            i++;  // Skip '/'

            // Read the denominator
            curd = 0;
            while (i < e.size() && e[i] != '+' && e[i] != '-') {
                curd = curd * 10 + (e[i] - '0');
                i++;
            }

            // Apply the sign to the numerator
            if (exp == '-') curn = -curn;

            // Perform the fraction addition
            n = n * curd + d * curn;
            d = d * curd;

            // Reduce the fraction by its GCD
            long long t = gcd(abs(n), d);  // Use absolute value of n for gcd calculation
            n /= t;
            d /= t;

            // Ensure the denominator is positive
            if (d < 0) {
                n = -n;
                d = -d;
            }
        }

        // Return the resulting fraction as a string
        return std::to_string(n) + '/' + std::to_string(d);
    }
};
