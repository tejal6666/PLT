#include <iostream>
#include <string>

int main()
{
    std::string name;
    int math, english, science, total, average;

    // accept a student’s name and scores in three subject.
    std::cout << "Enter Student Name :";
    std::cin >> name;
    std::cout << "Enter the below subject scores out of 100" << std::endl;
    std::cout << "Math : ";
    std::cin >> math;
    std::cout << "English : ";
    std::cin >> english;
    std::cout << "Science : ";
    std::cin >> science;

    total = math + english + science;
    std::cout << "Total score :" << total << std::endl;
    average = total / 3;
    std::cout << "average " << average << std::endl;

    // 1stclass is for a score of 60 and above
    if (average >= 60)
    {
        std::cout << "Pass:First Class" << std::endl;
    }
    // 2ndclass is for a score of 50 and above
    else if (average >= 50)
    {
        std::cout << "Pass:Second class " << std::endl;
    }
    // pass class is for a score of 35 and above
    else if (average >= 35)
    {
        std::cout << "Pass" << std::endl;
    }
    else //  If the score is less than 35, then the student fails.
    {
        std::cout << "Fail" << std::endl;
    }

    return 0;
}