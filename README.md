# Oussama Moustadraf

🔗 My Portfolio : [https://bsoulmindy.github.io/My-Portfolio/](https://bsoulmindy.github.io/My-Portfolio/)

```cpp
class Bsoulmindy : public Human
{
public:
    Bsoulmindy() : m_fullName("Oussama Moustadraf"),
                   m_profession("Software Engineer"),
                   m_schoolName("ENSA Agadir"),
                   m_country(Country::MOROCCO) {}

    /**
     * @brief My programming languages sorted by my Proficiency Level (PL)
     *
     * @return std::vector<Language>
     */
    std::vector<Language> myProgrammingLanguages()
    {
        return {
            Language("C++", "PL6 (Upper Intermediate)"),
            Language("Java", "PL6 (Upper Intermediate)"),
            Language("C", "PL5 (Solid Intermediate)"),
            Language("JS/TS", "PL4 (Below Intermediate)"),
            Language("Dart", "PL4 (Below Intermediate)"),
            Language("Python3", "PL3 (Upper Beginner)"),
        };
    }

    /**
     * @brief My personal projects
     *
     * @return std::vector<Project>
     */
    std::vector<Project> myProjects()
    {
        return {
            Project("My Portfolio", "https://github.com/Bsoulmindy/My-Portfolio"),
            Project("RevisionAssistant", "https://github.com/Bsoulmindy/RevisionAssistant"), // Marked as private on October 6th, 2024
            Project("Regions Music", "https://github.com/Bsoulmindy/Regions-Music"), // Marked as private on October 6th, 2024
        };
    }

    /**
     * @brief My human languages sorted by my CEFR Proficiency level.
     * Take a look on CEFR Levels here :
     * https://en.wikipedia.org/wiki/Common_European_Framework_of_Reference_for_Languages#Common_reference_levels
     *
     * @return std::vector<Language>
     */
    std::vector<Language> myHumanLanguages()
    {
        return {
            Language("Arabic", "C2"),
            Language("English", "C1"),
            Language("French", "B2"),
            Language("German", "B1"),
        };
    }

private:
    std::string m_fullName;
    std::string m_profession;
    std::string m_schoolName;
    int m_birthyear;
    Country m_country;
};
```
