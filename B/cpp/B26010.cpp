#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

struct Point {
    long double x, y;
};

std::vector<Point> getCoordinate(int n) {
    std::vector<Point> points;
    const long double PI = std::acos(-1.0L);
    
    for (int i = 0; i < n; ++i) {
        long double angle = (PI / 2.0L) - (2.0L * PI * i / n);
        points.push_back({std::cos(angle), std::sin(angle)});
    }

    return points;
}

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    auto points = getCoordinate(n);

    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(10);
    for (int i = 0; i < n; ++i) {
        std::cout << "    \\coordinate (p" << i + 1 << ") at (" 
                  << points[i].x << ", " << points[i].y << ");" << std::endl;
    }

    return 0;
}

