#include <iostream>>
#include <gtest/gtest.h>
#include "currency.h"

namespace {
TEST(currency,DefaultConstructor) {
    Currency c1;
    std::string ExpectedOut="0:0\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(currency,ParameterizedConstructor) {
    Currency c1(100,10);
    std::string ExpectedOut="100:10\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(currency,OneParameterTest) {
    Currency c1(100);
    std::string ExpectedOut="100:0\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}

TEST(currency,OperatorplusTest) {
    currency c1(1,1);
    std::string ExpectedOut="1+1i";
    testing::internal::CaptureStdout();
    c1.operator+();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorminusTest) {
    currency c1(1,1);
    std::string ExpectedOut="-1+-1i";
    testing::internal::CaptureStdout();
    c1.operator-();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorstarTest) {
    currency c1(2,1);
    std::string ExpectedOut="3+4i";
    testing::internal::CaptureStdout();
    c1.operator*();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorplusplusTest) {
    currency c1(1,1);
    std::string ExpectedOut="2+1i";
    testing::internal::CaptureStdout();
    c1.operator++();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorplusplusparameterTest) {
    currency c1(1,1);
    std::string ExpectedOut="4+1i";
    testing::internal::CaptureStdout();
    c1.operator++(3);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(currency,OperatorAssignmmentTest) {
    currency c1(1,2);
    currency c2(c1);
    EXPECT_EQ(true,c2.operator==(c1));

}
}

