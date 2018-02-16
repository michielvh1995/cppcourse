# Linux

Make sure the following libraries are installed on your system:

* glew
* freeimage
* sdl2

On Ubuntu that would be:

```
$ sudo apt install libglew-dev libfreeimage-dev libsdl2-dev
```

To build, type:

```
$ make
```

This will result in an executable named `game`. To run it. Type:
```
$ ./game
```

## OPTIONAL

To spare yourself a vast amount of time, run the following command to add an alias `cg` ("compile game") to your .bashrc:
```
$ echo 'alias cg = "make && ./game"' >> ~/.bashrc
```

To totally rebuild the project type:

```
$ make clean
$ make
```

 #Nix (Linux)
If you use the [Nix](https://nixos.org/nix/) package manager,
it will automatically download all the dependencies when you build the project.
Simply type:

```
$ nix-build
$ ./result/game
```