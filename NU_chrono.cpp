#include <chrono>
using namespace chrono;
int main()
    {
        chrono::high_resolution_clock::time_point begin_time = chrono::high_resolution_clock::now();
        
        chrono:: high_resolution_clock::time_point stop_time = chrono::high_resolution_clock::now();

        chrono::duration<double> slapsed = duration_cast<duration<double>>(stop_time - begin_time);
        cout << "time takes " << slapsed.count() * 1000 << "ms" << endl;
        return 0;
    }