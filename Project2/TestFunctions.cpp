/*
	Pradhan, Dorje

	Fall 2022
	CS A250 -  C++ 2
	Project: CS Courses
*/

#include "CourseList.h"

#include <iostream>
using namespace std;

void testCourseList()
{
	// Create an object of the class CourseList.
	CourseList listOfCourses;

	// Call function CourseList::isEmpty and print a message.
	if (listOfCourses.isEmpty())
	{
		cout << "This course is empty.\n";
	}
	else
	{
		cout << "This course is not empty\n";
	}

	// NOTE: To properly test the functions, it is 
	// recommended you use the course number 
	// suggested in this guideline.

	// Create three objects of the class Course using
	// the overloaded constructor.
	// Courses: 250, 150, 200
	Course cpp(250, "C++ 2", 4, {150, 200});
	Course java(150, "Java 1", 3, {});
	Course python(200, "Python 2", 2, { 150 });

	// Call function CourseList::addCourse(Course) to add the three courses.
	listOfCourses.addCourse(cpp);
	listOfCourses.addCourse(java);
	listOfCourses.addCourse(python);

	// Call function CourseList::addCourse(int, string, int, set)
	// to add three additional courses: 131, 272, 216
	listOfCourses.addCourse(131, "Python 1", 3, {});
	listOfCourses.addCourse(272, "Computer Arch", 4, { 250, 200, 150 });
	listOfCourses.addCourse(216, "Discrete Math", 5, { 200, 150 });

	// Create a string and use it as a parameter to 
	// call function CourseList::retrieveAllCourses().
	// Print the string.
	string allCourses = "";
	listOfCourses.retrieveAllCourses(allCourses);
	cout << "The courses in the list are:\n" << allCourses << "\n";

	// Call CourseList::search(int) to search for 150.
	cout << "The value 150 is in the list: ";
	if (listOfCourses.searchCourse(150))
	{
		cout << "true\n";
	}
	else
	{
		cout << "false\n";
	}

	// Create a string to store a course name, and 
	// call CourseList::search(int, string) to 
	// retrieve the name of the course and print it.
	string searched = "";
	listOfCourses.searchCourse(150, searched);
	cout << "The name of the course is " << searched << "\n";

	// Create an empty course by using the default constructor.
	Course emptyCourse; // to house course in next function

	// Call function CourseList::search(int, Course) to 
	// retrieve the course and print the prefix, the number
	// the name and the units.
	listOfCourses.searchCourse(131, emptyCourse);
	cout << "Searching for python...\n"
		 << emptyCourse.getPrefix() << emptyCourse.getCourseNumber()
		 << " " << emptyCourse.getCourseName() << " worth "
		 << emptyCourse.getCourseUnits() << " units\n";

	// Call function CourseList::deleteCourse to delete 131.
	listOfCourses.deleteCourse(131);

	// Call function CourseList::deleteCourse to delete 272.
	listOfCourses.deleteCourse(272);

	// Call function CourseList::deleteCourse to delete 150.
	listOfCourses.deleteCourse(150);

	// Call function CourseList::deleteCourse to delete 250.
	listOfCourses.deleteCourse(250);

	// Print all courses to see what is left in the list.
	string remainingCourses = "";
	listOfCourses.retrieveAllCourses(remainingCourses);

	cout << "\nThe remaining courses are:\n" 
		 << remainingCourses << "\n";
}
