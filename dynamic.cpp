#include <iostream>

using namespace std;

extern "C"
int hello() {
	cout<<"Hello, World!!!!"<<endl;
	return 0;
}
