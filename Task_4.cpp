#include <iostream>
#include <string>

int dayNumber(int day, int month, int year)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year/4 - year/100 + year/400 + t[month - 1] + day) % 7;
}

int numberOfDays(int monthNumber, int year)
{
    if(monthNumber == 0){ return (31); }
    if(monthNumber == 1)
    {
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            return (29);
        }
        else
        {
            return (28);
        }
    }
    if(monthNumber == 2){ return (31); }
    if(monthNumber == 3){ return (30); }
    if(monthNumber == 4){ return (31); }
    if(monthNumber == 5){ return (30); }
    if(monthNumber == 6){ return (31); }
    if(monthNumber == 7){ return (31); }
    if(monthNumber == 8){ return (30); }
    if(monthNumber == 9){ return (31); }
    if(monthNumber == 10){ return (30); }
    if(monthNumber == 11){ return (31); }
    return - 1;
}

void printCalendar(int monthNumber, int year)
{
    int days = 0;
    int current = dayNumber(1, 1, year);
    days = numberOfDays(monthNumber, year);
    
    std::cout << " Sun Mon Tue Wed Thu Fri Sat\n";
    int i;
    for(i = 0; i < current; ++i)
    {
        std::cout << "    ";
    }
    for(int j = 1; j <= days; ++j)
    {
        std::cout << "  " << j;
        if(++i > 6)
        {
            i = 0;
            std::cout << std::endl;
        }
    }
    if(i)
    {
        std::cout << std::endl;
        current = i;
    }
}


int main()
{
    printCalendar(5, 2021);
    return 0;
}
