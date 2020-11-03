#pragma once

class simdConst {
public:
	int IV[][] = {
		{ 0x4d567983, 0x07190ba9, 0x8474577b, 0x39d726e9 },
		{ 0xaaf3d925, 0x3ee20b03, 0xafd5e751, 0xc96006d3 },
		{ 0xc2c2ba14, 0x49b3bcb4, 0xf67caf46, 0x668626c9 },
		{ 0xe2eaa8d2, 0x1ff47833, 0xd0c661a5, 0x55693de1 }
	};
	int finalPermutations [] = {
		4, 6, 0, 2, 7, 5, 3, 1,
			15, 11, 12, 8, 9, 13, 10, 14,
			17, 18, 23, 20, 22, 21, 16, 19,
			30, 24, 25, 31, 27, 29, 28, 26
	};

	int p [][] = {
		{ 1, 0, 3, 2 },
		{ 2, 3, 0, 1 },
		{ 3, 2, 1, 0 }
	};

}