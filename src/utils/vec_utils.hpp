#pragma once

#include <array>
#include <utility>
#include <vector>

using std::array;
using std::pair;
using std::vector;

template <typename T>
inline pair<T, T> operator+(const pair<T, T> a, const pair<T, T> b) {
  return {a.first + b.first, a.second + b.second};
}

template <typename T>
inline pair<T, T> &operator+=(pair<T, T> &a, const pair<T, T> b) {
  a.first += b.first;
  a.second += b.second;
  return a;
}

template <typename T>
inline pair<T, T> operator-(const pair<T, T> a, const pair<T, T> b) {
  return {a.first - b.first, a.second - b.second};
}

template <typename T>
inline pair<T, T> operator/(const pair<T, T> a, const T s) {
  return {a.first / s, a.second / s};
}

template <typename T>
inline pair<T, T> operator*(const pair<T, T> a, const T s) {
  return {a.first * s, a.second * s};
}

template <typename T> inline T dot(const pair<T, T> a, const pair<T, T> b) {
  return (a.first * b.first) + (a.second * b.second);
}