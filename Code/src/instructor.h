#include <string>
#include <unordered_set>

using namespace std;

struct instructor {
    // instructor data consists of only id and courses they taught
    string ins_id;
    unordered_set<string> classes;  
    void add_course(string course) {
        classes.insert(course);
    }
};
