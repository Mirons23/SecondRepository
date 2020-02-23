// Copyright 2020 Serebrennikov
#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Point {
public:
  Point();
  Point(double _x, double _y, double _z);

  void output();

  double x;
  double y;
  double z;
};

Point::Point(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

void Point::output() {
  cout << "(" << x << "," << y << "," << z << ")";
}