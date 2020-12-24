#include <iostream>

using namespace std;

int main()
{
	int x1, x2, x3;
	int y1, y2, y3;
	cout << "Enter coordinates of a triangle in three rows" << endl;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	int a, b;
	cout << "Enter coordinates of a point" << endl;
	cin >> a >> b;
	int minx, maxx;
	int miny, maxy;
	if (x1 < x2 && x1 < x3) {
		minx = x1;
		if (x2 < x3) {
			maxx = x3;
		}
		else {
			maxx = x2;
		}
	}
	if (x2 < x1 && x2 < x3) {
		minx = x2;
		if (x1 < x3) {
			maxx = x3;
		}
		else {
			maxx = x1;
		}
	}
	if (x3 < x2 && x3 < x1) {
		minx = x3;
		if (x2 < x1) {
			maxx = x1;
		}
		else {
			maxx = x2;
		}
	}
	if (y1 < y2 && y1 < y3) {
		miny = y1;
		if (y2 < y3) {
			maxy = y3;
		}
		else {
			maxy = y2;
		}
	}
	if (y2 < y1 && y2 < y3) {
		miny = y2;
		if (y1 < y3) {
			maxy = y3;
		}
		else {
			maxy = y1;
		}
	}
	if (y3 < y2 && y3 < y1) {
		miny = y3;
		if (y2 < y1) {
			maxy = y1;
		}
		else {
			maxy = y2;
		}
	}
	if (a > maxx || a<minx || b>maxy || b < miny) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
	cout << maxx << " " << minx << " " << maxy << " " << miny << endl;

}