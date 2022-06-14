#define _CRT_SECURE_NO_WARNINGS
class A {
public:
	int i;
	A() : i(0) {}
};

A f() {
	A a;
	return a;
}
int main()
{
	f().i = 10;
	return 0;
}