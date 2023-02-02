#pragma once

#include <map>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <utility>
#include <fstream>
#include <iostream>

#define SCREEN_W 1280
#define SCREEN_H 800

#define RAD_TO_DEG ((double)180.0 / (double)3.141592653589793)
#define DEG_TO_RAD ((double)3.141592653589793 / (double)180.0)
#define PI ((double)3.141592653589793)

#define RENDER_COLOR(rd, col) SDL_SetRenderDrawColor( \
        (rd), (col).r, (col).g, (col).b, (col).a);

using std::cerr;
using std::cout;
using std::endl;
using std::vector;
using std::pair;
using std::string;
using std::map;
using std::endl;

typedef int64_t s64;
typedef uint64_t u64;

typedef std::pair<int, int> pii;
typedef int64_t s64;

enum GameStatus{
    PLAYING,
    PAUSED,
    NOT_STARTED,
    LOST,
    WON,
};

#include "vec_utils.hpp"
#include "phase.hpp"
#include "geometry.hpp"
#include "random_gen.hpp"