#include <iostream>
#include <cstdio>
#include "SimdHash256.hpp"

int main() {

	std::string in = "01.bmp";
	std::string out = "out.bmp";
	SimdHash256 pw;
	pw.println(SIMD256.hash(in));
	return 0;
}