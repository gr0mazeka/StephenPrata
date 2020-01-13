// string_12_02.h --for sol-12-02.cpp

#ifndef STRING_H_
#define STRING_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        char *str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
        String(const char *s);
        String();
        String(const String &);
        ~String();
        int length() const {return len;}
        int has(const char);
        void stringlow();
        void stringup();
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        friend bool operator<(const String &st1, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st1, const String &st2);
        friend ostream & operator<<(ostream &os, const String &st);
        friend istream & operator>>(istream &is, String &st);
        friend String operator+(const String &st1, const String &st2);
        friend String operator+(const char *, const String &);
        friend String operator+(const String &, const char *);
        static int HowMany();
};
#endif // STRING_H_
