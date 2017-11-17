#include <iostream> 
using namespace std;

int main(int argc, char **argv) {
    int N, K, result;
    cin >> N >> K;
    result = N - (N / K);
    cout << result << '\n';
}
