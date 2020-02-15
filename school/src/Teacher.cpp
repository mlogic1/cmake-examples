#include "Teacher.h"

Teacher::Teacher(int teacherID, const char* teacherName) :
	ID(teacherID), name(teacherName)
{

}

void Teacher::AddStudent(Student student)
{
	students.push_back(student);
}

