#include <iostream>
#include <random>

using namespace std;

string randDNA(int seed, string bases, int l) {
	
	string DNA = "";
	int base_length = bases.length() - 1;
	mt19937 eng(seed);
	uniform_int_distribution<> dist(0, base_length);
	int index;
	
	for (int h = 0; h < l; h++) {
		
		index = dist(eng);
		DNA = DNA + bases[index];
		
	}
	
	return DNA;
	
}
