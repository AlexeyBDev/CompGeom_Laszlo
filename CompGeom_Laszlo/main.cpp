#include <iostream>
#include "Node.h"

using namespace std;

int main(int argc, char* argv[])
{
	Node A;
	A.Print();
	Node B;
	B.Print();
	Node C;
	C.Print();
	A.Splice(&B);
	B.Splice(&C);
	C.Splice(&A);
	A.Print();
	B.Print();
	C.Print();

	return 0;
}
