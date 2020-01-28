// cd_13_01.cpp --for sol_13_01.cpp

#include "cd_13_01.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
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
    std::strcpy(pr_work, sc);
}
Classic::Classic(const Classic & d) : Cd(d)
{
    std::strcpy(pr_work, d.pr_work);
}
Classic::Classic() : Cd()
{
    pr_work[0] = '\0';
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
    Cd::operator=(d);
    std::strcpy(pr_work, d.pr_work);
    return *this;
}
