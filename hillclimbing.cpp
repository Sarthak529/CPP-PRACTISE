#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


double f(double x) {
    return -x * x + 5 * x + 10;
}

double hillClimbing(double start, double step, int max_iter) {
    double current = start;
    double currentVal = f(current);

    for (int i = 0; i < max_iter; ++i) {
        double next1 = current + step;
        double next2 = current - step;
        double nextVal1 = f(next1);
        double nextVal2 = f(next2);

        if (nextVal1 > currentVal) {
            current = next1;
            currentVal = nextVal1;
        } else if (nextVal2 > currentVal) {
            current = next2;
            currentVal = nextVal2;
        } else {
            
            break;
        }
    }
    return current;
}

int main() {
    srand(time(0));
    double start = (rand() % 1000) / 100.0; 
    double step = 0.01;
    int max_iter = 1000;

    double result = hillClimbing(start, step, max_iter);
    cout << "Maximum at x = " << result << ", f(x) = " << f(result) << endl;
    return 0;
}