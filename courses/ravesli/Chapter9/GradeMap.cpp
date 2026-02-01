#include "GradeMap.h"
#include <string>
#include <vector>

struct StudentGrade;

char& GradeMap::operator[](std::string name)
{
    for (auto &student : m_map)
    {
        if (student.name == name)
        {
            return student.grade;
        }
    }
    StudentGrade temp {name, '0'};
    m_map.push_back(temp);
    return m_map.back().grade;
}
