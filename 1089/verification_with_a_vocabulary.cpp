#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, string> dict;
  string word;
  while (getline(cin, word)) {
    if (word == "#") {
      break;
    }
    dict[word] = word;
    for (int i = 0; i < word.size(); i++) {
      string temp = word;
      for (int j = 0; j < 26; j++) {
        temp[i] = 'a' + j;
        dict[temp] = word;
      }
    }
  }
  int start, end;
  int ans = 0;
  string line;
  while (getline(cin, line)) {
    start = end = -1;
    for (int i = 0; i < line.size(); i++) {
      if (islower(line[i])) {
        start = (start == -1) ? i : start;
        end = (end == -1) ? i : end + 1;
        if (i == line.size() - 1) {
          string w = line.substr(start, end - start + 1);
          if (dict.count(w)) {
            line = line.replace(start, end - start + 1, dict[w]);
            ans = (dict[w] != w) ? ans + 1 : ans;
          }
        }
      } else {
        if (start == -1 and end == -1) {
          continue;
        }
        string w = line.substr(start, end - start + 1);
        if (dict.count(w)) {
          line = line.replace(start, end - start + 1, dict[w]);
          ans = (dict[w] != w) ? ans + 1 : ans;
        }
        start = end = -1;
      }
    }
    cout << line << "\n";
  }
  cout << ans << "\n";
  return 0;
}
