## Nitin Kumar
- Batch: 2020-2024 {CSE}
- Github Profile: {https://github.com/Nitin73290}
- Linkedin Profile: {https://www.linkedin.com/in/nitin-kumar-77067321a/}

                                                        Fitting Shelves Problem
 
 
#include <bits/stdc++.h>
using namespace std;

void minSpacePreferLarge(int wall, int m, int n)
{
	int num_m = 0, num_n = 0, min_empty = wall;
	int p = wall/m, q = 0, rem=wall%m;
	num_m=p;
	num_n=q;
	min_empty=rem;
	while (wall >= n) {
		// place one more shelf of length n
		q += 1;
		wall = wall - n;
		// place as many shelves of length m
		// in the remaining part
		p = wall / m;
		rem = wall % m;
		if (rem <= min_empty) {
			num_m = p;
			num_n = q;
			min_empty = rem;
		}
	}
	cout << num_m << " " << num_n << " "
		<< min_empty << endl;
}

int main()
{
	int wall = 29, m = 3, n = 9;
	minSpacePreferLarge(wall, m, n);

	wall = 76, m = 1, n = 10;
	minSpacePreferLarge(wall, m, n);
	return 0;
}
