# Mouse as Joystick
Joystick emulation for linux. Please see [this](https://github.com/memethyl/Mouse2Joystick.git) if you are on windows.

#### EXPERIMENTAL!!!
Not as feature rich and functional as Mouse2Joystick (currently)

# Usage
Make sure that you have libevdev installed on your machine.
```sh
# find your device in this list and its corresponding {eventX}
cat /proc/bus/input/devices | grep "Name\|Handlers" | sed '0~2G; s/^.*Name=\(.*\)/Device \1/; s/^.*Handlers=\(.*\)/\t\1/'

make
sudo ./mouse_as_joystick {eventX}
```
(mouse_as_joystick needs access to events in /dev/input/ and therefore must be run as root)

# Contribution
If you have any suggestions or improvements, PRs are greatly appreciated!!!

# References
- [GrantEdwards's uinput-joystick-demo](https://github.com/GrantEdwards/uinput-joystick-demo)
- [Libevdev](https://www.freedesktop.org/software/libevdev/doc/latest/index.html) documentation
