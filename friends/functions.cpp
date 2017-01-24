#include <iostream>


class Polygon {
	private:
		int sides;
	public:
		Polygon(int sides) {this->sides=sides;}
		// here it is made a friend
		friend int getSides(const Polygon&);
};


int getSides(const Polygon &p) {
	return p.sides;
	// since it is a friend it can access private and proteced variables
}


int main() {

	Polygon p(3);

	std::cout << getSides(p) << std::endl;

	return 0;
}