#pragma once
#include <string>
#include <vector>

struct StudentGrade
{
    std::string name;
    char grade;
};

class GradeMap
{
private:
    std::vector<StudentGrade> m_map;

public:
    GradeMap()
    {
    }

    char& operator[](std::string name);
};
