#include <iostream>
#include <fstream>
#include "Track.h"
#include "InsertionSort.h"
#include "MergeSort.h"

using namespace std;

void readFile(fstream &file, Track *tracks) {
    string str;
    getline(file, str);

    cout << "Reading the file." << endl << endl;
    cout << "List of the top 100 Spotify tracks" << endl;

    for (int i = 0; i < 100; i++) {
        auto *track = new Track();
        getline(file, track->id, ',');
        getline(file, track->name, ',');
        getline(file, track->artists, ',');
        getline(file, str);

        cout << i + 1 << " - " << track->name << " - " << track->artists << endl;

        tracks[i] = *track;
    }

    cout << endl;
}

int main() {
    fstream  file;
    auto *tracks = new Track[100];

    file.open("top2018.csv");

    if (file.is_open()) {
        readFile(file, tracks);

        cout << "Sorting the list." << endl << endl;
        MergeSort::mergeSort(tracks, 0, 99); // sorting by name
        InsertionSort::insertionSort(tracks, 100); // sorting by artists

        ofstream outputFile;
        outputFile.open("sortedtracks.txt");

        outputFile << "Sorted Spotify tracks" << endl;
        for (int i = 0; i < 100; i++) {
            outputFile << i + 1 << " - " << tracks[i].name << " - " << tracks[i].artists << endl;
        }

        cout << "Done!" << endl;

        file.close();
        outputFile.close();
    }
    else {
        cout << "File didn't open." << endl;
    }

    return 0;
}
