#pragma once
#include <string>

class Human
{
};

struct Language
{
    std::string name;
    std::string level;

    Language(const std::string &n, const std::string &l)
        : name(n), level(l) {}
};

struct Project
{
    std::string name;
    std::string url;

    Project(const std::string &n, const std::string &u)
        : name(n), url(u) {}
};

enum Country
{
    MOROCCO
};
