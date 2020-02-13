#include "gtest/gtest.h"
#include <iostream>
#include "maths.h"

using namespace std;

TEST(nrt, 1){
    double a = nrt(1,5);
    cout << a << endl;
    EXPECT_EQ(a == 5, true);
}
TEST(nrt, 2){
    double a = nrt(2,5);
    cout << a << endl;
    EXPECT_EQ(a == 2.23607, true);
}

TEST(nrt, 0){
    EXPECT_ANY_THROW(nrt(0,5););
}

TEST(nrt, neg1){
    EXPECT_ANY_THROW(nrt(-1,5););
}

TEST(fact, 01){
    int a = fact(0);
    int b = fact(1);
    EXPECT_EQ(a == 1, true);
    EXPECT_EQ(b == 1, true);
}

TEST(fact, 4){
    int a = fact(4);
    EXPECT_EQ(a == 24, true);
}

TEST(fact, 10){
    int a = fact(10);
    EXPECT_EQ(a == 3628800, true);
}

TEST(log, 23){
    double a = log(2, 3);
    cout << a << endl;
    EXPECT_EQ(a == 1.58496, true);
}

TEST(log, 48){
    double a = log(4, 8);
    cout << a << endl;
    EXPECT_EQ(a == 1.5, true);
}

TEST(log10, 4){
    double a = log(4);
    cout << a << endl;
    EXPECT_EQ(a == 0.60206, true);
}

TEST(log10, 234){
    double a = log(234);
    cout << a << endl;
    EXPECT_EQ(a == 2.36922, true);
}

TEST(ln, 23){
    double a = ln(23);
    cout << a << endl;
    EXPECT_EQ(a == 3.13549, true);
}

TEST(rsin, 0){
    double a = rsin(pi);
    cout << a << endl;
    EXPECT_EQ(a == 0, true);
}

TEST(rsin, 1){
    double a = rsin(pi/2);
    cout << a << endl;
    EXPECT_EQ(a == 1, true);
}

TEST(rsin, rand){
    double a = rsin(6*pi/50);
    cout << a << endl;
    EXPECT_EQ(a == 0.368125, true);
}

TEST(rcos, 0){
    double a = rcos(pi/2);
    cout << a << endl;
    EXPECT_EQ(a == 0, true);
}

TEST(rcos, 1){
    double a = rcos(0);
    cout << a << endl;
    EXPECT_EQ(a == 1, true);
}

TEST(rcos, rand){
    double a = rcos(6*pi/50);
    cout << a << endl;
    EXPECT_EQ(a == 0.929776, true);
}

TEST(rtan, 0){
    double a = rtan(0);
    cout << a << endl;
    EXPECT_EQ(a == 0, true);
}

TEST(rtan, 1){
    double a = rtan(pi/4);
    cout << a << endl;
    EXPECT_EQ(a == 1, true);
}

TEST(rtan, rand){
    double a = rtan(6*pi/50);
    cout << a << endl;
    EXPECT_EQ(a == 0.395928, true);
}

TEST(rtan, throw){
    EXPECT_ANY_THROW(rtan(pi/2));
}











TEST(dsin, 0){
    double a = dsin(180);
    cout << a << endl;
    EXPECT_EQ(a == 0, true);
}

TEST(dsin, 1){
    double a = dsin(90);
    cout << a << endl;
    EXPECT_EQ(a == 1, true);
}

TEST(dsin, rand){
    double a = dsin(21.6);
    cout << a << endl;
    EXPECT_EQ(a == 0.368125, true);
}

TEST(dcos, 0){
    double a = dcos(90);
    cout << a << endl;
    EXPECT_EQ(a == 0, true);
}

TEST(dcos, 1){
    double a = dcos(0);
    cout << a << endl;
    EXPECT_EQ(a == 1, true);
}

TEST(dcos, rand){
    double a = dcos(21.6);
    cout << a << endl;
    EXPECT_EQ(a == 0.929776, true);
}

TEST(dtan, 0){
    double a = dtan(0);
    cout << a << endl;
    EXPECT_EQ(a == 0, true);
}

TEST(dtan, 1){
    double a = dtan(45);
    cout << a << endl;
    EXPECT_EQ(a == 1, true);
}

TEST(dtan, rand){
    double a = dtan(21.6);
    cout << a << endl;
    EXPECT_EQ(a == 0.395928, true);
}

TEST(dtan, throw){
    EXPECT_ANY_THROW(dtan(90));
}