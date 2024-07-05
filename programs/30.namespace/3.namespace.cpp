#include<iostream>
using namespace std;

namespace val1{
	int num=111;
}

namespace val2{
	int num=222;
}

using namespace val1;

int main(){
	cout<<val2::num<<endl;
}
