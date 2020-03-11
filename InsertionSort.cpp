//
// Created by andre on 11/03/2020.
//

#include "InsertionSort.h"

InsertionSort::InsertionSort() = default;

void InsertionSort::insertionSort(Track *tracks, int size) {
    for (int j = 1; j < size; j++) {
        Track pivot = tracks[j];
        int i = j - 1;
        while (i >= 0 && tracks[i].artists > pivot.artists) {
            tracks[i+1] = tracks[i];
            i--;
        }
        tracks[i+1] = pivot;
    }
}