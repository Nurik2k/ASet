#include <iostream>
#include "ASet.h"
using namespace std;


int main(){
	setlocale(LC_ALL, "rus");
	ASet set(1,10);
	set.incl(10);
	set.excl(5);
	set.print();

    return 0;
}

