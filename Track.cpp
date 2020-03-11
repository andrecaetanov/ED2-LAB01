//
// Created by andre on 09/03/2020.
//

#include "Track.h"
#include <utility>

Track::Track() = default;

Track::Track(string id, string name, string artists) {
    this->id = std::move(id);
    this->name = std::move(name);
    this->artists = std::move(artists);
}