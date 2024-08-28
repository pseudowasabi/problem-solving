#include <iostream>
#include <string>
using namespace std;

const int alphabetCount = 26;

class Node {
public:
    Node() {
        for (int i = 0; i < alphabetCount; ++i) {
            this->next[i] = nullptr;
        }
    }
    Node *next[alphabetCount];
    char c;
};

void buildTree(Node *root, string s) {
    
    for (string::iterator i = s.begin(); i != s.end(); ++i) {

        Node *node = root;

        for (string::iterator j = i; j != s.end(); ++j) {

            Node *child;
            int idx = *j - 'a';

            if (node->next[idx] != nullptr) {
                child = node->next[idx];
            } else {
                child = new Node();
                child->c = *j;
                node->next[idx] = child;
            }

            node = child;
        }
    }
}

int traverseTree(Node *node, int level) {

    // cout << "(level: " << level << ") " << node->c << '\n';

    int count = 1;

    for (int i = 0; i < alphabetCount; ++i) {
        if (node->next[i] != nullptr) {
            count += traverseTree(node->next[i], level + 1);
        }
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    Node *root = new Node();
    root->c = '.';
    buildTree(root, s);

    int count = traverseTree(root, 0) - 1;
    cout << count;

    return 0;
}