    #include <iostream>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        long long n;
        cin >> n;

        cout << 3 + 3 * (n - 1) + n;
        
        return 0;
    }