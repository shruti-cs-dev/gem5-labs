#include <iostream>
int main() {
    long long sum = 0;
    for (int i = 0; i < 100000; ++i) sum += i;
    std::cout << "Sum: " << sum << "\n";
    return 0;
}
