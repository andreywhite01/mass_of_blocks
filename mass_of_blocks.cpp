#include <iostream>
#include <vector>
#include <cstdint>
#include <set>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    uint32_t N = 0;
    uint16_t R = 0;

    cin >> N >> R;
    uint64_t total_mass = 0;
    for (uint32_t i = 0; i < N; ++i)
    {
        uint64_t W = 0, H = 0, D = 0;
        cin >> W >> H >> D;
        total_mass += W * H * D;
    }
    cout << total_mass * R << endl;
    return 0;
}
