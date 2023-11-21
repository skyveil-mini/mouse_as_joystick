CFLAGS = -O3 `pkg-config --cflags --libs libevdev`

mouse_as_joystick: mouse_as_joystick.c config.h
	cc ${CFLAGS} $< -o $@

clean:
	rm mouse_as_joystick
