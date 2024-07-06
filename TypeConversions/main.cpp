#include <iostream>
#include <initializer_list> 
#include <limits>

template<class T>
void print(std::initializer_list<T> args)
{
	for (T arg : args)
	{
		std::cout << arg << '\n';
	}
}

int main()
{
	char c = 'a';
	int i = 200;
	float f = 123.123f;
	double d = 123.123456789;

		char c0{c};
	//char c1{i};
	//char c2{f};
	//char c3{d};

	int i0{c};
		int i1{i};
	//int i2{f};
	//int i3{d};

	//float f0{c};
	//float f1{i};
		float f2{f};
	//float f3{d};

	//double d0{c};
	//double d1{i};
	double d2{f};
		double d3{d};

	int correctInt = int{c};
	double correctDouble = double{f};

	std::cout << sizeof(int) << '\n';
	std::cout << sizeof(float) << '\n';
	std::cout << sizeof(double) << '\n';

	static_assert(sizeof(int) == sizeof(float), "Int and float are different sizes\n");

	constexpr double dEpsilon = std::numeric_limits<double>::epsilon();
	constexpr double dRError = std::numeric_limits<double>::round_error();
	constexpr double dInfinity = std::numeric_limits<double>::infinity();
	print({dEpsilon, dRError, dInfinity});

	double dLiteral{1234};

	char letter = 'b';
	char* pLetter = &letter;
	int C2I = int{*pLetter};

	return 0;
}