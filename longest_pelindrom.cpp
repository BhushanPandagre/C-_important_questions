// #include <iostream>
// #include <string>

// using namespace std;

// string expandAroundCenter(const string& s, int left, int right) {
//     int n = s.length();

//     while (left >= 0 && right < n && s[left] == s[right]) {
//         --left;
//         ++right;
//     }

//     return s.substr(left + 1, right - left - 1);
// }

// string longestPalindrome(const string& s) {
//     int n = s.length();
//     if (n == 0) {
//         return "";
//     }

//     string longestPalindromeStr = "";

//     for (int i = 0; i < n; ++i) {
//         // Odd length palindrome
//         string palindrome1 = expandAroundCenter(s, i, i);
//         if (palindrome1.length() > longestPalindromeStr.length()) {
//             longestPalindromeStr = palindrome1;
//         }

//         // Even length palindrome
//         string palindrome2 = expandAroundCenter(s, i, i + 1);
//         if (palindrome2.length() > longestPalindromeStr.length()) {
//             longestPalindromeStr = palindrome2;
//         }
//     }

//     return longestPalindromeStr;
// }

// int main() {
//     string array = "abbcad";
//     string result = longestPalindrome(array);

//     cout << "Longest Palindrome: " << result << endl;

//     return 0;
// }



// this is not perfect type of coding ....thata i am using this ....!!!