/*
Macros for item counts and other values to help keep things consistent.

To include these macros in a file, add this line:
Your code editor of choice might display this as an error since the
the path begins with a "\", but it essentially represents the project root
(aka the "addons" folder itself, in a way)

#include "\BNA_KC_Gear\Macros.hpp"
*/

// Item Counts
// ITEM_2(className) gives two of that item, etc.
#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_5(a) a, a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a
#define ITEM_7(a) a, a, a, a, a, a, a
#define ITEM_8(a) a, a, a, a, a, a, a, a
#define ITEM_9(a) a, a, a, a, a, a, a, a, a
#define ITEM_10(a) a, a, a, a, a, a, a, a, a, a
#define ITEM_11(a) a, a, a, a, a, a, a, a, a, a, a
#define ITEM_12(a) a, a, a, a, a, a, a, a, a, a, a, a

// Returns text (normally code) in quotes
#define QUOTE(CODE) #CODE

#define HEARING_PROTECTION_CREW ace_hearing_lowerVolume = 0.6; \
ace_hearing_protection = 0.85;