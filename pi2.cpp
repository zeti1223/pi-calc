#include <iostream>
#include <cmath>
#include <iomanip>
#include <chrono>

int main() {
    for (int run = 1; run <= 20; ++run) {
        std::cout << "Futás #" << run << std::endl;
        auto start_time = std::chrono::high_resolution_clock::now();

        long long k = 1;
        double s = 0.0;
        const long long iterations = 10000000000;
        std::cout << std::fixed << std::setprecision(15);

        for (long long i = 0; i < iterations; ++i) {
            if (i % 2 == 0) {
                s += 4.0 / k;
            } else {
                s -= 4.0 / k;
            }
            k += 2;
        }

        std::cout << s << std::endl;
        std::cout << (M_PI - s) << std::endl;

        auto end_time = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = end_time - start_time;
        std::cout << "A kód futási ideje: " << std::fixed << std::setprecision(5)
                  << elapsed.count() << " másodperc" << std::endl << std::endl;
    }

    return 0;
}