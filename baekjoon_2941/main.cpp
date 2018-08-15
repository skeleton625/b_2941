#include <iostream>
#include <string>
using namespace std;

string i1, s;
string d[8] = { "c=", "s=", "z=", "c-", "d-", "lj", "nj", "dz"};
int c, i, j;

int main() {
	cin >> i1;
	while(i < i1.size()) {
		s.assign(i1, i, 2);
		for (j = 0; j < 7; j++) {
			if (s == d[j]) {
				c++; 
				i += 2;
				break;
			}
		}
		if (j != 7) continue;
		else if (s == d[7] && i1.at(i + 2) == '=') {
			c++; 
			i += 3;
		} else {
			c += 1; 
			i++;
		}
	}
	cout << c;
	return 0;
}