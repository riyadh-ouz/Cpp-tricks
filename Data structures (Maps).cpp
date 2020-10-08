/// 11- Data structures (Maps)

/* Maps in Python
/// see Dictionaries in Python "tel = {'jack': 4098, 'sape': 4139}"
/// Dictionaries accept only immutable objects as keys (tuples, strings and numbers ...)
/// if a tuple contain any mutable object either directly or indirectly, it cannot be used as a key of a dictionary
/// Tuples of Python a = (4,5,6) or a = 4,5,6 are immutable objects
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> ageOf;

    ageOf["Mohamed"] = 20;
    ageOf["Ahmed"] = 30;

    ageOf["Mohamed"] ++;
    ageOf["Ahmed"] --;

    cout << ageOf["Mohamed"] << endl;
    cout << ageOf["Ahmed"] << endl;
    cout << ageOf["Mahmoud"] << endl; /// will create ageOf["Mahmoud"] = 0;


    map<string, int>::iterator it;
    for (it = ageOf.begin(); it != ageOf.end(); it++)
    {
        pair<string, int> p = *it; /// Maps are essentially sets of of pairs.

        cout << "The age of " << p.first << " is " << p.second << endl;
    }
}

/// Maps are also implemented using BSTs!
/// They are essentially sets of of pairs.

/// Accessing a key is O(logN)
/// Keys are traversed in ascending order.