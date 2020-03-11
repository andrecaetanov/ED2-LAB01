//
// Created by andre on 09/03/2020.
//

#ifndef ED2_LAB01_TRACK_H
#define ED2_LAB01_TRACK_H
#include <string>

using namespace std;

class Track {
public:
    Track();
    Track(string id, string name, string artists);

    string id;
    string name;
    string artists;
};


#endif //ED2_LAB01_TRACK_H
