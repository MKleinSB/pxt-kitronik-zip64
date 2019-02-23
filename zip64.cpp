#include "pxt.h"
using namespace pxt;

/**
 * This is the :GAME ZIP64 Package for Calliope Mini and Callio:bit M
 */
//% color=#00A654 weight=100
namespace GAME_ZIP64 {

    bool initialized = false;
    int i, j;
    int led_state;

    //%
    void init() {
        if (initialized) return;
        //This function sets all the buttons on the :GAME ZIP64 to actually appear as buttons on the micro:bit
        #define ALLOC_PIN_BUTTON(id) new MicroBitButton(getPin(id)->name, id, MICROBIT_BUTTON_ALL_EVENTS, PullUp);
            ALLOC_PIN_BUTTON(MICROBIT_ID_IO_P3)   // P8 =C4=10
            ALLOC_PIN_BUTTON(MICROBIT_ID_IO_P6)   // P12=C12=13
            ALLOC_PIN_BUTTON(MICROBIT_ID_IO_P4)   // P13=C5=11
            ALLOC_PIN_BUTTON(MICROBIT_ID_IO_P10)  // P14=C6=17
            ALLOC_PIN_BUTTON(MICROBIT_ID_IO_P12)  // P15=P0=19
            ALLOC_PIN_BUTTON(MICROBIT_ID_IO_P16)  // P16=P3=Identische ID
        #undef ALLOC_PIN_BUTTON

        initialized = true;
    }
}
