#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll MaxPairwiseProduct(const std::vector<ll>& numbers) {
    ll max_product = 0;
    ll n = numbers.size();
    ll a = numbers[0], b = numbers[1];
    if (a > b) swap(a, b);
    for (ll i = 2; i < n; ++i) {
        if (numbers[i] > a) {
            if (numbers[i] > b) {
                a = b;
                b = numbers[i];
            }
            else {
                a = numbers[i];
            }
        }
    }
    max_product = a * b;

    return max_product;
}

int main() {
    ll n;
    /*#ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif*/
    cin >> n;
    vector<ll> numbers(n);
    for (ll i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
