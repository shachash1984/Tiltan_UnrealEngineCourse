
#include <iostream>



#define F(...) f(__VA_ARGS__)

#define showlist(...) std::cout<<(#__VA_ARGS__)

#define paster(n)  enemy_##n 

//Example from Unreal

#define DECLARE_LOG_CATEGORY_EXTERN(CategoryName, DefaultVerbosity, CompileTimeVerbosity) \
		extern struct FLogCategory##CategoryName : public FLogCategory<ELogVerbosity::DefaultVerbosity, ELogVerbosity::CompileTimeVerbosity> \
		{ \
			FORCEINLINE FLogCategory##CategoryName() : FLogCategory(TEXT(#CategoryName)) {} \
		} CategoryName;

//Example from Unreal

int f(int a = 1, int b = 2, int c = 3)
{
	a = b*a + c;
	return a;
}


int main()
{
	int paster(health) = 100;

	int a{10};
	int b{20};
	int c{30};

	std::cout << F(a, b, c) << "\n";
	std::cout << F() << "\n";

	showlist(1, "x", int);

	getchar();
}