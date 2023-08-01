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


// Objects
// Macro for making a placeable version of a helmet
#define HELMET_HOLDER(CLASS_NAME, DISPLAY_NAME, HELM_NAME, SUBCAT) \
class CLASS_NAME: BNA_KC_HelmetHolder_P1_CR \
{ \
    displayName = DISPLAY_NAME; \
	editorSubcategory = __EVAL("BNA_KC_SubCat_Helmets_" + SUBCAT); \
    class TransportItems \
    { \
        class HELM_NAME \
        { \
            name = HELM_NAME; \
            count = 1; \
        }; \
    }; \
};