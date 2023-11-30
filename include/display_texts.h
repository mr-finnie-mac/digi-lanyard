// display_texts.h

#ifndef DISPLAY_TEXTS_H
#define DISPLAY_TEXTS_H

// Define different types of disabilities
#define DISABILITY_NONE 0
#define DISABILITY_VISUAL 1
#define DISABILITY_AUDITORY 2
#define DISABILITY_MOBILITY 3
// Add more as needed...

// Structure to hold information about each disability type
typedef struct {
    const char* heading;
    const char* paragraph;
} DisabilityInfo;


enum Language { ENGLISH, SPANISH, FRENCH, GERMAN };  // Add more languages as needed


// Function to get display ENGLISH text based on the disability type
const DisabilityInfo* getDisplayInfo(int disabilityType, Language language);

// Function to get display SPANISH text based on the disability type
const DisabilityInfo* getDisplayInfoES(int disabilityType);
#endif

