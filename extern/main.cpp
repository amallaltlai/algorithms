#include <iostream>

#include "external.cpp"

using namespace std;

extern int externalVar;
int externalVar2 = 20;

int main(){
	cout << externalVar << endl;
}