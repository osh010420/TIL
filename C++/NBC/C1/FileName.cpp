#include <string>
#include <iostream>

class student {
private:
		int age;
		std::string name;

public:
	student(int studentage, std::string studentname) : age(studentage), name(studentname){}

	std::string getName()
	{
		return name;
	}

	int getAge()
	{
		return age;
	}
	
	std::string getInfo() {
		return "학생이름 " + name + "\n 나이 " + std::to_string(age);
	}	
};

class studentPrinter
{
public:
	void print(student& student)
	{
		std::cout << student.getInfo() << std::endl;
	}
};

int main()
{
	student s(26, "osh");

	studentPrinter printer;

	printer.print(s);

	return 0;
}