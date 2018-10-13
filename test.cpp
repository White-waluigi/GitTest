#include "iostream"
class Test{
public:
	int z=0;
};
int main(char ** args){
	std::cout <<"test";
	Test* t=new Test();
	t->z=9;
	std::cout <<t->z;
}


