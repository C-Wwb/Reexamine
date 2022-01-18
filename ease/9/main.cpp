#include <iostream>
#include <cstring>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        } else
        {
            string X = to_string(x);
            char compare[X.length()];
            strcpy(compare, X.c_str());
            int count = 0;
            bool flag;
            X.length() % 2 == 0 ? flag = true : flag = false;
            if(flag)
            {
                for(int i = 0; i < X.length() / 2; i++)
                {
                    if(compare[i] == compare[X.length() - 1 - i])
                    {
                        count++;
                    }
                }
                return count == X.length() / 2;
            } else
            {
                for(int i = 0; i < X.length() / 2 + 1; i++)
                {
                    if(compare[i] == compare[X.length() - 1 - i])
                    {
                        count++;
                    }
                }
                return count == X.length() / 2 + 1;
            }
        }
    }
};
int main() {
    Solution s;
    int x;
    cout << "Please enter a number: " << endl;
    cin >> x;
    if(s.isPalindrome(x))
    {
        cout << "This number is a palindrome";
    } else
    {
        cout << "This number is not a palindrome";
    }
    return 0;
}