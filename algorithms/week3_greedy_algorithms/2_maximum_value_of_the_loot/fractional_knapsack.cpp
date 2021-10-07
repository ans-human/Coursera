#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
using std::vector;

double get_optimal_value(int capacity, vector<double>& weights, vector<double>& values) {
  double value = 0.0;

  std::map<double,int> ratios;
  for(int i=0; i<weights.size(); i++) {
    ratios[values[i]/weights[i]] = weights[i];
    //cout<< ratios[values[i]/weights[i]]<<" ";
  }
  int sum=0;
  auto it = ratios.rbegin();
  for(; it != ratios.rend(); it++){

    value += (*it).first * std::min(capacity,(*it).second);
    capacity -= std::min(capacity, (*it).second);
    if(capacity == 0) break;
  }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
