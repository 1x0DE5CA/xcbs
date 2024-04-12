# XCBS

[![CMake - Windows, Linux (GCC, CLang)](https://github.com/xc0ff/xcbs/actions/workflows/cmake-multi-platform.yml/badge.svg)](https://github.com/xc0ff/xcbs/actions/workflows/cmake-multi-platform.yml)

> [!IMPORTANT]
> I have a cinnabon bun that I VILL eat and no one can stop me.

Essentially, a little (I guess?) project of a solo dev (me). I work on it to get better at programming in C and C++, and to get better with building tools, organizing and maintaining a project, and also to get better with all the github fuss. Now, to the actual description.

## Oh wait, what is this?

`xcbs` is a small utility program that checks XBOX controller's battery status on `GUIDE` button press. It is *(being)* designed for use under both Linux and Windows platforms. The project is maintained by me, a not so good developer, so expect bugs and whatnot.
As of right now, I am developing a Windows part of the program.

Please kindly take a look at my TODO and planned features lists!

## You want to try it?

If you happen to want to use my program there are a couple of ways for you to go about it.

### Download pre-built binaries

Of course, you can always download pre-built binary from the packages section.

### Building from source

That's where the fun begins.

#### Linux

```c
#include <stdio.h>
int main() {
  printf("look ma! i'm a real programmer!! haha! mom? oh god please no\n");
  return 0;
}
```

#### Windows

```C#
// I'm just tired of spending my evening here, alrigh? I will add a proper guide later!
Console.WriteLine("Hello, World!");
```

## TODO

- [x] shit pants
- [x] piss pants
- [ ] kill myself
- [ ] asdf

## Planned features

These are what I would love to see of my program in the end.

- [ ] Support for USB and BLE connection type controllers:
  - [ ] X360;
  - [ ] XOne;
  - [ ] Series X/S.
- [ ] React to `GUIDE` button presses.
- [ ] A nice little GUI window appearing on button press.
  - [ ] The window should appera on top of other windows (if possible).
  - [ ] The window should display the battery status and the number of connected controller if there're multiple of them.

## Credits

Thank you, GOD. I hate Windows API (hello, `XInputGetStateEx(DWORD dwUserIndex, XINPUT_STATE* pState)`).
