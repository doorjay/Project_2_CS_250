/*
	Pradhan, Dorje

	Fall 2022
	CS A250 -  C++ 2
	Project: CS Courses
*/

#include "CourseList.h"

#include <iostream>
using namespace std;

void testCourseList();
void testCopyConstructor();
void testOpEqualEmptyObjs();
void testOpEqSameLengthObjs();
void testOpEqCallingLonger();
void testOpEqCallingShorter();


int main()
{	
	testCourseList();
	testCopyConstructor();
	testOpEqualEmptyObjs();
	testOpEqSameLengthObjs();
	testOpEqCallingLonger();
	testOpEqCallingShorter();

	cout << "\n";
	return 0;
}
