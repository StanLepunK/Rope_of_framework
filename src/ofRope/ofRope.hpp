/**
* ofRope header
* 2020-2020
* v 0.0.1
*/
#ifndef OFROPE_H
# define OFROPE_H
#pragma once

#include "../../rope/class/R_Body.hpp"
#include "../../rope/rope.hpp"
#include "../../rope/rope_functions.hpp"
#include "../../rope/template/vec/vec3.hpp"
#include "../../rope/template/math/r_geom.hpp"
#include <iostream>

ofPath path;


void line_3d(vec3<float> a, vec3<float> b);
void line_2d(vec2<float> a, vec2<float> b);

void sphere(vec3<float> coord, float radius);


#endif