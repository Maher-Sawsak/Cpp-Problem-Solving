#include <iostream>
#include <string>

using namespace std;

int main() {

    string Profile = "Hello, My name is maher sawsak";

    cout << "--- Basic Info ---" << endl;
    cout << "Original String: " << Profile << endl;

    cout << "Character at index 4 is: " << Profile.at(4) << endl;

    cout << "Length: " << Profile.length() << endl;
    cout << "Size:   " << Profile.size() << endl;


    cout << "\n--- Modifications ---" << endl;

    Profile.replace(5, 1, ", Hello Again ,");
    cout << "After Replace: " << Profile << endl;
    cout << "New Size: " << Profile.size() << endl;

    Profile.insert(Profile.length(), ", I am From Syria");
    cout << "After Insert:  " << Profile << endl;

    Profile.append(", My department is Software Eng.");
    cout << "After Append:  " << Profile << endl;


    cout << "\n--- Single Character Operations ---" << endl;

    Profile.push_back('!');
    cout << "After push_back: " << Profile << endl;

    Profile.pop_back();
    cout << "After pop_back:  " << Profile << endl;


    cout << "\n--- Search & Extract ---" << endl;

    size_t namePos = Profile.find("maher");
    if (namePos != string::npos) {
        string name = Profile.substr(namePos, 5);
        cout << "Extracted Substring: " << name << endl;
    }

    size_t greetingPos = Profile.find("Hello Again ,");
    if (greetingPos != string::npos) {
        Profile.erase(greetingPos, 13);
        cout << "After Erase: " << Profile << endl;
    }


    cout << "\n--- Cleanup ---" << endl;

    Profile.clear();
    if (Profile.empty()) {
        cout << "The string is now empty!" << endl;
    }

    return 0;
}