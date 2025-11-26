#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string in place.
string reverseString(const string &s) {
    // Use two pointers to swap characters
    string result = s;
    int i = 0, j = result.size() - 1;
    while (i < j) {
        swap(result[i], result[j]);
        i++;
        j--;
    }
    return result;
}

int main() {
    // Example usage
    string s = "hello";
    string reversed = reverseString(s);
    cout << "Original: " << s << endl;
    cout << "Reversed: " << reversed << endl;
    return 0;
}
