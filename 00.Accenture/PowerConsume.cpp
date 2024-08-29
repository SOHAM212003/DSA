#include<bits/stdc++.h>
using namespace std;

int min_units(int P, int X, int Y) {
    // Calculate the number of times machine M can be used
    int M_usage = P / 100;
    // Calculate the remaining customers after using machine M
    int remaining_customers = P % 100;
    // Calculate the number of times machine N needs to be used for the remaining customers
    int N_usage = remaining_customers / 4;
    if (remaining_customers % 4 != 0)
        N_usage += 1;
    // Calculate the total power consumption
    int total_power = M_usage * X + N_usage * Y;
    return total_power;
}

int main() {
    int P, X, Y;
    cin >> P >> X >> Y;
    cout << min_units(P, X, Y) << endl;
    return 0;
}