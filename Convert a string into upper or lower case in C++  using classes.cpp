#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class StringConverter {
public:
    StringConverter(const string &str) : originalString(str) {}
    string toUpperCase() {
        string upperString = originalString;
        transform(upperString.begin(), upperString.end(), upperString.begin(), ::toupper);
        return upperString;
    }
    string toLowerCase() {
        string lowerString = originalString;
        transform(lowerString.begin(), lowerString.end(), lowerString.begin(), ::tolower);
        return lowerString;
    }
private:
    string originalString;
};
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    StringConverter converter(input);
    cout << "Original String: " << input << endl;
    cout << "Uppercase String: " << converter.toUpperCase() << endl;
    cout << "Lowercase String: " << converter.toLowerCase() << endl;
    return 0;
}
