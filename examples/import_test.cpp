#include <Eigen/Dense>
#include <iostream>

#include "autodiff/var.hpp"

using Eigen::MatrixXd;
using autodiff::base::var;

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
