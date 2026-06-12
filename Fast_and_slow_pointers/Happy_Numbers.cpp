class Solution {
public:
    int getNext(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            sum += digit * digit;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while (true) {
            slow = getNext(slow);

            fast = getNext(fast);
            fast = getNext(fast);

            if (fast == 1)
                return true;

            if (slow == fast)
                return false;
        }
    }
};