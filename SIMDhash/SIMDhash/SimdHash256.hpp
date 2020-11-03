#pragma once
#include <iostream>

class SimdHash256 {
private:
	int A = 0;
	int B = 1;
	int C = 2;
	int D = 3;
	int MOD = 257;
	int BLOCK_SIZE = 64;
	long ArrayS[4][4] = { 0 };

	void initS();
	int **messageExpansion (char & message, bool last);
	void step(int & w, int i, int r, int s, bool flag);
	void round(int && W, int i, int r, int s, int t, int u);
	void feistel(char & message, int && W);
	int pow(int a, int b, int mod);
	int* NTT(char & message, bool last);
	int concatenatedCode(int m, bool flag);
	int ** permutations(int & message);
	long F1(long x, long y, long z);
	long F2(long x, long y, long z);
	int leftShift(int a, int b);
public:
	SimdHash256();
	std::string hash(std::string inFile);
	
};