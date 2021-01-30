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
		int x = 0;
		int y = 0;
		for (int i = 0; i < length; i++) {
			if (s[i] == 'U') {               	
				y++;
			} else if (s[i] == 'D') {
				y--;
			} else if (s[i] == 'R') {
				x++;
			} else if (s[i] == 'L') {
				x--;
			}
		}
		cout << "Case " << qq << ": ";
		if ((x < 0 || x > m) || (y < 0 || y > n)) {
			cout << "DANGER";
 		} else if (x == rx && y == ry) {
			cout << "REACHED";
		}	else {
 			cout << "SOMEWHERE";
 		}
 		cout << '\n';
	}
	return 0;
}