#include <bits/stdc++.h>

using namespace std;
    
int main() {                          	
	ios::sync_with_stdio(false);
	cin.tie(0);          
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {                                   
		int m, n;
		cin >> m >> n;
		int rx, ry;
		cin >> rx >> ry;
		int length;
		cin >> length;
		string s;
		cin >> s;
		// set location to (0, 0)
		int x = 0;
		int y = 0;
		for (int i = 0; i < length; i++) {
			if (s[i] == 'U') {
				// increment 'y' if direction is upward 	
				y++;
			} else if (s[i] == 'D') {
				// decrement 'y' if direction is downward
				y--;
			} else if (s[i] == 'R') {
				// increment 'x' if direction is right
				x++;
			} else if (s[i] == 'L') {
				// decrement in 'x' if direction is left
				x--;
			}
		}
		// print case and number
		cout << "Case " << qq << ": ";
		if ((x < 0 || x > m) || (y < 0 || y > n)) {
			// if one of the coordinates is negative or greater than m or n, then it's in a dangerous location
			cout << "DANGER";
 		} else if (x == rx && y == ry) {
 			// if x and y is equal to rx and ry, then the destination was reached
			cout << "REACHED";
		}	else {
			// the default case would be somewhere but in a safe place
 			cout << "SOMEWHERE";
 		}
 		cout << '\n';
	}
	return 0;
}