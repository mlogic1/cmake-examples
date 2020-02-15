#pragma once

#include "Student.h"
#include <vector>

class Teacher
{
	public:
		Teacher(int teacherID, const char* teacherName);
		
		void AddStudent(Student s);
		// todo get students vector
	private:
		int ID;
		const char* name;
		std::vector<Student> students;

};
