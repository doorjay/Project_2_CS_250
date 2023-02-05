/*
	Pradhan, Dorje

	Fall 2022
	CS A250 -  C++ 2
	Project: CS Courses
*/

#include "CourseList.h"

#include <iostream>
using namespace std;

void testOpEqualEmptyObjs()
{
	// TEST ASSIGNMENT OPERATOR: PARAMETER OBJECT IS EMPTY
	 

	// To print, create a variable of type string and use it
	// as an argument to call the function retrieveAllCourses().


	// Create two objects of the class CourseList:
	// courseList1 and courseList2
	CourseList courseList1;
	CourseList courseList2;

	// Print courseList1 (should be empty)
	string list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should be empty)
	string list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n\n";

	// CALL: courseList1 = courseList2;
	courseList1 = courseList2;

	// Print courseList1 (should be empty)
	list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should be empty)
	list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n\n";

}

void testOpEqSameLengthObjs()
{
	//TEST ASSIGNMENT OPERATOR: OBJECTS HAVE SAME LENGTH


	// To print, create a variable of type string and use it
	// as an argument to call the function retrieveAllCourses().


	// Create courseList1 with two courses: 131 and 272
	CourseList courseList1;
	courseList1.addCourse(131, "Python", 3, {});
	courseList1.addCourse(272, "Data Structs", 4, {131, 150});

	// Create courseList2 with two courses: 150 and 250
	CourseList courseList2;
	courseList2.addCourse(150, "C++", 4, {131});
	courseList2.addCourse(250, "C++ 2", 4, {131, 150, 200});

	// Print courseList1 (should show 131 and 272)
	string list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should show 150 and 250)
	string list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";

	// CALL: courseList1 = courseList2
	courseList1 = courseList2;

	// Print courseList1 (should show 150 and 250)
	list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should show 150 and 250)
	list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";

	// CLEAR courseList2
	courseList2.clearList();

	// Print courseList1 (should show 150 and 250)
	list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should be empty)
	list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";
}

void testOpEqCallingLonger()
{
	//TEST ASSIGNMENT OPERATOR : CALLING OBJ IS LONGER

	// To print, create a variable of type string and use it
	// as an argument to call the function retrieveAllCourses().

	// Create courseList1 with four courses: 131, 170, 257, and 272
	CourseList courseList1;
	courseList1.addCourse(131, "Python", 3, {});
	courseList1.addCourse(170, "Python 2", 3, {131});
	courseList1.addCourse(257, "Computer Archit", 3, {131, 150, 200});
	courseList1.addCourse(272, "Data Structs", 4, { 131, 150 });
	
	// Create courseList2 with two courses: 150, and 250
	CourseList courseList2;
	courseList2.addCourse(150, "C++", 4, { 131 });
	courseList2.addCourse(250, "C++ 2", 4, { 131, 150, 200 });

	// Print courseList1 (should show 131, 170, 257, 272)
	string list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should show 150 and 170)
	string list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";

	// CALL: courseList1 = courseList2
	courseList1 = courseList2;

	// Print courseList1 (should show 150 and 170)
	list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should show 150 and 170)
	list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";

	// CLEAR courseList2
	courseList2.clearList();

	// Print courseList1 (should show 150 and 170)
	list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should be empty)
	list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";
}

void testOpEqCallingShorter()
{
	//TEST ASSIGNMENT OPERATOR: CALLING OBJ IS SHORTER


	// To print, create a variable of type string and use it
	// as an argument to call the function retrieveAllCourses().


	// Create courseList1 with two courses: 131, 272 
	CourseList courseList1;
	courseList1.addCourse(131, "Python", 3, {});
	courseList1.addCourse(272, "Data Structs", 4, { 131, 150 });

	// Create courseList2 with four courses: 150, 170, 250, and 257
	CourseList courseList2;
	courseList2.addCourse(150, "C++", 4, { 131 });
	courseList2.addCourse(170, "Java 2", 3, {150});
	courseList2.addCourse(250, "C++ 2", 4, { 131, 150, 200 });
	courseList2.addCourse(257, "Data Struct", 4, {131, 250});

	// Print courseList1 (should show 131 and 272)
	string list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should show 150, 170, 250, 257)
	string list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";

	// CALL: courseList1 = courseList2 
	courseList1 = courseList2;

	// Print courseList1 (should show 150, 170, 250, 257)
	list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should show 150, 170, 250, 257)
	list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";

	// CLEAR courseList2
	courseList2.clearList();

	// Print courseList1 (should show 150, 170, 250, 257)
	list1 = "";
	courseList1.retrieveAllCourses(list1);
	cout << "List 1 contains:\n" << list1 << "\n";

	// Print courseList2 (should be empty)
	list2 = "";
	courseList2.retrieveAllCourses(list2);
	cout << "List 2 contains:\n" << list2 << "\n";
}

