#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
#include <array>
using namespace std;
class GradeBook
{
public:
	static const size_t students = 10;
	GradeBook( const std::string &, const std::array< int, students > & );
	void setCourseName( const std::string & );
	string getCourseName() const;
	void displayMessage() const;
	void processGrades() const;
	int getMinimum() const;
	int getMaximum() const;
	double getAverage() const;
	void outputBarChart() const;
	void outputGrades() const;
private:
	string courseName;
	array< int, students > grades; 
};
#endif
