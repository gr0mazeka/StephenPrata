// cd_13_02.cpp --for sol_13_02.cpp

#include "cd_13_02.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    performers = NULL;
    label = NULL;
    selections = 0;
    playtime = 0;
}
Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}
void Cd::Report() const
{
    std::cout << performers << '\n' << label << '\n'
              << selections << '\n' << playtime << '\n';
}
Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
// Classic methods
Classic::Classic(const char *sc, const char *s1, const char *s2,
                    int n, double x) : Cd(s1, s2, n, x)
{
    pr_work = new char[std::strlen(sc) + 1];
    std::strcpy(pr_work, sc);
}
Classic::Classic(const Classic & d) : Cd(d)
{
    pr_work = new char[std::strlen(d.pr_work) + 1];
    std::strcpy(pr_work, d.pr_work);
}
Classic::Classic() : Cd()
{
    pr_work = NULL;
}
Classic::~Classic()
{
    delete [] pr_work;
}
void Classic::Report() const
{
    std::cout << pr_work << '\n';
    Cd::Report();
}
Classic & Classic::operator=(const Classic & d)
{
    if(this == &d)
        return *this;
    delete [] pr_work;
    Cd::operator=(d);
    pr_work = new char[std::strlen(d.pr_work) + 1];
    std::strcpy(pr_work, d.pr_work);
    return *this;
}
