//
// Created by andre on 11/03/2020.
//

#ifndef ED2_LAB01_MERGESORT_H
#define ED2_LAB01_MERGESORT_H

#include "Track.h"


class MergeSort {
public:
    static void mergeSort(Track *tracks, int first, int last);
private:
    MergeSort();
    static void merge(Track *tracks, int first, int mid, int last);
};


#endif //ED2_LAB01_MERGESORT_H
