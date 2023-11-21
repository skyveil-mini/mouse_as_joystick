#include <linux/input-event-codes.h>
#include <memory.h>

typedef unsigned char bool;
#define true 1
#define false 0

struct Config {
    // which mouse button maps to which joystick button
    struct MouseButtons {
        int left;
        int right;
        int forward;
        int back;
        int wheel;
    } mouse_buttons;

    /// movement sensitivity
    struct Sensitivity {
        int x;
        int y;
        int wheel;
    } sensitivity;

    // what rotating the wheel controls
    // (Default: noop)
    int wheel;

    // whether to grab the mouse or not
    // (Default: false)
    // P.S. not recommended: seeing the pointer on the screen makes it easier to control
    bool grab;

    // time to sleep between each event poll (in microseconds)
    // (Default: 0)
    int sleep_time;
} config = {
    .mouse_buttons = {
        .left = BTN_A,
        .right = BTN_B,
        .forward = BTN_X,
        .back = BTN_Y,
    },
    .sensitivity = {
        .x = 2,
        .y = 2
    }
};
