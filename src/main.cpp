#include <src/matrix.h>
#include <iostream>

int main()
{
    // math::Matrix m(3, 3);

    // m.print();

    // std::cout << "Element at pos (1,1) = " << m(1, 1) << std::endl;

    // m(1, 1) = 12.;

    // std::cout << std::endl;
    
    // m.print();
    // math::Matrix m(3, 3);
    // m(0,0) = 1.;
    // m(1,1) = 1.;

    // math::Matrix m1(3, 3);
    // m1(0,0)=5.;
    // m1(1,1)=5.;

    // std::cout << "Matrix m is:" << std::endl;
    // m.print();

    // std::cout << std::endl << "Matrix m1 is:" << std::endl;
    // m1.print();

    // std::cout << std::endl << "Sum of matrices m and m1 is:" << std::endl;
    // math::Matrix m2 = m + m1;
    // m2.print();

    // std::cout << std::endl << "Subtract of matrices m and m1 is:" << std::endl;
    // math::Matrix m3 = m - m1;
    // m3.print();

    // std::cout << std::endl << "Multiplication of matrices m and m1 is:" << std::endl;
    // math::Matrix m4 = m * m1;
    // m4.print();

    // проверка практической работы
    math::Matrix m_1;

    std::cout << "Enter matrix dimensions" << std::endl;
    std::cin >> m_1;
    m_1(0,0) = 1.;
    m_1(1,1) = 2.;

    math::Matrix m_2(m_1);

    std::cout << "Matrix m_1: " << std::endl << m_1 << std::endl << "Matrix m_2: " << std::endl << m_2 << std::endl;

    m_1 += m_2;
    std::cout << "Sum m_1 += m_2:" << std::endl << m_1 << std::endl;

    m_1 *= 3.;
    std::cout << "Multiply m_1 *= 3:" << std::endl << m_1 << std::endl;

    m_1 -= m_2;
    std::cout << "Sub m_1 -= m_2:" << std::endl << m_1 << std::endl;

    return 0;
}