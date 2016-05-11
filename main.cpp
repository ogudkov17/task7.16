#include <dlfcn.h>
#include <iostream>

using namespace std;

typedef int (*pFunc)();

int main() {
	pFunc pfunc;
	void *handle = dlopen("./libdynamic.so", RTLD_LAZY);	
	if (handle) {
		pfunc = (pFunc)dlsym(handle, "hello");
		if (pfunc) pfunc(); else cout<<"can't load hello"<<endl;
		dlclose(handle);
	} else cout<<"can't open library"<<endl;
	return 0;
}
