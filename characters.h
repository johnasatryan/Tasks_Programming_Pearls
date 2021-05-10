#ifndef _CHARS_
#define _CHARS_
#include<iostream>

void letterA()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(i == 0 || j == 0 || i == 3 || j == 4)
            {
                std::cout << "x" << " ";
            } else {
                std::cout << " " << " ";
            }
        }
        std::cout  << std::endl;
    }
    std::cout << std::endl;
}

void letterB()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(i == 0 || j == 0 || i == 3 || j == 4 || i == 6)
            {
                std::cout << "x" << " ";
            } else {
                std::cout << " " << " ";
            }
        }
        std::cout  << std::endl;
    }
    std::cout << std::endl;
}

void letterC()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(i == 0 || j == 0 || i == 6)
            {
                std::cout << "x" << " ";
            } else {
                std::cout << " " << " ";
            }
        }
        std::cout  << std::endl;
    }
    std::cout << std::endl;
}

void letterD()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(i == 0 || j == 0 ||  j == 4 || i == 6)
            {
                std::cout << "x" << "";
            } else {
                std::cout << " " << " ";
            }
        }
        std::cout  << std::endl;
    }
    std::cout << std::endl;
}

void letterE()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(i == 0 || j == 0 || i == 3 || i == 6)
            {
                std::cout << "x" << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


void letterF()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(i == 0 || j == 0 || i == 3)
            {
                std::cout << "x" << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void letterG()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(i == 0 || j == 0 || i == 6 || i == 3)
            {
                std::cout << "x" << " ";
            }
            else
            {
                std::cout << "" << " ";
            }
            if(i == 4 && j == 4 )
            {
                std::cout << "  x";
            }
            if(i == 5 && j == 4)
            {
                std::cout << "  x";
            }
        }
        std::cout  << std::endl;
    }
    std::cout << std::endl;
}

void letterH()
{
    std::cout << std::endl;
    for(int i = 0; i < 7; ++i)
    {
        std::cout << '\t' << '\t' << '\t';
        for(int j = 0; j < 5; ++j)
        {
            if(j == 0 || i == 3 || j == 4)
            {
                std::cout << "x" << " ";
            } else {
                std::cout << " " << " ";
            }
        }
        std::cout  << std::endl;
    }
    std::cout << std::endl;
}

/*  _______________________________________________________________   */

void evaluateChar(const char SYMBOL)
{
    switch(SYMBOL)
    {
        case 'A':
            letterA();
            break;
        case 'B':
            letterB();
            break;
        case 'C':
            letterC();
            break;
        case 'D':
            letterD();
            break;
        case 'E':
            letterE();
            break;
        case 'F':
            letterF();
            break;
        case 'G':
            letterG();
            break;
        case 'H':
            letterH();
            break;
    }
}

#endif
