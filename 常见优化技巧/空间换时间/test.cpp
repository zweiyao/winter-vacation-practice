#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void permute(vector<char>& elements, int start, vector<string>& result) {
    if (start == elements.size()) {
        string s;
        for (char c : elements) {
            s += c;
        }
        result.push_back(s);
        return;
    }
    for (int i = start; i < elements.size(); ++i) {
        swap(elements[start], elements[i]);
        permute(elements, start + 1, result);
        swap(elements[start], elements[i]);
    }
}

int main() {
    vector<char> elements;
    char c;
    for (int i = 0; i <6; ++i) {
        cin >> c;
        elements.push_back(c);
    }
    vector<string> result;
    permute(elements, 00, result);
    sort(result.begin(), result.end());
    for (const string& s : result) {
        cout << s << endl;
    }
    return 0;
}
