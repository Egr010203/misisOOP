#include <iostream>


extern double add(double lhs, double rhs);
extern double sub(double lhs, double rhs);
extern double multiply(double lhs, double rhs);


int main() {
	double a, b;
	std::cin >> a >> b;
	double sum = add(a, b);
	double subst = sub(a, b);
	double mult = multiply(a, b);
	std::cout << sum << subst << mult;

}