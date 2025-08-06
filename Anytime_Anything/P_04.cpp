#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

// Helper: Normalize a line
string normalize(string line) {
    // remove leading/trailing spaces and reduce multiple spaces
    stringstream ss(line);
    string word, result = "";
    while (ss >> word) {
        if (!result.empty()) result += " ";
        result += word;
    }
    return result;
}

// Helper: Remove empty lines, normalize each line
vector<string> processLines(const vector<string>& lines) {
    vector<string> result;
    for (const string& line : lines) {
        string norm = normalize(line);
        if (!norm.empty()) {
            result.push_back(norm);
        }
    }
    return result;
}

// Longest common subsequence of consecutive lines
int longestMatch(const vector<string>& a, const vector<string>& b) {
    int maxMatch = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            int k = 0;
            while (i + k < a.size() && j + k < b.size() && a[i + k] == b[j + k]) {
                k++;
            }
            maxMatch = max(maxMatch, k);
        }
    }
    return maxMatch;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    vector<pair<string, vector<string>>> repo; // {filename, code lines}

    // Read repository files
    for (int i = 0; i < N; i++) {
        string filename;
        getline(cin, filename);

        vector<string> lines;
        string line;
        while (getline(cin, line)) {
            if (line == "***END***") break;
            lines.push_back(line);
        }
        repo.push_back({filename, processLines(lines)});
    }

    // Read new snippet
    vector<string> newCode;
    string line;
    while (getline(cin, line)) {
        if (line == "***END***") break;
        newCode.push_back(line);
    }
    vector<string> newLines = processLines(newCode);

    // Compare with each file
    int maxLen = 0;
    vector<string> matchedFiles;

    // Use a standard for loop that is compatible with all modern C++ versions
    for (auto& filePair : repo) {
        string& filename = filePair.first;
        vector<string>& fileLines = filePair.second;
        
        int match = longestMatch(fileLines, newLines);
        if (match > maxLen) {
            maxLen = match;
            matchedFiles.clear();
            matchedFiles.push_back(filename);
        } else if (match == maxLen && match > 0) {
            matchedFiles.push_back(filename);
        }
    }

    if (maxLen == 0) {
        cout << "0" << endl;
    } else {
        cout << maxLen;
        for (const string& name : matchedFiles) {
            cout << " " << name;
        }
        cout << endl;
    }

    return 0;
}