#ifndef TestClassA_h
#define TestClassA_h

struct TestClassA {

	TestClassA(std::string text) : _name(text) { std::cout << ".. Konstruuje TestClassA " << name() << "\n"; }
	~TestClassA() { std::cout << ".. Usuwam  TestClassA " << name() << std::endl; }

	std::string name() const { return _name; }

	std::string _name;

};

#endif
