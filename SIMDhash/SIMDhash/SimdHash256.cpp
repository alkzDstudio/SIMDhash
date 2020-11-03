#include "SimdHash256.hpp"
#include "simdConst.hpp"

void SimdHash256::initS(){
	simdConst Simd;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			ArrayS[i][j] = Simd.IV[i][j];
		}
	}
	
}

int ** SimdHash256::messageExpansion(char & message, bool last){

	return nullptr;
}
