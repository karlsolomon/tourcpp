// Vector.cpp
#include <stdexcept>

Vector::Vector(int s) {
    if (s < 0) throw std::length_error("Vector constructor: negative size");
    elem = new double[s];
    sz = s;
}

void test(int n) {
    try {
        Vector v(n);
    } catch (std::length_error& err) {
        std::cerr << err.what() << std::endl;
    } catch (std::bad_alloc& err) {
        std::cerr << err.what() << std::endl;
    }
}

void run() {
    test(-1);          // throws length_error
    test(1000000000);  // could throw bad_alloc
    test(10);          // likely OK
}
