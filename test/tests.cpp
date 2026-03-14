// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include "tasks.h"
#include "circle.h"
#include <stdexcept>
#include <cmath>
#include <utility>

class CircleTest : public ::testing::Test {};

TEST(t1, DefaultConstructor) {
  Circle c;
  EXPECT_DOUBLE_EQ(0.0, c.getRadius());
  EXPECT_DOUBLE_EQ(0.0, c.getArea());
  EXPECT_DOUBLE_EQ(0.0, c.getFerence());
}

TEST(t2, SetRadiusPositive) {
  Circle c;
  c.setRadius(5.0);
  EXPECT_DOUBLE_EQ(5.0, c.getRadius());
  EXPECT_DOUBLE_EQ(M_PI * 25.0, c.getArea());
  EXPECT_DOUBLE_EQ(10.0 * M_PI, c.getFerence());
}

TEST(t3, SetRadiusZero) {
  Circle c;
  c.setRadius(0.0);
  EXPECT_DOUBLE_EQ(0.0, c.getRadius());
  EXPECT_DOUBLE_EQ(0.0, c.getArea());
  EXPECT_DOUBLE_EQ(0.0, c.getFerence());
}

TEST(t4, SetRadiusNegativeThrow) {
  Circle c;
  EXPECT_THROW(c.setRadius(-1.0), std::invalid_argument);
}

TEST(t5, SetAreaPositive) {
  Circle c;
  c.setArea(25.0 * M_PI);
  EXPECT_DOUBLE_EQ(5.0, c.getRadius());
  EXPECT_DOUBLE_EQ(25.0 * M_PI, c.getArea());
  EXPECT_DOUBLE_EQ(10.0 * M_PI, c.getFerence());
}

TEST(t6, SetAreaZero) {
  Circle c;
  c.setArea(0.0);
  EXPECT_DOUBLE_EQ(0.0, c.getRadius());
  EXPECT_DOUBLE_EQ(0.0, c.getArea());
  EXPECT_DOUBLE_EQ(0.0, c.getFerence());
}

TEST(t7, SetAreaNegativeThrow) {
  Circle c;
  EXPECT_THROW(c.setArea(-1.0), std::invalid_argument);
}

TEST(t8, SetFerencePositive) {
  Circle c;
  c.setFerence(10.0 * M_PI);
  EXPECT_DOUBLE_EQ(5.0, c.getRadius());
  EXPECT_DOUBLE_EQ(25.0 * M_PI, c.getArea());
  EXPECT_DOUBLE_EQ(10.0 * M_PI, c.getFerence());
}

TEST(t9, SetFerenceZero) {
  Circle c;
  c.setFerence(0.0);
  EXPECT_DOUBLE_EQ(0.0, c.getRadius());
  EXPECT_DOUBLE_EQ(0.0, c.getArea());
  EXPECT_DOUBLE_EQ(0.0, c.getFerence());
}

TEST(t10, SetFerenceNegativeThrow) {
  Circle c;
  EXPECT_THROW(c.setFerence(-1.0), std::invalid_argument);
}

TEST(t11, GetAreaAfterSetRadius) {
  Circle c;
  c.setRadius(3.0);
  EXPECT_DOUBLE_EQ(9.0 * M_PI, c.getArea());
}

TEST(t12, GetFerenceAfterSetRadius) {
  Circle c;
  c.setRadius(4.0);
  EXPECT_DOUBLE_EQ(8.0 * M_PI, c.getFerence());
}

TEST(t13, GetRadiusAfterSetArea) {
  Circle c;
  c.setArea(16.0 * M_PI);
  EXPECT_DOUBLE_EQ(4.0, c.getRadius());
}

TEST(t14, GetFerenceAfterSetArea) {
  Circle c;
  c.setArea(16.0 * M_PI);
  EXPECT_DOUBLE_EQ(8.0 * M_PI, c.getFerence());
}

TEST(t15, GetRadiusAfterSetFerence) {
  Circle c;
  c.setFerence(6.0 * M_PI);
  EXPECT_DOUBLE_EQ(3.0, c.getRadius());
}

TEST(t16, GetAreaAfterSetFerence) {
  Circle c;
  c.setFerence(6.0 * M_PI);
  EXPECT_DOUBLE_EQ(9.0 * M_PI, c.getArea());
}

TEST(t17, CircleSetRadiusLarge) {
  Circle c;
  c.setRadius(6378000.0);
  EXPECT_DOUBLE_EQ(6378000.0, c.getRadius());
}

TEST(t18, CircleConstructorDefaultFields) {
  Circle c;
  EXPECT_DOUBLE_EQ(c.getArea(), 0.0);
  EXPECT_DOUBLE_EQ(c.getFerence(), 0.0);
}

TEST(t19, PathAreaMatchesGeometricFormula) {
    auto res = PoolTask();
    double concreteCost = res.first;
    double pathArea = concreteCost / 1000.0;

    double rPool = 3.0;
    double rOuter = 4.0;
    double expectedArea = M_PI * (rOuter * rOuter - rPool * rPool);

    EXPECT_NEAR(expectedArea, pathArea, 1e-9);
}

TEST(t20, FenceLengthMatchesOuterCircle) {
    auto res = PoolTask();
    double fenceCost = res.second;
    double fenceLength = fenceCost / 2000.0;

    double rOuter = 4.0;
    double expectedLength = 2.0 * M_PI * rOuter;

    EXPECT_NEAR(expectedLength, fenceLength, 1e-9);
}

TEST(t21, GapMatchesFormula) {
    double gap = EarthAndCordTask();
    double expected = 1.0 / (2.0 * M_PI);
    EXPECT_NEAR(expected, gap, 1e-9);
}

