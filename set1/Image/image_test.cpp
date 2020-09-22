#include <iostream>>
#include <gtest/gtest.h>
#include "image.h"


TEST(image,DefaultConstructor) {
    Image a1;
    std::string ExpectedOut="0,0,0,0\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


}
TEST(Image,ParameterizedConstructor) {
    Image c1(1,1,5,5);
    std::string ExpectedOut="1,1,5,5\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Image,CopyConstructor) {
    Image a1(1,1,5,5);
    Image a2(a1);
    std::string ExpectedOut="1,1,5,5\n";
    testing::internal::CaptureStdout();
    a2.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Image,MoveTest) {
    Image a1(0,0,0,0);
    std::string ExpectedOut="Image has been moved to first quadrant and now the position is 2,2";
    testing::internal::CaptureStdout();
    a1.move(1,2,2);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Image,ScaleTest) {
    Image a1(1,1,1,1);
    std::string ExpectedOut="5,5";
    testing::internal::CaptureStdout();
    a1.scale(5,5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


TEST(Image,DisplayTest) {
    Image a1(2,2,10,10);
    std::string ExpectedOut="2,2,10,10\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}



