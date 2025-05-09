#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convertToMilitaryTime(char* timeStr) {
    char hh[3], mm[3], ss[3], period[3];

    // Extract time components
    strncpy(hh, timeStr, 2);
    strncpy(mm, timeStr + 3, 2);
    strncpy(ss, timeStr + 6, 2);
    strncpy(period, timeStr + 8, 2);

    hh[2] = mm[2] = ss[2] = period[2] = '\0'; // Null terminate strings

    int hour = atoi(hh);

    // Conversion logic
    if (strcmp(period, "AM") == 0) {
        if (hour == 12) hour = 0;
    } else { // PM
        if (hour != 12) hour += 12;
    }

    // Print in 24-hour format
    printf("%02d:%s:%s\n", hour, mm, ss);
}

int main() {
    char timeStr[11];
    scanf("%s", timeStr);  // Format: hh:mm:ssAM or hh:mm:ssPM

    convertToMilitaryTime(timeStr);

    return 0;
}
