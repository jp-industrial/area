#include "c:\Users\james\Desktop\migrate\std_lib_facilities.h"

/*

class bad_area {}; //a type for reporting errors from area()!
class bad_frame {}; // a type for reporting errors from framed_area().

int area(int length, int width)
{
	if (length <= 0 || width <= 0) throw bad_area{};
	return length * width;
}

int framed_area(int x, int y, int frame)
{
	if (x - frame <= 0 || y - frame <= 0) throw bad_frame{};
	return area(x - frame, y - frame);
}

int main()
{
	try {

		for (int x, y, z = 0; cin >> x >> y >> z;) {

			int area1 = area(x, y);
			int area2 = framed_area(10, z, 2);
			int area3 = framed_area(y, z, 2);
			double ratio = area1 / area3;
		}


	}
		catch (bad_area) {
			cout << "Oops! Bad arguments to area()\n";
		}
	
		catch (bad_frame) {
			cout << "Oops! Bad arguments to framed_area()!\n";
		}
}

int main()
{
	int test = 0; //using cin to detect bad input. Also !cin.

	cin >> test;

	if (cin)
		cout << test;
	else cout << "Bad input\n";
}


*/
void error(string e)
{
	throw runtime_error(e);
}

int main()
{
	try {
		vector <int> num;

		cout << num[1];
		return 0; //indicates success!
	}

	catch (runtime_error& e) //passes exception by reference
	{
		cerr << "runtime error: " << e.what() << "\n"; //e.what() extracts error message //cerr is cout, intended for errors.
		keep_window_open();//keeps window open
		return 1; //indicates failure
	}

	catch (...)
	{
		cerr << "Something went wrong!\n";
		keep_window_open();
		return 1;
	}
}

