/*
	Pradhan, Dorje

	Fall 2022
	CS A250 -  C++ 2
	Project: CS Courses
*/

#include "CourseList.h"

#include <iostream>
using namespace std; 

void testCopyConstructor()
{	
	/***************************************************
	* TEST COPY CONSTRUCTOR: PARAMETER OBJECT IS EMPTY
	****************************************************/

	// To print, create a variable of type string and use it
	// as an argument to call the function retrieveAllCourses().


	// Create an object of the class CourseList named 
	// courseList1 using the default constructor.
	CourseList courseList1;

	// Create an object of the class CourseList named 
	// courseList2 using the copy constructor with 
	// parameter courseList1.
	// CALL: CourseList courseList1(courseList2)
	CourseList courseList2(courseList1);

	// Print courseList1 (should be empty)
	string list1Str = "";
	courseList1.retrieveAllCourses(list1Str);
	cout << "List 1 contains: " << list1Str << "\n";

	// Print courseList2 (should be empty)
	string list2Str = "";
	courseList1.retrieveAllCourses(list2Str);
	cout << "List 2 contains: " << list2Str << "\n\n";

	/*****************************************************
	* TEST COPY CONSTRUCTOR: PARAMETER OBJECT HAS COURSES
	******************************************************/	

	// Add 131 and 272 to courseList1
	courseList1.addCourse(131, "Python 1", 3, {});
	courseList1.addCourse(272, "Data Structs", 4, {131, 150, 250});

	// Create an object of the class CourseList named 
	// courseList3 using the copy constructor with 
	// parameter courseList1.
	// CALL: CourseList courseList3(courseList1)
	CourseList courseList3(courseList1);

	// Print courseList1 (should show 131 and 272)
	list1Str = "";
	courseList1.retrieveAllCourses(list1Str);
	cout << "List 1 contains: \n" << list1Str 
		 << "Should contain: 131 and 272\n\n";

	// Print courseList3 (should show 131 and 272)
	string list3Str = "";
	courseList3.retrieveAllCourses(list3Str);
	cout << "List 3 contains: \n" << list3Str 
		<< "Should contain: 131 and 272\n\n";

	// CLEAR courseList1
	courseList1.clearList();

	// Print courseList1 (should be empty)
	list1Str = "";
	courseList1.retrieveAllCourses(list1Str);
	cout << "List 1 contains: " << list1Str 
		<< "\nShould be empty\n\n";

	// Print courseList3 (should show 131 and 272)
	list3Str = "";
	courseList3.retrieveAllCourses(list3Str);
	cout << "List 3 contains: \n" << list3Str 
		<< "Should contain: 131 and 272\n\n";
}
