#include "complex_no.h"
#include "gtest/gtest.h"
namespace {
TEST(complex_no,Empty_constructor)
{
    complex_no <int> n;
    EXPECT_EQ(0,n.g_real());
    EXPECT_EQ(0,n.g_imag());
}

TEST(complex_no,Parameterised_Constructor)
{
    complex_no <double> n(1.3,5.3);
    EXPECT_EQ(1.3,n.g_real());
    EXPECT_EQ(5.3,n.g_imag());
}
}
