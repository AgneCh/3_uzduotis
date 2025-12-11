#include "StudentSort.h"
#include <cmath>
#include <cctype>
#include <string>
#include <iterator>

std::string_view getNameLetters(const std::string &s)
{
    size_t i = 0;
    while (i < s.size() && !(s[i] >= '0' && s[i] <= '9'))
        ++i;
    return std::string_view{s.data(), i};
}

int getNameNumber(const std::string &s)
{
    size_t i = 0;
    while (i < s.size() && !(s[i] >= '0' && s[i] <= '9'))
        ++i;
    int number = 0;
    while (i < s.size() && (s[i] >= '0' && s[i] <= '9'))
    {
        number = number * 10 + (s[i] - '0');
        ++i;
    }
    return number;
}

bool compareStudentNames(const Student &a, const Student &b)
{
    auto aLetters = getNameLetters(a.firstName());
    auto bLetters = getNameLetters(b.firstName());

    if (aLetters != bLetters)
        return aLetters < bLetters;

    return getNameNumber(a.firstName()) < getNameNumber(b.firstName());
}

bool compareStudentGrades(const Student &a, const Student &b)
{
    return a.finalMean() < b.finalMean();
}

// Stradegy 2
void categorizeStudents_2(StudentContainer &allStudents, StudentContainer &belowFive, StudentContainer &fiveAndUp)
{
    belowFive.reserve(allStudents.size() / 2);
    fiveAndUp.reserve(allStudents.size() / 2);
    std::size_t i = 0;
    while (i < allStudents.size())
    {
        if (allStudents[i].finalMean() < 5.0)
        {
            belowFive.push_back(std::move(allStudents[i]));
            allStudents[i] = std::move(allStudents.back());
            allStudents.pop_back();
        }
        else
        {
            ++i;
        }
    }

    fiveAndUp = std::move(allStudents);
}