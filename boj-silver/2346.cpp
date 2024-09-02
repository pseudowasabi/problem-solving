#include <iostream>
using namespace std;

class Balloon {
public:
    Balloon(int index, int value) {
        this->left = this->right = nullptr;
        this->index = index;
        this->value = value;
    }
    Balloon *left, *right;
    int value, index;
};

void init(Balloon *b1, int n) {

    Balloon *t = b1;

    for (int i = 2, _; i <= n; ++i) {
        cin >> _;

        Balloon *b = new Balloon(i, _);

        b->left = t;
        t->right = b;

        t = b;
    }

    t->right = b1;
    b1->left = t;
}

Balloon* pop(Balloon *t) {

    if (t -> left == t) {
        delete t;
        return nullptr;
    }

    t->left->right = t->right;
    t->right->left = t->left;

    Balloon *ret = t;
    for (int i = 0; i < abs(t->value); ++i, ret = t->value > 0 ? ret->right : ret->left);
    
    delete t;
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, _;
    cin >> n >> _;

    Balloon *b1 = new Balloon(1, _);
    init(b1, n);

    for (Balloon *r = b1; n > 0; --n) {
        cout << r->index << ' ';
        r = pop(r);
    }
    
    return 0;
}