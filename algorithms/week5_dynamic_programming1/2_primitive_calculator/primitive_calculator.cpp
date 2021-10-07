#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;

vector<int> optimal_sequence(int n) {
  std::vector<int> sequence;
  int a[n+1];
  a[0] = 0;
  for(int i=0; i<=n; i++){
    a[i] = a[i - 1] + 1;
    if (i % 2 == 0) a[i] = min(1 + a[i / 2], a[i]);
    if (i % 3 == 0) a[i] = min(1 + a[i / 3], a[i]);
  }
  for (int i = n; i > 1; ) {
        sequence.push_back(i);
        if (a[i - 1] == a[i] - 1)
            i = i - 1;
        else if (i % 2 == 0 && (a[i / 2] == a[i] - 1))
            i = i / 2;
        else if (i % 3 == 0 && (a[i / 3] == a[i] - 1))
            i = i / 3;
    }

    sequence.push_back(1);
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> sequence = optimal_sequence(n);
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
}
