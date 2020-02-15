#include <iostream>

#include <Student.h>
#include <Teacher.h>

int main(int argc, char* argv[])
{
	std::cout << "Making teacher T" << std::endl;
	Teacher T(1, "Teacher");
	std::cout << "Making student S1" << std::endl;
	Student S1(1, "Student 1");
	std::cout << "Making student S2" << std::endl;
	Student S2(1, "Student 2");
	
	std::cout << "Adding student S1 to teacher T" << std::endl;
	T.AddStudent(S1);
	std::cout << "Adding student S2 to teacher T" << std::endl;
	T.AddStudent(S2);
	return 0;
}
