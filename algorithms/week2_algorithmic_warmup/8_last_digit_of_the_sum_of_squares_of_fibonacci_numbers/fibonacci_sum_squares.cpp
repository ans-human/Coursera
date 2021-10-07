#include <iostream>
#define int long long
#define ll long long
int pisano(int m){
   int previous = 0, current=1;

    for(int i=0; i<m*m; i++){
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;

        if(previous==0 && current==1){
            return (i+1);
        }
    }
}
long long get_fibonacci_huge_naive(long long n, long long m) {

    int period = pisano(m);

    n%=period;

    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
    }

    return current % m;
}
ll fibonacci_sum_squares_naive(int n)
{
    return (get_fibonacci_huge_naive(n, 10) * get_fibonacci_huge_naive(n+1,10))%10;
}

int32_t main() {
    long long n = 0;
    std::cin >> n;

    std::cout << fibonacci_sum_squares_naive(n);
}
