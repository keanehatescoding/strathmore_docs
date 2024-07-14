I am going to be making a replica prototype of the game Space Invaders through this tutorial in the C language via this tutorial https://nicktasios.nl/posts/space-invaders-from-scratch-part-1.html.

The final program will lack the barriers and UFO in the original game though I might learn enough to implement this in the final draft.
## Creating a window
First we need to make a window to allow the game to render only in the window. We can make a window using the native windows api i.e Cocoa or WinAPI or use GLFW/QT which will make our application cross platform. We are going to go with the later to make our application cross platform and specifically use GLFW because it is open source and does not need me to give out my personal information to use it.
First we are going to include the header files that we are going to be using in this program.
```C
#include <stdio.h>
#include <glfw3.h>
```
Before creating a window we must define a way to get and handle errors. In GLFW, errors are reported via callback functions. The error callback is set in the GLFW using the func
```C
GLFWerrorfun glfwSetErrorCallback(glfwerrorfun cbfun)
```