#include <iostream>
#include <chrono>
#include <thread>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

void progress_bar(int current, int total) {
    const int bar_width = 50;
    float progress = static_cast<float>(current) / total;
    int filled = progress * bar_width;

    cout << "\r[";
    for (int i = 0; i < filled; ++i) cout << "=";
    for (int i = 0; i < bar_width - filled; ++i) cout << " ";
    cout << "] " << int(progress * 100.0) << "%";
    cout.flush();
}

int main() {
    while(true){
        int total = 100;
        cout << "ConaBananaSystem: " << endl;
        for (int i = 1; i <= total; ++i) {
            progress_bar(i, total);
            // ここに処理を書く
            this_thread::sleep_for(chrono::milliseconds(100));
        }
        cout << endl;
        system("open http://google.com");
        system("start http://google.com");
    }
    return 0;
}
