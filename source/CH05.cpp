#include "std_lib_facilities.h"

int main() {
	try {
		if (true) { cout << "Success!\n"; }
		if (true) { cout << "Success!\n"; }
		if (true) { cout << "Success" << "!\n"; }
		if (true) { string success = "Success!"; cout << success << endl; }
		if (true) { int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; }
		if (true) { vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "Success!\n"; }
		if (true) { if (true) cout << "Success!\n"; else cout << "Fail!\n"; }
		if (true) { bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n"; }
		if (true) { string s = "ape"; bool c = true; if (c) cout << "Success!\n"; }
		if (true) { string s = "ape"; if (s=="ape") cout << "Success!\n"; }
		if (true) { string s = "ape"; if (s!="fool") cout << "Success!\n"; }
		if (true) { string s = "fool"; if (s=="fool ") cout << "Success!\n"; }
		if (true) { vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n"; }
		if (true) { vector<char> v(5); for (int i=0; i<=v.size() - 1; ++i) ; cout << "Success!\n"; }
		if (true) { string s = "Success!\n"; for (int i=0; i<9; ++i) cout << s[i]; }
		if (true) { if (true) cout << "Success!\n"; else cout << "Fail!\n"; }
		if (true) { int x = 2000; int c = x; if (c==2000) cout << "Success!\n"; }
		if (true) { string s = "Success! \n"; for (int i=0; i<10; ++i) cout << s[i]; }
		if (true) { vector<int> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n"; }
		if (true) { int i = 10; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; }
		if (true) { int x = 2; double d = 2*x+0.5; if (d==2*x+0.5) cout << "Success!\n"; }
		if (true) { string s = "Success!\n"; for (int i=0; i<9; ++i) cout << s[i]; }
		if (true) { int j = -1; int i=0; while (i<10){ ++j; ++i; } if (j<i) cout << "Success!\n"; }
		if (true) { int x = 4; double d = 5/(x-2); if (d=x/2+0.5) cout << "Success!\n"; }
		if (true) { cout << "Success!\n"; }
		keep_window_open();
		return 0;
	} catch (exception& e) {
		cerr << "error: " << e.what() << "\n";
		keep_window_open();
		return 1;
	} catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}