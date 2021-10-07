#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
using std::string;
#define ll long long
long long edit_distance(string str1, string str2, ll m, ll n)
{
    // Create a table to store results of subproblems
    long long dp[m + 1][n + 1];

    // Fill d[][] in bottom up manner
    for (ll i = 0; i <= m; i++) {
        for (ll j = 0; j <= n; j++) {
            // If first string is empty, only option is to
            // insert all characters of second string
            if (i == 0)
                dp[i][j] = j; // Min. operations = j

            // If second string is empty, only option is to
            // remove all characters of second string
            else if (j == 0)
                dp[i][j] = i; // Min. operations = i

            // If last characters are same, ignore last char
            // and recur for remaining string
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];

            // If the last character is different, consider all
            // possibilities and find the minimum
            else
                dp[i][j] = 1 + min({dp[i][j - 1], // Insert
                                   dp[i - 1][j], // Remove
                                   dp[i - 1][j - 1]}); // Replace
        }
    }

    return dp[m][n];
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  long long m = str1.length();
  long long n = str2.length();
  std::cout << edit_distance(str1, str2, m, n) << std::endl;
  return 0;
}
