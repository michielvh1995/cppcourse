# Linux
Make sure the following libraries are installed on your system:

* glew
* freeimage
* sdl2

On Ubuntu that would be:

```
$ sudo apt install libglew-dev
$ sudo apt install libfreeimage-dev
$ sudo apt install libsdl2-dev
```

To build, type:

```
$ make
```

This will result in an executable named `game`. To run it. Type:
```
$ ./game
```

To totally rebuild the project type:

```
$ make clean
$ make
```


# Nix (Linux)
If you use the [Nix](https://nixos.org/nix/) package manager, 
it will automatically download all the dependencies when you build the project.
Simply type:

```
$ nix-build
$ ./result/game
```

