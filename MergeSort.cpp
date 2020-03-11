//
// Created by andre on 11/03/2020.
//

#include "MergeSort.h"

MergeSort::MergeSort() = default;

void MergeSort::mergeSort(Track *tracks, int first, int last) {
    if (first < last) {
        int mid = (first + last)/2;
        mergeSort(tracks, first, mid);
        mergeSort(tracks, mid+1, last);
        merge(tracks, first, mid, last);
    }
}

void MergeSort::merge(Track *tracks, int first, int mid, int last) {
    int i1 = first;
    int i2 = mid+1;
    int k = first;
    auto *aux = new Track[100];

    while (i1 <= mid && i2 <= last) {
        if (tracks[i1].name < tracks[i2].name) {
            aux[k] = tracks[i1];
            i1++;
        }
        else {
            aux[k] = tracks[i2];
            i2++;
        }
        k++;
    }

    while(i1 <= mid) {
        aux[k] = tracks[i1];
        i1++;
        k++;
    }

    while (i2 <= last) {
        aux[k] = tracks[i2];
        i2++;
        k++;
    }

    for (int i = first; i <= last; i++) {
        tracks[i] = aux[i];
    }
}