// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <stdexcept>
#include <cmath>
#include <utility>
#include "tasks.h"
#include "circle.h"

const double kMagicFloatingPointTolerance = 1e-12;

TEST(TochnoUnikalnyTest1, TochnoUnikalnyTest1) {
  Circle cosmicDonut;
  EXPECT_DOUBLE_EQ(cosmicDonut.getRadius(), 0.0);
  EXPECT_DOUBLE_EQ(cosmicDonut.getArea(), 0.0);
  EXPECT_DOUBLE_EQ(cosmicDonut.getFerence(), 0.0);
}

TEST(TochnoUnikalnyTest2, TochnoUnikalnyTest2) {
  Circle mysticalOrb;
  mysticalOrb.setRadius(7.77);
  EXPECT_DOUBLE_EQ(mysticalOrb.getRadius(), 7.77);
  EXPECT_NEAR(mysticalOrb.getArea(),
              M_PI * 60.3729,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(mysticalOrb.getFerence(),
              15.54 * M_PI,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest3, TochnoUnikalnyTest3) {
  Circle shrinkingVoid;
  shrinkingVoid.setRadius(42.0);
  shrinkingVoid.setRadius(0.0);
  EXPECT_DOUBLE_EQ(shrinkingVoid.getRadius(), 0.0);
  EXPECT_DOUBLE_EQ(shrinkingVoid.getArea(), 0.0);
}

TEST(TochnoUnikalnyTest4, TochnoUnikalnyTest4) {
  Circle realityWarp;
  ASSERT_THROW(realityWarp.setRadius(-0.0001),
               std::invalid_argument);
  ASSERT_THROW(realityWarp.setRadius(-9999.99),
               std::invalid_argument);
}

TEST(TochnoUnikalnyTest5, TochnoUnikalnyTest5) {
  Circle pizzaPortal;
  double pepperoniDimension = 49.0 * M_PI;
  pizzaPortal.setArea(pepperoniDimension);
  EXPECT_NEAR(pizzaPortal.getRadius(),
              7.0,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(pizzaPortal.getFerence(),
              14.0 * M_PI,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest6, TochnoUnikalnyTest6) {
  Circle voidMaker;
  voidMaker.setRadius(11.11);
  voidMaker.setArea(0.0);
  EXPECT_DOUBLE_EQ(voidMaker.getFerence(), 0.0);
}

TEST(TochnoUnikalnyTest7, TochnoUnikalnyTest7) {
  Circle wormhole;
  ASSERT_THROW(wormhole.setArea(-0.00001 * M_PI),
               std::invalid_argument);
}

TEST(TochnoUnikalnyTest8, TochnoUnikalnyTest8) {
  Circle ropedDimension;
  double ropeLength = 24.0 * M_PI;
  ropedDimension.setFerence(ropeLength);
  EXPECT_NEAR(ropedDimension.getRadius(),
              12.0,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(ropedDimension.getArea(),
              144.0 * M_PI,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest9, TochnoUnikalnyTest9) {
  Circle nakedSingularity;
  nakedSingularity.setFerence(0.0);
  EXPECT_DOUBLE_EQ(nakedSingularity.getRadius(), 0.0);
  EXPECT_DOUBLE_EQ(nakedSingularity.getArea(), 0.0);
}

TEST(TochnoUnikalnyTest10, TochnoUnikalnyTest10) {
  Circle spacetimeTear;
  ASSERT_THROW(spacetimeTear.setFerence(-42.0 * M_PI),
               std::invalid_argument);
}

TEST(TochnoUnikalnyTest11, TochnoUnikalnyTest11) {
  Circle whisperer;
  whisperer.setRadius(3.14159);
  double propheticArea = M_PI * 3.14159 * 3.14159;
  EXPECT_NEAR(whisperer.getArea(),
              propheticArea,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest12, TochnoUnikalnyTest12) {
  Circle memoryKeeper;
  memoryKeeper.setRadius(2.71828);
  double rememberedCircumference = 2.0 * M_PI * 2.71828;
  EXPECT_NEAR(memoryKeeper.getFerence(),
              rememberedCircumference,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest13, TochnoUnikalnyTest13) {
  Circle chickenOrEgg;
  chickenOrEgg.setFerence(13.0 * M_PI);
  EXPECT_NEAR(chickenOrEgg.getRadius(),
              6.5,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest14, TochnoUnikalnyTest14) {
  Circle butterfly;
  butterfly.setFerence(13.0 * M_PI);
  double rippleArea = M_PI * 42.25;
  EXPECT_NEAR(butterfly.getArea(),
              rippleArea,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest15, TochnoUnikalnyTest15) {
  Circle gasGiant;
  double jupiterRadius = 69911000.0;
  gasGiant.setRadius(jupiterRadius);
  EXPECT_NEAR(gasGiant.getRadius(),
              jupiterRadius,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(gasGiant.getFerence(),
              2.0 * M_PI * jupiterRadius,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest16, TochnoUnikalnyTest16) {
  auto secretFormula = PoolTask();
  double concreteSquareMeters = secretFormula.first / 1000.0;

  double miniPool = 3.0;
  double bigPool = 4.0;
  double donutSurface = M_PI *
                        (bigPool * bigPool - miniPool * miniPool);

  EXPECT_NEAR(concreteSquareMeters, donutSurface, 1e-8);
}

TEST(TochnoUnikalnyTest17, TochnoUnikalnyTest17) {
  auto wizardResult = PoolTask();
  double totalFenceStretch = wizardResult.second / 2000.0;

  double outerRim = 2.0 * M_PI * 4.0;

  EXPECT_NEAR(totalFenceStretch, outerRim, 1e-8);
}

TEST(TochnoUnikalnyTest18, TochnoUnikalnyTest18) {
  double levitationGap = EarthAndCordTask();
  double fundamentalConstantOfRopeLift = 1.0 / (2.0 * M_PI);

  EXPECT_NEAR(levitationGap,
              fundamentalConstantOfRopeLift,
              1e-10);
}

TEST(TochnoUnikalnyTest19, TochnoUnikalnyTest19) {
  Circle miniCircle;
  miniCircle.setRadius(0.001);
  EXPECT_NEAR(miniCircle.getArea(),
              M_PI * 0.000001,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(miniCircle.getFerence(),
              0.002 * M_PI,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest20, TochnoUnikalnyTest20) {
  Circle chainCircle;
  chainCircle.setRadius(4.5);
  double areaBefore = chainCircle.getArea();
  chainCircle.setFerence(chainCircle.getFerence());
  double areaAfter = chainCircle.getArea();
  EXPECT_NEAR(areaBefore,
              areaAfter,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(chainCircle.getRadius(),
              4.5,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest21, TochnoUnikalnyTest21) {
  Circle miniminiRadius;
  miniminiRadius.setRadius(0.00001);
  EXPECT_NEAR(miniminiRadius.getFerence(),
              2.0 * M_PI * 0.00001,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest22, TochnoUnikalnyTest22) {
  Circle middleEarth;
  middleEarth.setFerence(40.0 * M_PI);
  EXPECT_NEAR(middleEarth.getRadius(),
              20.0,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(middleEarth.getArea(),
              400.0 * M_PI,
              kMagicFloatingPointTolerance);

  middleEarth.setRadius(10.0);
  EXPECT_NEAR(middleEarth.getFerence(),
              20.0 * M_PI,
              kMagicFloatingPointTolerance);
  EXPECT_NEAR(middleEarth.getArea(),
              100.0 * M_PI,
              kMagicFloatingPointTolerance);
}

TEST(TochnoUnikalnyTest23, TochnoUnikalnyTest23) {
  auto poolData = PoolTask();
  double concreteCost = poolData.first;
  double fenceCost = poolData.second;

  EXPECT_GT(concreteCost, 0.0);
  EXPECT_GT(fenceCost, 0.0);
  EXPECT_NEAR(concreteCost / fenceCost,
              1000.0 * M_PI * 7.0 / (2000.0 * 8.0 * M_PI),
              1e-8);
}
