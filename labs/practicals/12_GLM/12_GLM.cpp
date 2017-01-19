#include <glm\glm.hpp>
#include <glm\gtc\constants.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\quaternion.hpp>
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\projection.hpp>
#include <iostream>

using namespace std;
using namespace glm;

int main() 
{
	vec2 a(vec3(1.0f, 0.0f, 0.0f));
	vec2 b(vec4(0.0f, 1.0f, 0.0f, 1.0f));
	vec3 c(vec4(0.0f, 1.0f, 0.0f, 1.0f));
	vec3 d(vec2(1.0f, 0.0f), 0.0f);
	vec4 e(vec2(1.0f, 0.0f), 0.0f, 1.0f);
	vec4 f(vec3(1.0f, 0.0f, 1.0f), 0.0f);

	vec2 g = a + b;
	vec2 h = b - a;
	vec3 i = c + d;
	vec3 j = d - c;
	vec4 k = e + f;
	vec4 m = f - e;

	float one = length(a);
	float two = length(c);
	float three = length(e);

	vec2 aa = normalize(a);
	vec3 cc = normalize(c);
	vec4 ee = normalize(e);

	float four = dot(a, b);
	float five = dot(c, d);
	float six = dot(e, f);

	mat4x2 ma(1.0f);
	mat4 mb(2.0f);
	mat3 mc(1.0f);
	mat2x4 md(3.0f);
	mat4x2 me(2.0f);

	mat4 mf = ma + me;

	vec3 va = mc*i;
}