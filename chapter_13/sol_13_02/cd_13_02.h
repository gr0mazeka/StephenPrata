// cd_13_02.h --for sol_13_02.cpp

#ifndef CD_H_
#define CD_H_

// base class
class Cd
{ // represents a CD disk
    private:
        char * performers;
        char * label;
        int selections;  // number of selections
        double playtime; // playing time in minutes
    public:
        Cd(const char *s1, const char *s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd();
        virtual void Report() const; // reports all CD data
        Cd & operator=(const Cd & d);
};
// Classic Class
class Classic : public Cd
{
    private:
        char * pr_work;
    public:
        Classic(const char *sc, const char *s1, const char *s2,
                int n, double x);
        Classic(const Classic & d);
        Classic();
        ~Classic();
        virtual void Report() const;
        Classic & operator=(const Classic & d);
};
#endif // CD_H_
