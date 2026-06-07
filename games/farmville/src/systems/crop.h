#ifndef CROP_H
#define CROP_H

typedef enum
{
    CROP_NONE,
    CROP_WHEAT,
    CROP_CORN,
    CROP_CARROT
} CropType;

typedef struct
{
    const char *name;
    float growTime;
    int sellPrice;
} CropData;

extern CropData crops[];

#endif