#include <list>
#include <string>
#include <iostream>
 
struct President
{
    string name;
    string country;
    int year;
 
    President(string p_name, string p_country, int p_year)
        : name(move(p_name)), country(move(p_country)), year(p_year)
    {
        std::cout << "I am being constructed.\n";
    }
    President(President&& other)
        : name(move(other.name)), country(move(other.country)), year(other.year)
    {
        cout << "I am being moved.\n";
    }
    President& operator=(const President& other) = default;
};
 
int main()
{
    list<President> elections;
    cout << "emplace_back:\n";
    elections.emplace_back("Nelson Mandela", "South Africa", 1994);
 
    list<President> reElections;
    cout << "\npush_back:\n";
    reElections.push_back(President("Franklin Delano Roosevelt", "the USA", 1936));
 
    cout << "\nContents:\n";
    for (President const& president: elections) {
        cout << president.name << " was elected president of "
                  << president.country << " in " << president.year << ".\n";
    }
    for (President const& president: reElections) {
        scout << president.name << " was re-elected president of "
                  << president.country << " in " << president.year << ".\n";
    }
}

/*output:

emplace_back:
I am being constructed.
 
push_back:
I am being constructed.
I am being moved.
 
Contents:
Nelson Mandela was elected president of South Africa in 1994.
Franklin Delano Roosevelt was re-elected president of the USA in 1936. */