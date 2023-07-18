#include<iostream>
#include<tuple>

using namespace std;

int main() {

    tuple <char, int, int, char, float> t;
    t = make_tuple(‘a’, 75, 5, ‘z’, 5.5);

    return 0;
}
