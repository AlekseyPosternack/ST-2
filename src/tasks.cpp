// Copyright 2022 UNN-CS
#include <cmath>
#include <stdexcept>
#include <utility>
#include "tasks.h"
#include "circle.h"

double EarthAndCordTask() {
    Circle earth;
    earth.setRadius(6378000.0);

    double newFerence = earth.getFerence() + 1.0;

    Circle newCircle;
    newCircle.setFerence(newFerence);

    return newCircle.getRadius() - earth.getRadius();
}

std::pair<double, double> PoolTask() {
    const double pool_rad = 3.0;

    Circle pool;
    pool.setRadius(pool_rad);

    Circle pool_with_path;
    pool_with_path.setRadius(pool_rad + 1.0);

    double path_area = pool_with_path.getArea() - pool.getArea();
    double cost_for_road = path_area * 1000.0;

    double fence_length = pool_with_path.getFerence();
    double fence_cost = fence_length * 2000.0;

    return std::make_pair(cost_for_road, fence_cost);
}