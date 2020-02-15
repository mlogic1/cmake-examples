#pragma once

class Student
{
	public:
		Student(int studentId, const char* studentName);
		~Student() = default;
	private:
		int ID;
		const char* name;
};
