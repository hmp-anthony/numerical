#include <Eigen/Dense>
#include <autodiff/gradient.hpp>
#include <iostream>

using autodiff::base::var;
using Eigen::MatrixXd;

int main() {
    // test that autodiff has been imported
    var a(10);
    var b(20);
    auto c = a * b;

    // test that Eigen has been imported
    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    std::cout << m << std::endl;

    return 0;
}
