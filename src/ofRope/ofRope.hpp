/**
* ofRope header
* 2020-2020
* v 0.1.3
*/
#ifndef OFROPE_H
# define OFROPE_H
#pragma once

#include "ofMain.h"
#include "../../rope/class/R_Body.hpp"
#include "../../rope/rope.hpp"
#include "../../rope/rope_functions.hpp"
#include "../../rope/template/vec/vec3.hpp"
#include "../../rope/template/math/r_geom.hpp"
#include <iostream>

// color
ofColor get_ofColor(int c);

// manipulation
void translate(float x, float y, float z = 0);
void translate(vec3<float> pos);

void rotate_x(float x);
void rotate_y(float y);
void rotate_z(float z);
void rotate(float x, float y, float z = 0);
void rotate_normal(float x, float y, float z, char ax, char ay, char az);
void rotate_normal(vec3<float> pos, vec3<char> axis);

// shape
void line_2d(vec2<float> a, vec2<float> b);
void line_3d(vec3<float> a, vec3<float> b);

void box(vec3<float> size);
void box(float size);
void box(float width, float height, float depth);
void box(vec3<float> pos, vec3<float> size);
void box(float x, float y, float z, float size);
void box(float x, float y, float z, float width, float height, float depth);

void sphere(float radius);
void sphere(float x, float y, float radius);
void sphere(float x, float y, float z, float radius);
void sphere(vec3<float> coord, float radius);

void cone(float radius, float height);
void cone(float x, float y, float radius, float height);
void cone(float x, float y, float z, float radius, float height);
void cone(vec3<float> coord, float radius, float height);




#endif