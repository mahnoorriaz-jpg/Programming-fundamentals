#include <iostream>
using namespace std;
int main() {
    int holidays, workingDays, playTime, norm, diff, hours, minutes;
    cout << "Holidays: ";
    cin >> holidays;
    workingDays = 365 - holidays;
    playTime = (workingDays * 63) + (holidays * 127);
    norm = 30000;
    if (playTime <= norm) {
        diff = norm - playTime;
        hours = diff / 60;
        minutes = diff % 60;
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play";
    } 
    else {
        diff = playTime - norm;
        hours = diff / 60;
        minutes = diff % 60;
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes for play";
    }

    return 0;
}